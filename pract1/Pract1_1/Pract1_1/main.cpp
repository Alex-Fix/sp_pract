// ������ main.cpp
// �������� ������ ����������: ((3 + nNumber2) + _nNumber1)* Weight 
// � ���� ���������� �� �����
#include <stdio.h>

// ��� ����, ��� � ������� ����������� �� � ������� � ����� � ������������ ������
// ���� ����� ���� �������� �� ���, �� ������ �� �������� ���� � �� ���������
// extern "C"
extern "C" int  weightedsum(int num1, int num2);


extern "C"
{
	int nNumber1;
};

void main(void)
{
	int nNumber2, nRes;

	nNumber1 = 1;
	nNumber2 = 2;
	nRes = weightedsum(nNumber2, 3);
	printf("Result is: %d", nRes);
}
