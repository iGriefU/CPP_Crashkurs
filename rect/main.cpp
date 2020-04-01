#include <iostream>
#include "rect.h"

using namespace std;
Rect::Rect(int w, int h){
    m_width = w;
    m_height = h;
    cout << "Rect: " << w << " x " << h << endl;
    cout << "I was born to die, not to perish" << endl;
}

void Rect::draw(){
    for (int y=0;y<m_height; y++){
            for (int x=0;x<m_width;x++){
                cout << "+";

            }
        cout<<endl;
    }
}
int main(){
    Rect* klasse = new Rect(2,3);
    delete klasse;
    return 0;
}