#include "tests.h"
#include "bubblesort.h"
#include "printarray.h"

void testSort()
{
	int t1[] = { 0 };
	int t2[] = { 1, -1, -2, 2 };
	int t3[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int t4[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	bubbleSort(t1, sizeof(t1) / sizeof(t1[0]));
	printAr(t1, sizeof(t1) / sizeof(t1[0]));

	bubbleSort(t2, sizeof(t2) / sizeof(t2[0]));
	printAr(t2, sizeof(t2) / sizeof(t2[0]));

	bubbleSort(t3, sizeof(t3) / sizeof(t3[0]));
	printAr(t3, sizeof(t3) / sizeof(t3[0]));

	bubbleSort(t4, sizeof(t4) / sizeof(t4[0]));
	printAr(t4, sizeof(t4) / sizeof(t4[0]));
}

void testAll()
{
	testSort();
}