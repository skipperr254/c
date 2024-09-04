#include <stdio.h>

int main()
{
	int rows;

	printf("How many rows: ");
	scanf("%d", &rows);

	int columns = rows * 2 - 1;

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= columns; j++)
		{
			if (j >= rows - (i - 1) && j <= rows + (i - 1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
