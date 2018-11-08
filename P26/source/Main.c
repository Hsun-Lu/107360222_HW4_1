#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a[5];
	printf("    a = %p\n&a[0] = %p\n   &a = %p\n", a, &a[0], &a);
	system("pause");
	return 0;
}