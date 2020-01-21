#pragma once
#include <iostream>

using std::cout;
using std::endl;


template <typename T> void  printAr(const T* ar, const int n)
{
	if (n < 0)
	{
		cout << "Incorrect size of array \n";
		return;
	}
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