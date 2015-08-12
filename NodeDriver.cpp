#include <iostream>
#include "List.h";

using namespace std;

int main() {
	List l;

	l.AddNode(1);
	l.AddNode(6);
	l.AddNode(2);
	l.AddNode(9);
	//l.PrintList(); 

	//l.DeleteNode(1);
	//l.PrintList();

	l.AddFirst(99);
	l.AddFirst(91);
	l.AddFirst(64);

	l.AddLast(3203);

	l.InsertAfter(234, 2);
	l.InsertAfter(2, 64);


	l.PrintList();

	l.GetListSize();

	system("pause");
	return 0;
}