#include <stdio.h>

static int a = 20;

void fun()
{
	static int a = 30;
	a++;
	printf("Inside Function static = %d \n", a);
	printf("Inside Function static address = %p \n", &a);
}

int main(int argc, char **argv) {
	printf("Main static = %d \n", a);
	printf("Main static address = %p \n", &a);
	static int a = 10;
	printf("Local static = %d \n", a);
	printf("Local static address = %p \n", &a);
	fun();
	printf("Function static = %d \n", a);
	printf("Function static address = %p \n", &a);
	fun();
	printf("Function static = %d \n", a);
	printf("Function static address = %p \n", &a);

	return 0;
}
