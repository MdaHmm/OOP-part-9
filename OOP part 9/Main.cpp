#include <iostream>
#include "List.h"

// UTF-8
// Двунаправленный лист

int main() {

	setlocale(LC_ALL, "Russian");
	 
	List list;
	list.AddHead(10);
	list.AddTail(20);
	list.AddTail(40);
	list.AddTail(50);
	list.AddTail(2);
	list.ShowListFromHead();
	std::cout << "\n\n";
	//list.ShowListFromTail();

	list.DeleteEl(2);
	//list.DeleteAll();
	list.ShowListFromHead();
	std::cout << "\n\n";
	//list.ShowListFromTail();

	//std::cout << list.FindElement(2)->GetData();



	return 0;
}