#include "shoppinglist.h"

ShoppingList::~ShoppingList(){
    delete [] itemList;
}
bool ShoppingList::empty(){
    
    if(itemList==NULL){ // auch machbar mit (listSize==0)
        return true;
    }
}
unsigned int ShoppingList::size(){

    return (listSize);
}

string ShoppingList::item(unsigned int index){
    return itemList[index].item;
}

unsigned int ShoppingList::count(unsigned int index){
    return itemList[index].count;
};

void ShoppingList::add(string item, unsigned int count){
    
    Entry* temp= new Entry[listSize++];
    for(int i=0;i<listSize;i++){ //liste kopieren
        temp[i].item = itemList->item;
        temp[i].count = itemList->count;
    }
    delete itemList;
    temp[listSize].item = item;  //neues element hinzufügen
    temp[listSize].count = count;
    Entry* itemList = temp; //überschreiben
    delete temp;
}