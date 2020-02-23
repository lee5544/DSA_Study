#pragma once

#include <string>

//KMP基本算法
int KMP(char* T, char* P);
int* BuildNext(char* P);//构造next表
int* BuildNext2(char* P);//改进版本的构造next表函数
