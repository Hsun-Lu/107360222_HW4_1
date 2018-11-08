#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

int main(void) 
{
	int a[SIZE] = { 1,3,5,4,7,2,99,16,45,67,89,45 };
	int i, t = 0;
	for (i = 0; i < SIZE; i++)
	{
		t += a[i];
	}
	printf("Total of array element values is %d\n", t);
	system("pause");
	return 0;
}