#include "Node.h"


Node::Node(int nodenum_,int noderegion_,double x_,double y_,double z_, double por_,double sop_):nodeNumber(nodenum_),nodeRegion(noderegion_),node_x(x_),
node_y(y_),node_z(z_),porosity(por_),storativity(sop_)
{
}


Node::~Node()
{
}
