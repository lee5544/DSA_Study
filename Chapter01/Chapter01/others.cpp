
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