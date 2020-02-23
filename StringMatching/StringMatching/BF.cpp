#include "BF.h"

//字符串匹配——蛮力算法
//P：模式串 T：文本串
int BF1_stringmatching(char* T, char* P)
{
	size_t n = strlen(T); size_t m = strlen(P);//文本串和模式串的长度分别为n、m
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