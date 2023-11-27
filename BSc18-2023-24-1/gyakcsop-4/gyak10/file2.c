#include <stdio.h>


int main()
{
	FILE* textfile = fopen("output.txt", "w");
	if (textfile == NULL)
	{
		printf("error\n");
		return 1;
	}
	
    fputs("hello\n", textfile);
    fputs("world\n", textfile);

	
	fclose(textfile);
}
