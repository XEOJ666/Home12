#include<stdio.h>
void C_test(int);
int main()
{
	int b;
	scanf_s("%d", &b);
	if (b <= 0)
	{
		printf("Error");
	}
	else
	{
		C_test(b);
	}
	return 0;
}
void C_test(int b)
{
	for (int row = b;row >= 1;row--)
	{
		for (int space = 1; space <= b - row; space++)
		{
			printf(" ");
		}
		for (int star = 1; star <= 2 * row - 1; star++)
		{
			printf("*");
		}
		printf("\n");
	}
}