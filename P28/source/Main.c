#include <stdio.h>
#include <stdlib.h>
#define S 5

void mA(int b[], int s);
void mE(int e);

int main(void)
{
	int a[S] = { 0,1,2,3,4 }, i;
	printf("Effects of passing entire array by reference :\n\nThe values of the original array are :\n");
	for (i = 0; i < S; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	mA(a, S);
	printf("The values of the modified array are :\n");
	for (i = 0; i < S; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n\n\nEffects of passing array element by value :\n\nThe value of a[3] id %d\n", a[3]);
	mE(a[3]);
	printf("The value of a[3] is %d\n", a[3]);
	system("pause");
	return 0;
}

void mA(int b[], int s)
{
	int j;
	for (j = 0; j < s; j++)
	{
		b[j] *= 2;
	}
}

void mE(int e)
{
	printf("Value in mE is %d\n", e *= 2);
}