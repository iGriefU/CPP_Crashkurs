#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector<string> words;
    words.push_back("hello");
    words.push_back("there");
    words.push_back("general");
    words.push_back("kenobi");

    for (string const& x : words)
    {
        cout << x << " ";
    }
    
    return 0;

}