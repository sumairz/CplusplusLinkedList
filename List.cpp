#include <iostream>

#include "List.h"

using namespace std;

List::List() {
	head = nullptr;
	curr = nullptr;
	temp = nullptr;
}

void List::AddNode(int addData) {
	nodePtr n = new Node;
	n->next = nullptr;
	n->data = addData;

	if(head != nullptr) {
		curr = head;
		while(curr->next != nullptr) {
			curr = curr->next;
		}
		curr->next = n;
	}
	else {
		head = n;
	}
}

void List::DeleteNode(int delData) {
	nodePtr delPtr = nullptr;
	temp = head;
	curr = head;

	while(curr != nullptr && curr->data != delData) {
		temp = curr;
		curr = curr->next;
	}

	if(curr == nullptr) {
		cout << delData << " is not in the list." << endl;
		delete delPtr;
	}
	else {
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		if(delPtr == head) {
			head = head->next;
			temp = nullptr;  
		}
		delete delPtr;
		cout << "The value " << delData << " was deleted." << endl;
	}
}

void List::PrintList()
{
	curr = head;
	while(curr != nullptr)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}

void List::AddFirst(int addData) {
	nodePtr newNode = new Node;
	newNode->data = addData;
	newNode->next = nullptr;

	if(head == nullptr) {					
		head = newNode;
	}
	else {
		newNode->next = head;		
		head = newNode;
	}
}

void List::AddLast(int addData) {
	nodePtr newNode = new Node;
	newNode->data = addData;
	newNode->next = nullptr;

	if(head == nullptr) {					
		head = newNode;
	}
	else {
		if(head != nullptr) {
		curr = head;
			while(curr->next != nullptr) {
				curr = curr->next;
			}
		curr->next = newNode;
		}
	}
}

void List::InsertAfter(int addData, int prevData) {
	nodePtr newNode = new Node;
	newNode->data = addData;
	newNode->next = nullptr;

	temp = head;
	curr = head;

	while(curr != nullptr && curr->data != prevData) {
		temp = curr;
		curr = curr->next;
	}

	if(curr == nullptr) {
		cout << prevData << " is not in the list." << endl;
	}
	else {		
		newNode->next = curr->next;
		curr->next = newNode;		
	}
}

void List::GetListSize() {
	curr = head;
	int count = 0;

	while(curr  != nullptr) {
		count++;
		curr = curr->next;
	}

	cout << "The list size is: " << count << endl;
}