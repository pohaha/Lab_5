#pragma once
class Double_Node
{
public:
	Double_Node* next = nullptr;
	double m_data = 0;
	Double_Node(double n_data);
	void show(const unsigned int& index);
};

