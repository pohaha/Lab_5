#include "list.h"
#include <iostream>

void list::addFirst(const double& n_Element)
{
	Double_Node* n_Node = new Double_Node(n_Element);
	if (head == nullptr) tail = n_Node;
	n_Node->next = head;
	head = n_Node;
	Current_Size++;	
}

void list::addLast(const double& n_Element)
{
	Double_Node* n_Node = new Double_Node(n_Element);
	if (head == nullptr)
	{
		head = n_Node;
		tail = n_Node;
		Current_Size++;
		return;
	}
	tail->next = n_Node;
	tail = n_Node;
	Current_Size++;
}

double list::removeLast()
{
	if (head == null)
	{
		std::cout << "there are no elements in a list. Unable to remove elements!" << std::endl;
		return 0;
	}
	else 
	{
		Double_Node* tmp = head;
		double return_value = tmp->m_data;
		if (head == tail) tail = tmp->next;
		head = tmp->next;
		delete tmp;
		Current_Size--;
		return return_value;
	}
}

void list::show()
{
	Double_Node* tmp = head;
	for (unsigned int i = 0; i < Current_Size; i++)
	{
		tmp->show();
		tmp = tmp->next;
	}
}
