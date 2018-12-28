#pragma once
#include "DataSet.h"
#include "Schedule.h"

class dataSet_6 :
	public DataSet
{
	/* Temporal Control and Solution Cycling Data
	 * (one line, followed by one* line for each schedule, + plus one line)
	 * (List of times or time steps may be continued over multiple lines in TIME LIST and STEP LIST schedules)
	 * 
	 * Variable                Description
	 * NSCH                    Number of Schedules.
	 *						   In the case of steady transport, NSCH may be set to zero to avoid unnecessary defining schedules.
	 *						   Zero is allowed only if transport steady-state. ie. CSSTRA = STEADY in data set 4.
	 * NPCYC                   Number of time steps in pressure solution cycle. Pressure is solved on time step numbered
	 *						   n(NPCYC) where n is a positive integer, as well as on initial time step.
	 * NUCYC                   Number of time steps in concentration/temperature solution cycle. Concentration/Temperature
	 *						   is solved on time step numbered n(NUCYC) where n is a positive integer,
	 *						   as well as on initial time step.
	 *						   
	 *						   Either NPCYC or NUCYC must be set to 1.
	 * (Line 2 to NSCH+1)
	 * SCHNAM                  Schedule name. A given schedule name may not be defined more than once. The names,
	 *						   "STEP_0","STEP_1", and "STEP_1&UP" are reserved.
	 *						   If transport is transient, the user must define a schedule named "TIME_STEPS" which specifies
	 *						   the starting time for the simulation and the sequence of times at which time steps end.
	 *						   Schedule "TIME STEPS" must contain two or more time values, including starting time.
	 * SCHTYPE                 One or two words. Schedule type.
	 *						   "TIME LIST" = a list of times
	 *						   "TIME CYCLE" = a sequence of times generated at specified intervals
	 *						   "STEP LIST" = a list of time steps
	 *						   "STEP CYCLE" = a sequence of time steps generated at specified intervals
	 *						   
	 *						   Schedule "TIME_STEPS" must be defined using a time based schedule.
	 *						   i.e either "TIME LIST" or a "TIME CYCLE"
	 * (For a TIME LIST schedule)
	 * CREFT                   one word. To define the schedule in terms of absolute time, specify "ABSOLUTE".
	 *						   To define the schedule in terms of elapsed time specify "ELAPSED".
	 * SCALT                   Scale factor to be applied to each time value in the list
	 * NTLIST                  The number of times in the list
	 * TLIST                   The list of times
	 *						   Schedule "TIME_STEPS" is defined as "TIME LIST" in terms of ELAPSED times,
	 *						   the times in TLIST are assumed to be relative to no time TICS specified in dataSet 1 of the ".ics"
	 *						   In that case, the first time in TLIST must be set to zero for schedule "TIME_STEPS" and TICS
	 *						   becomes the (absolute) starting time of the simulation.
	 * (For a TIME CYCLE schedule)
	 * CREFT                   one word. To define the schedule in terms of absolute time, specify "ABSOLUTE".
	 *						   To define the schedule in terms of elapsed time specify "ELAPSED".
	 * SCALT                   Scale factor to be applied to each time value in the list
	 * NTMAX                   Maximum number of time cycles allowed. i.e the maximum number of times allowed in the schedule,
	 *						   not including the initial time
	 * TIMEI                   Initial time. Cycling begin at time = TIMEI
	 * TIMEL                   Limiting time. Cycling continues until time >= TIMEL
	 * TIMEC                   Initial time increment
	 * NTCYC                   Number of cycles after which the time increment is updated. The current time increment
	 *                         is multiplied by TCMULT after every NTCYC cycles.
	 * TCMULT                  Factor by which the time increment is multiplied after every NTCYC cycles
	 * TCMIN                   Minimum time increment allowed
	 * TCMAX                   Maximum time increment allowed
	 * (FOR a STEP LIST Schedule)
	 * NSLIST                  The number of time steps in the list
	 * ISLIST                  The list of integer time steps may be continued over multiple lines of input.
	 * (FOR a STEP CYCLE Schedule)
	 * NSMAX                   Maximum number of time step cycles allowed, i.e the maximum number of time steps allowed in the
	 *						   schedule, not including the initial time step.
	 * ISTEPI                  Initial time step. Cycling begins at time step = ISTEPI
	 * ISTEPL                  Limiting time step. Cycling continues until time step >= ISTEPL
	 * ISTEPC                  Time step increment
	 * (LAST LINE)
	 *                        A single dash, '-' must be placed on the line below the last schedule 
	 */
public:
	dataSet_6(std::string data_);
	~dataSet_6();
	void parse_data() override;

private:
	int nsch;
	int npcyc;
	int nucyc;
	std::vector<Schedule *> scheduleList;
};

