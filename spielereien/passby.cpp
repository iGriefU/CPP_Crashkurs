#include <iostream>

void foo(int x,int& y){
    x++;y++; //x ist eine kopie, y ist eine referenz
    std::cout <<"x: " << x << " y: " << y << std::endl;
    std::cout << &x << " " << &y << std::endl;
}

int main(){
    int a=0,b=0;
    foo(a,b);
    std::cout << "a: " << a << " b: " << b << std::endl; //a ändert sich nicht, b ändert sich
    std::cout << &a << " " << &b << std::endl;
    return 0;    
}