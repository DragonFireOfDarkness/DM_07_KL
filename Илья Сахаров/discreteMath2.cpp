// discreteMath2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

int *ABS_Z_N(int *numA); 
int POZ_Z_D(int *numA, int numLen);  
int MUL_Z_Z(bool sign, int numSeniorPos, int numA[10]);  
int ADD_ZZ_Z(bool sign, int numSeniorPos, int numA[10]);  
int SUB_ZZ_Z(bool sign, int numSeniorPos, int numA[10]); 

int main()
{
    return 0;
}

//���������� �������� �����, ��������� - �����������
int *ABS_Z_N(int *numA)
{
	if(*numA == 1)
		*numA = 0;

	return numA;
}

//����������� ��������������� ����� (1 - �������������, 0 � ������ ����, -1 - �������������)
int POZ_Z_D(int *numA, int numLen)
{
	int pos =	0;
	(*numA > 0) ? pos =	1 : pos =	-1;

	return pos;
}
