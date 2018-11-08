#include <stdio.h>
#include <stdlib.h>
#define S 3
#define E 4

int Min(const int g[][E], int p, int t);
int Max(const int g[][E], int p, int t);
double A(const int sg[], int t);
void PA(const int g[][E], int p, int t);

int main(void)
{
	int s;
	const int sG[S][E] = { {77,68,86,73},{96,87,89,78},{70,90,86,81} };
	printf("The array is :\n");
	PA(sG, S, E);
	printf("\n\nLowest grade : %d\nHighest grade : %d\n", Min(sG, S, E), Max(sG, S, E));
	for (s = 0; s < S; s++)
	{
		printf("The average grade for student %d is %.2f\n", s, A(sG[s], E));
	}
	system("pause");
	return 0;
}

int Min(const int g[][E], int p, int t)
{
	int i, j, lG = 100;
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < t; j++)
		{
			if (g[i][j] < lG)
				lG = g[i][j];
		}
	}
	return lG;
}

int Max(const int g[][E], int p, int t)
{
	int i, j, hG = 0;
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < t; j++)
		{
			if (g[i][j] > hG)
				hG = g[i][j];
		}
	}
	return hG;
}

double A(const int sg[], int t)
{
	int i, total = 0;
	for (i = 0; i < t; i++)
	{
		total += sg[i];
	}
	return (double)total / t;
}

void PA(const int g[][E], int p, int t)
{
	int i, j;
	printf("      [0]  [1]  [2]  [3]");
	for (i = 0; i < p; i++)
	{
		printf("\nsg[%d]  ", i);
		for (j = 0; j < t; j++)
		{
			printf("%-5d", g[i][j]);
		}
	}
}