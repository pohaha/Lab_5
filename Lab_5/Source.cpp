#include "list.h"
#include <stdlib.h>
#include<iostream>
int main()
{
	list test;
	for (unsigned int i = 0; i < 10; i++) test.addFirst(rand() % 50+1);
	test.show();
	std::cout << "\n";
	test.taskFunction();
}