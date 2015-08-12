#ifndef LIST_H
#define LIST_H

class List
{
	private:
		
		typedef struct Node
		{
			int data;
			Node* next;
		}* nodePtr;
		//OR
		// typedef struct Node* nodePtr;
		
		nodePtr head;
		nodePtr curr;
		nodePtr temp;

	public:
		List();
		void AddNode(int addData);
		void DeleteNode(int delData);
		void PrintList();

		void AddFirst(int addData);
		void AddLast(int addData);
		void InsertAfter(int addData, int prevData);

		void GetListSize();
};

#endif