#pragma once
#include "Node.h"

class list
{
private:
	Double_Node* head=nullptr;
	Double_Node* tail = nullptr;
	unsigned int Current_Size=0;
public:
	void addFirst(const double& n_Element);
	void addLast(const double& n_Element);
	double removeFirst();
	double removeLast();
	double remove(const double& s_element);
	void taskFunction();

	void show();

};

