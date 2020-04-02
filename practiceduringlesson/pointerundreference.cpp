#include <iostream>

int main(){
    int value=42;
    int* pointer = &value;
    int& ref = value;
    value++;
    std::cout <<" value "    <<  value      <<
                " pointer "  << *pointer    <<
                " reference "<<  ref        <<
                std::endl;
    return 0;
}