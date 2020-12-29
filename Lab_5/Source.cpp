#include "list.h"
int main()
{
	list test;
	test.addFirst(10);
	/*test.addLast(20);
	test.addFirst(5);
	test.addLast(30);*/
	test.show();
	test.removeLast();
	test.show();
}