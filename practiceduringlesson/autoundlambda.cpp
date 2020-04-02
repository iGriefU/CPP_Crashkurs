#include <iostream>

int main(){
    int factor,number;
    std::cout << "Factor?: " << std::endl;
    std::cin >> factor; //get input for factor
    std::cout << "Number?: ";
    std::cin >> number;

    auto mult = [&](int n){return factor*n;}; // als predefined arg nimmt er factor intern als reference auf, multipliziert mit parameter
    std::cout << mult(number) << std::endl;

    return 0;

}