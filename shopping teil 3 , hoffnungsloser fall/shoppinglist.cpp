#include "shoppinglist.h"

ShoppingList::ShoppingList()
{
}

ShoppingList::~ShoppingList() {}

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
    return itemList.size();
}

std::string ShoppingList::item(unsigned int index)
{
    return itemList[index].item;
}

unsigned int ShoppingList::count(unsigned int index)
{
    return itemList[index].count;
};

void ShoppingList::add(std::string item, unsigned int count) // version von Tobias Glasmachers
{
    for (Entry &e : itemList)
    {
        if (e.count == count && e.item == item)
        {
            e.count += count;
            return;
        }
    }
    Entry e;
    e.item = item;
    e.count = count;
    itemList.push_back(e);
}

void ShoppingList::sortByCount(){
    return sort( [] (Entry const& e1, Entry const& e2){return e1.count < e1.count;} );
}

void ShoppingList::sortByName(){
    return sort( [] (Entry const& e1, Entry const& e2){return e1.item < e1.item;} );
}
