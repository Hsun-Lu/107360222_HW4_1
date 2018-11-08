#include <stdio.h>
#include <stdlib.h>

void sA(void);
void aA(void);

int main(void)
{
	printf("First call to each function :\n");
	sA();
	aA();
	printf("\n\nSecond call to each function :\n");
	sA();
	aA();
	printf("\n");
	system("pause");
	return 0;
}

void sA(void)
{
	static int a1[3];
	int i;
	printf("\nValues on entering sA :\n");
	for (i = 0; i <= 2; i++)
	{
		printf("a1[%d] = %d  ", i, a1[i]);
	}
	printf("\nValues on exiting sA :\n");
	for (i = 0; i <= 2; i++)
	{
		printf("a1[%d] = %d  ", i, a1[i] += 5);
	}
}

void aA(void)
{
	int a2[3] = { 1,2,3 };
	int i;
	printf("\nValues on entering aA :\n");
	for (i = 0; i <= 2; i++)
	{
		printf("a2[%d] = %d  ", i, a2[i]);
	}
	printf("\nValues on exiting aA :\n");
	for (i = 0; i <= 2; i++)
	{
		printf("a2[%d] = %d  ", i, a2[i] += 5);
	}
}