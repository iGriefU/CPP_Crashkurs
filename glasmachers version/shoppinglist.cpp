#include "shoppinglist.h"

ShoppingList::ShoppingList()
{
	m_size = 0;
	m_array = NULL;
}

ShoppingList::~ShoppingList()
{
	if (m_size > 0) delete [] m_array;
}

bool ShoppingList::empty()
{ return m_size == 0; }

unsigned int ShoppingList::size()
{ return m_size; }

std::string ShoppingList::item(unsigned int index)
{ return m_array[index].item; }

unsigned int ShoppingList::count(unsigned int index)
{ return m_array[index].count; }

void ShoppingList::add(std::string item, unsigned int count)
{
	for (unsigned int i=0; i<m_size; i++)
	{
		if (m_array[i].item == item)
		{
			m_array[i].count += count;
			return;
		}
	}
	Entry* newarray = new Entry[m_size + 1];
	for (unsigned int i=0; i<m_size; i++) newarray[i] = m_array[i];
	newarray[m_size].item = item;
	newarray[m_size].count = count;
	if (m_size > 0) delete [] m_array;
	m_size++;
	m_array = newarray;
}