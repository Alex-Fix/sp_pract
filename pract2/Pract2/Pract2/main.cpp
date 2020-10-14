#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern "C" void calc(void);

extern "C"
{
	float X = 0;
	float Y = 0;
	float Z = 0;
};

int main()
{

	printf("Please, enter your numbers:\n");
	printf("X = ");
	scanf("%f", &X);
	printf("Y = ");
	scanf("%f", &Y);
	calc();
	printf("Z = %.4f\n", Z);
	return 0;
}
