#pragma once
#include <string>

using namespace std;
class ShoppingList
{
public:
	ShoppingList();
	~ShoppingList();

	bool empty();							// is the list empty?
	unsigned int size();					// number of different items
	string item(unsigned int index);		// item type/name
	unsigned int count(unsigned int index); // number of items of that type/name

	void add(string item, unsigned int count = 1);

private:
	struct Entry
	{
		string item;
		unsigned int count;
	};
	Entry *itemList; //erstmal leere "liste" pointer, der die Entrys halten wird
	unsigned int listSize;
};