#include <stdio.h>
#include <stdlib.h>

int a(int &xref);

void main()
{
	int x = 100, y = a(x);
	printf("x=%d\n", x);
	system("pause");
}

int a(int &xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}