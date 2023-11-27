// futtatás: ./a.out arg1 arg2 arg3

#include <stdio.h>


int main(int argc, char* argv[])
{
	printf("argc = %d\n", argc);
	printf("%s\n", argv[0]);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("%s\n", argv[3]);
}

