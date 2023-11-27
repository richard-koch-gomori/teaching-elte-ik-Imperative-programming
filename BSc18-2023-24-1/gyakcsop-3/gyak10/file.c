#include <stdio.h>


int main()
{
	FILE* textfile = fopen("input.txt", "r");
	if (textfile == NULL)
	{
		printf("error\n");
		return 1;
	}

	char str[256];
	while (fgets(str, sizeof(str), textfile) != NULL)
	{
		printf("str = %s\n", str);
	}
	
	fclose(textfile);
}


/*
char str[] = "256";
int i = atoi(str);
*/
