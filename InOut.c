// Insert Two Numbers, and Sum
#include <stdio.h>

int main(void)
{
	int x;	        // First input variable
	int y;			// Second input variable
	int sum;		// Sum variable

	printf("Insert First Num: ");
	scanf("%d",&x);   // input Keyboard, stored x
	printf("Insert Second Num: ");
	scanf("%d",&y);   // input keyboard, stored y

	sum = x + y;
	printf("Sum of Two Nums : %d\n", sum);

	return 0;
}

