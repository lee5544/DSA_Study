
#include "others.h"

//�����������n�а���1�ĸ���
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

//�ݹ��������
int sumRecursive(int A[], int n)
{
	if (1 > n)
		return 0;
	else
		return sumRecursive(A, n - 1) + A[n - 1];
}

//�ݹ����鵹��
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
