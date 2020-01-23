// Chapter01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hailstone.h"
#include "Sort.h"
#include "others.h"

int main()
{
	/*希尔顿序列测试*/
	int n = 28;
	int NumberofHailstone1 = 0;
	int NumberofHailstone2 = 0;
	hailstone_Recursive(n, NumberofHailstone1);
	NumberofHailstone2 = hailstone(n);
	std::cout << "Using Hailstone_Recursive() The length of the Hailstone(" << n << ")" << " is "
		<< NumberofHailstone1 << std::endl;
	std::cout << "Using Hailstone() The length of the Hailstone(" << n << ")" << " is "
		<< NumberofHailstone2 <<" \n"<< std::endl;

	/*起泡排序测试*/
	int A[] = { 1, 3, 2, 45, 44, 67 ,32 ,9 };
	int LengthofA = sizeof(A) / sizeof(int);
	std::cout << "Unsorting numbers:	";
	for (int i = 0; i < LengthofA; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
	bubblesort(A, LengthofA);//调用起泡排序
	std::cout << "Sorting numbers:	";
	for (int i = 0; i < LengthofA; i++)
		std::cout << A[i] << " ";
	std::cout << " \n" << std::endl;
	/*计算二进制数n中包含1的个数*/
	int num = 16;
	std::cout << "The number of \"1\" in " << num << " is " 
		<< OnesCounter(num) << " \n" << std::endl;

	/*测试递归版本的数组求和函数*/
	int Aa[] = { 0,1,2,3,4,5,6 };
	int nofAa = sizeof(Aa) / sizeof(int);
	std::cout << "The sum of Aa is (Recursive) " 
		<< sumRecursive(Aa, nofAa) << std::endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
