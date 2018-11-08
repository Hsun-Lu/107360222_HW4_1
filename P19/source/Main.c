#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s1[20];
	char s2[] = "string literal";
	int i;
	printf("Enter the string : ");
	scanf_s("%20s", s1, 20);
	printf("s1 is : %s\ns2 is : %s\ns1 with spaces between characters is :\n", s1, s2);
	for (i = 0; s1[i] != '\0'; i++)
	{
		printf("%c ", s1[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}