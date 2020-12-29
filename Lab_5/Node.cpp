#include "Node.h"
#include <iostream>

Double_Node::Double_Node(double n_data):
	m_data(n_data),next(nullptr)
{
	std::cout << "Node created!" << std::endl;
}

void Double_Node::show()
{
	std::cout << "Node is: " << m_data << std::endl;
}
