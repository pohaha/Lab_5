#include "list.h"
int main()
{
	list test;
	test.addFirst(10);
	test.addLast(20);
	test.addLast(30);
	test.addFirst(40);
	test.show();
}