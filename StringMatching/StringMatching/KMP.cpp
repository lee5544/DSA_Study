#include "KMP.h"

int* BuildNext(char* P) { //构造模式串P的next表
	size_t m = strlen(P), j = 0; //“主”串指针
	int* N = new int[m]; //next表
	int t = N[0] = -1; //模式串指针
	while (j < m - 1)
		if (0 > t || P[j] == P[t])  //匹配
			N[j++] = t++;
		else //失配
			t = N[t];
	return N;
}

int* BuildNext2(char* P)
{
	size_t m = strlen(P); size_t j = 0;
	int* N = new int[m];
	int t = N[0] = -1;
	while (j < m - 1){
		if (0 > t || P[j] == P[t]) {
			j++; t++;
			N[j] = (P[j] != P[t]) ? t : N[t];
		}
		else
			t = N[t];
	}
	return N;
}

int KMP(char* T, char* P)
{
	size_t n = strlen(T); size_t m = strlen(P);
	size_t i = 0; size_t j = 0;
	int* next = BuildNext(P);//构造next表
	while (i < n && j < m)
	{
		if (1>j || T[i] == P[j]) {
			i++; j++;
		}
		else {
			j = next[j];
		}
	}
	delete[] next;
	return i - j;
}