#pragma once

#include <string>

//KMP�����㷨
int KMP(char* T, char* P);
int* BuildNext(char* P);//����next��
int* BuildNext2(char* P);//�Ľ��汾�Ĺ���next����
