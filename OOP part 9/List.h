#pragma once
#include "Node.h"
#include <iostream>

class List
{
private:
	Node* _head;
	Node* _tail;
	int _size;

	bool AddMain(Node* node);
public:
	List();

	void AddTail(int data);

	void AddHead(int data);

	void ShowListFromHead();

	void ShowListFromTail();

	void DeleteAll();

	void DeleteEl(int index);

	Node* FindElement(int index);
};