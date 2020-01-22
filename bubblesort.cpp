
#include "bubblesort.h"

void bubbleSort(int* ar, size_t size)
{
	
	if (ar != nullptr)
	{
		for (int i = 0; i < size - 1; i++)
		{
			bool flag = false;
			for (int j = 0; j < size - i - 1; j++)
			{
				if (ar[j] > ar[j + 1])
				{
					int Tmp = ar[j];
					ar[j] = ar[j + 1];
					ar[j + 1] = Tmp;
					flag = true;
				}
			}
			if (flag == false)
				break;
		}
	}
}