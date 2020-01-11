//hailstone ���У�ϣ�������У�

//�ݹ�ʵ��
int hailstone_Recursive(int n, int& num)
{
	if (n <= 1)
	{
		num++;
		return 0;
	}

	if (n % 2 == 0)
	{
		num++;
		return hailstone_Recursive(n/2, num);
	}
	else
	{
		num++;
		return hailstone_Recursive(3*n+1, num);
	}
}

//�ǵݹ�
int hailstone(int n)
{
	int length = 1;
	while (n > 1)
	{
		if (n % 2 == 0)
		{
			length++;
			n = n / 2;
		}
		else
		{
			length++;
			n = 3*n+1;
		}
	}
	return length;
}

