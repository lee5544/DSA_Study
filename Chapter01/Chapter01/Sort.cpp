// 排序

#include "Sort.h"

//起泡排序
void bubblesort(int A[], int n)
{
	bool sorted = false;
	int temp = 0;
	while (!sorted == true)
	{
		sorted = true;
		for (int i = 0; i < n-1; i++)
		{
			if (A[i] > A[i + 1])
			{
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
				sorted = false;
			}
		}
		n--;//每经过一次循环交换，最值就位
	}
}