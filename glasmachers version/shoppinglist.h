#pragma once
#include <string>

class ShoppingList
{
public:
	ShoppingList();
	~ShoppingList();

	bool empty();                             // is the list empty?
	unsigned int size();                      // number of different items
	std::string item(unsigned int index);     // item type/name
	unsigned int count(unsigned int index);   // number of items of that type/name

	void add(std::string item, unsigned int count = 1);

private:
	struct Entry
	{
		std::string item;
		unsigned int count;
	};

	unsigned int m_size;
	Entry* m_array;
};