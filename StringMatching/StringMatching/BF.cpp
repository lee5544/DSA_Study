#include "BF.h"

//�ַ���ƥ�䡪�������㷨
//P��ģʽ�� T���ı���
int BF1_stringmatching(char* T, char* P)
{
	size_t n = strlen(T); size_t m = strlen(P);//�ı�����ģʽ���ĳ��ȷֱ�Ϊn��m
	size_t i = 0; size_t j = 0;
	while (i < n && j < m){
		if (T[j] == P[i]){
			j++; i++;
		}
		else{
			j = 0; i = i - j +1;
		}
	}
	return i-j;
}

int BF2_stringmatching(char* T, char* P)
{
	size_t n = strlen(T); size_t m = strlen(P);
	size_t i = 0; size_t j = 0;
	for (i = 0; i < n - m + 1; i++) {
		for (j = 0; j < m; j++) {
			if (P[j] != T[i + j]) 
				break;
			if (j > m - 1)
				return i;
		}
	}
	return -1;
}