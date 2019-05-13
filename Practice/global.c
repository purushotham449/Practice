/*
 * global.c
 *
 *  Created on: 12-May-2019
 *      Author: kernel
 */
#include <stdio.h>

void fun()
{
	static int a = 30;
	a++;
	printf("Inside Function static = %d \n", a);
	printf("Inside Function static address = %p \n", &a);
}



