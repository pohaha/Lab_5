#include "list.h"

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

void list::show()
{
	Double_Node* tmp = head;
	for (unsigned int i = 0; i < Current_Size; i++)
	{
		tmp->show();
		tmp = tmp->next;
	}
}
