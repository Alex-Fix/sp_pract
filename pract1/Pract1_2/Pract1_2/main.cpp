// ������ main.cpp
// �������� ������ ����������: (((3 + nNumber2) + nNumber1)* Weight) / nDivisor, 
// ������ �������� ������ ���������� ��������� �� ������ ������ ���������� �������
// divide ����� (������� ��������� �� ��� �), ��������� ������ �������� �� �����
#include <stdio.h>

// ��� ����, ��� � ������� ����������� �� � ������� � ����� � ������������ ������
// ���� ����� ���� �������� �� ���, �� ������ �� �������� ���� � �� ���������
// extern "C"
extern "C" int  weightedsum(int num1, int num2, char divisor);

extern "C" int divide(int arg1, int arg2)
{
	return arg1 / arg2;
}

extern "C"
{
	int nNumber1;
};

void main(void)
{
	int  nNumber2, nRes;
	char nDivisor;

	nNumber1 = 10000;
	nNumber2 = 20000;
	nDivisor = 10;
	nRes = weightedsum(nNumber2, 3, nDivisor);
	printf("Result is: %d", nRes);
}
