#include"swap.h"
int swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	return 1;
}