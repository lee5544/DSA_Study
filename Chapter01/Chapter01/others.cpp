
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

//���ֵݹ��������
int sumBinaryRecursive(int A[], int low, int high)
{
	int middle;
	if (low == high)
		return A[low];
	else
	{
		middle = (low + high) >> 1;
		return sumBinaryRecursive(A, low, middle) 
			+ sumBinaryRecursive(A, middle+1, high);
	}
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

//���ڶ�̬�滮��쳲����������������
int fibDP(int n)
{
	int f1 = 0; int f2 = 1;
	while ((n--) > 1)
	{
		f2 = f1 + f2;
		f1 = f2 - f1;
	}
	return f2;
}
