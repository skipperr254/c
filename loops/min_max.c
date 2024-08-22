#include <stdio.h>

int main()
{
	int first = 1;
	int val, maxval, minval;

	while (scanf("%d", &val) == 1)
	{
		if (first || val < minval)
			minval = val;
		if (first || val > maxval)
			maxval = val;
		first = 0;
	}
	printf("Maxvalue: %d\n", maxval);
	printf("Minvalue: %d\n", minval);
}
