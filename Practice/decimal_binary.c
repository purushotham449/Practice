/*
 * Decimal_Binary.c
 *
 *  Created on: 13-May-2019
 *      Author: kernel
 */
# include <stdio.h>

void decimal_to_binary(int divident)
{
	int result = 0;
	int rem = 0;
	int mul=1;
	while(divident > 0)
	{
		rem = divident % 2;
//		printf("a = %d\n", rem);
//		printf("mul = %d\n", mul);
		result = result + (rem *mul);
//		printf("result = %d\n", result);
		divident = divident / 2;
		mul = mul *10;
	}
	printf("Result Binary = %d\n", result);
}

