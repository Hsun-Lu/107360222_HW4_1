#include <stdio.h>
#include <stdlib.h>

void in(int *);

int main()
{
	int a[3] = { 3,5,7 }, i;
	for (i = 0; i < 3; i++)
	{
		printf("%d   ", a[i]);
	}
	printf("\n");
	in(a);
	for (i = 0; i < 3; i++)
	{
		printf("%d   ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

void in(int *b)
{
	int t[3], i;
	for (i = 0; i < 3; i++)
	{
		t[2 - i] = b[i];
	}
	for (i = 0; i < 3; i++)
	{
		b[i] = t[i];
	}
}