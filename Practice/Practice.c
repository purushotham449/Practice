#include <stdio.h>

static int a = 20;
extern void fun();
extern void decimal_to_binary(int divident);

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
	decimal_to_binary(50);
	return 0;
}
