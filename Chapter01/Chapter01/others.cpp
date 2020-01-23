
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

int sumRecursive(int A[], int n)
{
	if (1 > n)
		return 0;
	else
		return sumRecursive(A, n - 1) + A[n - 1];
}
