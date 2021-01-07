#include "Node.h"
#include <iostream>

Double_Node::Double_Node(double n_data):
	m_data(n_data),next(nullptr)
{
	//some test features
	//std::cout << "Node created!" << std::endl;
}

void Double_Node::show(const unsigned int& index)
{
	std::cout << "Node #"<<index<<" is: " << m_data << std::endl;
}
