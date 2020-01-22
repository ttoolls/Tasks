#pragma once
#include <iostream>

using std::cout;
using std::endl;


template <typename T> void  printAr(const T* ar, const size_t n)
{
	if (ar != nullptr)
	{
		for (int i = 0; i < n; i++)
		{
			cout << ar[i] << ' ';
		}
		cout << endl;
	}
	else
		cout << "Incorrect array \n";
}