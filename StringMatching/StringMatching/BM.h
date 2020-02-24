#pragma once
#include <string>

/*初级版本*/
int* buildBC(char* P);//构造BC表
int BM_BC(char* T, char* P);//匹配算法
/*完全版本*/
int* buildSS(char* P);//构造ss表
int* buildGS(char* P);//构造gs表
int BM_GS(char* T, char* P);//匹配算法