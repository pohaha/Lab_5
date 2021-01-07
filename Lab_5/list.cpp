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

double list::removeFirst()
{
	if (head == nullptr)
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

double list::removeLast()
{
	if (head == tail) return removeFirst();
	Double_Node* previous = nullptr;
	Double_Node* current=head;
	while (current!=tail)
	{
		previous = current;
		current = current->next;
	}
	tail = previous;
	double rt_val = current->m_data;
	delete current;
	Current_Size--;
	return rt_val;

	return 0.0;
}



double list::remove(const double& s_element)
{
	Double_Node* previous = nullptr;
	Double_Node* current = head;
	while (current != nullptr)
	{
		if (current->m_data == s_element)
		{
			if (current == head) return removeFirst();
			if (current == tail) return removeLast();
			Current_Size--;
			previous->next = current->next;
			double rt_value = current->m_data;
			delete current;
			return rt_value;
		}
		previous = current;
		current = current->next;
	}
	std::cout << "no such element in a list!!" << std::endl;
	return 0.0;
}

void list::taskFunction()
{
	Double_Node* Max = head;
	Double_Node* Min = head;
	Double_Node* current = head;
	bool Mode = false;
	while (current != nullptr)
	{
		if ((current->m_data) < (Min->m_data))
		{
			Min = current;
			Mode = false;
		}
		if ((current->m_data) > (Max->m_data))
		{
			Max = current;
			Mode = true;
		}
		current = current->next;
	}
	std::cout << "Min is: " << Min->m_data << std::endl;
	std::cout << "Max is: " << Max->m_data << std::endl<<std::endl;
	int counter = 0;
	if(Mode)
	{
		while (Min->next != Max)
		{
			Min = Min->next;
			counter++;
		}
	}
	else
	{
		while (Max->next != Min)
		{
			Max = Max->next;
			counter++;
		}
	}
	std::cout << "elements inbetween: " << counter << std::endl;
	
}

void list::show()
{
	Double_Node* tmp = head;
	if (Current_Size == 0) std::cout << "No elements to show!" << std::endl;
	else
		for (unsigned int i = 0; i < Current_Size; i++)
		{
			tmp->show(i+1);
			tmp = tmp->next;
		}

}
