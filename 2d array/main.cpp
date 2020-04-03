#include "array2d.h"
#include <string>

int main()
{
	Array2D<std::string> arr(3, 3);
	arr.at(1, 1) = "cross";
	arr.at(2, 0) = "circle";
	arr.at(0, 1) = "cross";
	arr.at(2, 1) = "circle";
	arr.print();

	arr.resize(8, 8);
	arr.print();

	for (unsigned int y=0; y<8; y++)
	{
		for (unsigned int x=0; x<8; x++)
		{
			if ((x + y) % 2 == 0) arr.at(x, y) = "O";
			else arr.at(x, y) = "X";
		}
	}
	arr.print();
}