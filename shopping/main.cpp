#include "shoppinglist.h"
#include <iostream>

using namespace std;

int main(){

    ShoppingList liste;
    liste.add("Hefe",2);
    liste.add("Mehl",3);
    liste.add("Milch",2);
    liste.add("Eier",8);

    cout << "Auf dem Einkaufszettel steht:" << endl;
    for(unsigned int i=0;i<liste.size();i++){
        cout<< liste.count(i) << " mal " << liste.item(i) << endl;
    }
    return 0;
    
}