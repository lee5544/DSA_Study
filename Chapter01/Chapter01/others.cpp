
#include "others.h"

//计算二进制数n中包含1的个数
int OnesCounter(int n)
{
	int count = 0;
	while (n > 0)
	{
		count += (1 & n);
		n = n >> 1;
	}
	return count;
}

//递归数组求和
int sumRecursive(int A[], int n)
{
	if (1 > n)
		return 0;
	else
		return sumRecursive(A, n - 1) + A[n - 1];
}

//递归数组倒置
int reverseRecursive(int A[], int low, int high)
{
	int temp = 0;
	if (low < high)
	{
		temp = A[high];
		A[high] = A[low];
		A[low] = temp;
		return reverseRecursive(A, low + 1, high - 1);
	}
	return 0;
}
