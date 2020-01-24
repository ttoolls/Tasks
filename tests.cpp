#include "tests.h"
#include "bubblesort.h"
#include "printarray.h"

void testSort()
{
	int t1[] = { 0 };
	int e1[] = { 0 };

	int t2[] = { 1, -1, -2, 2 };
	int e2[] = { -2, -1, 1, 2 };

	int t3[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int e3[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	

	
	bubbleSort(t1, sizeof(t1) / sizeof(t1[0]));
	if (compareAr(t1, sizeof(t1) / sizeof(t1[0]), e1, sizeof(e1) / sizeof(e1[0])))
		printAr(t1, sizeof(t1) / sizeof(t1[0]));

	bubbleSort(t2, sizeof(t2) / sizeof(t2[0]));
	if (compareAr(t2, sizeof(t2) / sizeof(t2[0]), e2, sizeof(e2) / sizeof(e2[0])))
		printAr(t2, sizeof(t2) / sizeof(t2[0]));

	bubbleSort(t3, sizeof(t3) / sizeof(t3[0]));
	if (compareAr(t3, sizeof(t3) / sizeof(t3[0]), e3, sizeof(e3) / sizeof(e3[0])))
		printAr(t3, sizeof(t3) / sizeof(t3[0]));

	
}

bool compareAr(int* ar1, size_t n1, int* ar2, size_t n2)
{
	bool res = false;
	if (n1 == n2)
	{
		res = true;
		for (int i = 0; i < n1; ++i)
			{
			if (ar1[i] != ar2[i])
			{
				res = false;
				break;
			}
			}
	}
	return res;	
}

void testAll()
{
	testSort();
}