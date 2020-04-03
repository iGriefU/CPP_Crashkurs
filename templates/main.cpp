#include <iostream>
#include <stdlib.h>

template <typename T, unsigned int S>
unsigned int find(T const *array, T searchkey)
{
    for (unsigned int i = 0; i < S; i++)
    {
        if (array[i] == searchkey)
        {
            return i;
        }
    }
    return S;
}

int main()
{
    unsigned int array[8];
    for (auto &o : array)
    {
        o = rand() % 10;
        std::cout << o << std::endl;
    }
    auto index = find<unsigned int, 8>(array, 3);
    std::cout << 3 << " was found at the " << index << "th element." << std::endl;
    return 0;
}