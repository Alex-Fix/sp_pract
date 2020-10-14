// Модуль main.cpp
// Програма реалізує обчислення: (((3 + nNumber2) + nNumber1)* Weight) / nDivisor, 
// виклик програми ділення результату обчислень на задане другим аргументом функції
// divide число (функція визначена на мові С), результат роботи виводить на екран
#include <stdio.h>

// для того, щоб в програмі доступатися до С функцій і даних з асемблерного модуля
// вони мають бути оголошені як такі, що звязані по правилам мови С за допомогою
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
