#include "KMP.h"

int* BuildNext(char* P) { //����ģʽ��P��next��
	size_t m = strlen(P), j = 0; //��������ָ��
	int* N = new int[m]; //next��
	int t = N[0] = -1; //ģʽ��ָ��
	while (j < m - 1)
		if (0 > t || P[j] == P[t])  //ƥ��
			N[j++] = t++;
		else //ʧ��
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
	int* next = BuildNext(P);//����next��
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