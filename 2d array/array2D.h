#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

template <typename T>
class Array2D
{
public:
	Array2D(unsigned int columns, unsigned int rows)
	{
		m_columns = columns;
		m_rows = rows;
		m_data.resize(columns * rows);
	}

	unsigned int rows() const
	{ return m_rows; }
	unsigned int columns() const
	{ return m_columns; }
	unsigned int size() const
	{ return m_data.size(); }

	T const& at(unsigned int x, unsigned int y) const
	{ return m_data[x + y * m_columns]; }
	T& at(unsigned int x, unsigned int y)
	{ return m_data[x + y * m_columns]; }

	void resize(unsigned int columns, unsigned int rows)
	{
		std::vector<T> newdata(columns * rows);
		unsigned int r = std::min(m_rows, rows);
		unsigned int c = std::min(m_columns, columns);
		for (unsigned int y=0; y<r; y++)
		{
			for (unsigned int x=0; x<c; x++)
			{
				newdata[x + columns * y] = at(x, y);
			}
		}
		m_columns = columns;
		m_rows = rows;
		m_data = newdata;
	}

	void print() const
	{
		std::cout << "Array2D of size " << columns() << "x" << rows() << std::endl;
		for (unsigned int y=0; y<rows(); y++)
		{
			for (unsigned int x=0; x<columns(); x++)
			{
				if (x != 0) std::cout << " ";
				std::cout << at(x, y);
			}
			std::cout << std::endl;
		}
	}

private:
	unsigned int m_columns;
	unsigned int m_rows;
	std::vector<T> m_data;
};