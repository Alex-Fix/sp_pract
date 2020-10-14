// Модуль main.cpp
// Програма реалізує обчислення: ((3 + nNumber2) + _nNumber1)* Weight 
// і вивід результату на екран
#include <stdio.h>

// для того, щоб в програмі доступатися до С функцій і даних з асемблерного модуля
// вони мають бути оголошені як такі, що звязані по правилам мови С за допомогою
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
