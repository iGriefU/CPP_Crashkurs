#include "shoppinglist.h"

ShoppingList::ShoppingList()
{
    listSize = 0;
    itemList = nullptr;
}

ShoppingList::~ShoppingList()
{
    delete[] itemList;
}

bool ShoppingList::empty()
{

    if (listSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}
unsigned int ShoppingList::size()
{
    return (listSize);
}

std::string ShoppingList::item(unsigned int index)
{
    return itemList[index].item;
}

unsigned int ShoppingList::count(unsigned int index)
{
    return itemList[index].count;
};

/*void ShoppingList::add(string item, unsigned int count)
{

    Entry *temp = new Entry[listSize+1];
    for (unsigned int i = 0; i < listSize; i++)
    { //liste kopieren
        temp[i].item = itemList->item;
        temp[i].count = itemList->count;
    }
    delete itemList;
    temp[listSize].item = item; //neues element hinzufügen
    temp[listSize].count = count;
    itemList = temp; //überschreiben
    delete temp;
}*/ //vermute hier meinen fehler während runtime, bestätigt durch test

void ShoppingList::add(std::string item, unsigned int count) // version von Tobias Glasmachers
{
	for (unsigned int i=0; i<listSize; i++)
	{
		if (itemList[i].item == item)
		{
			itemList[i].count += count;
			return;
		}
	}
	Entry* newarray = new Entry[listSize + 1];
	for (unsigned int i=0; i<listSize; i++) newarray[i] = itemList[i];
	newarray[listSize].item = item;
	newarray[listSize].count = count;
	if (listSize > 0) delete [] itemList;
	listSize++;
	itemList = newarray;
}
