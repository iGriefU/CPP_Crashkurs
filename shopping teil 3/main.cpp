#include "shoppinglist.h"
#include <iostream>

using namespace std;

int main()
{

    ShoppingList liste;
    liste.add("Hefe", 2);
    cout << "Ist die Liste leer?" << endl;
    if (liste.empty())
    {
        cout << "  Ja, ab zum Aldi!" << endl;
    }
    else
    {
        cout << "  N\x94, ab in die K\x81" //noe, ab in die kueche
             << "che!" << endl;
    }
    liste.add("Hefe", 2);
    liste.add("Mehl", 3);
    liste.add("Milch", 2);
    liste.add("Eier", 8);
    liste.sortByCount();
    cout << "Auf dem Einkaufszettel steht:" << endl;
    for (unsigned int i = 0; i<liste.size(); i++)
    {
        cout << "  " << liste.count(i) << " mal " << liste.item(i) << endl;
    }
    cout << "Es wurden " << liste.size() << " Sachen gekauft, du Fettsack." << endl;
    
    return 0;
}

/*zum testen genutzte funktionen
liste.
    add
    count
    item
    empty
    size
    SUCCESS
*/