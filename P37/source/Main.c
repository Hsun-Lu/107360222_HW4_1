#include <stdio.h>
#include <stdlib.h>
#define S 100

int LS(const int a[], int k, int s);

int main(void)
{
	int a[S], x, sK, e;
	for (x = 0; x < S; x++)
	{
		a[x] = 2 * x;
	}
	printf("Enter integer search key :\n");
	scanf_s("%d", &sK);
	e = LS(a, sK, S);
	if (e != -1)
	{
		printf("Found value in element %d\n", e);
	}
	else
	{
		printf("Value not found\n");
	}
	system("pause");
	return 0;
}

int LS(const int a[], int k, int s)
{
	int n;
	for (n = 0; n < S; ++n)
	{
		if (a[n] == k)
		{
			return n;
		}
	}
	return -1;
}