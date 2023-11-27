#include <stdio.h>


int main()
{
	FILE* textfile = fopen("input.txt", "r");
	if (textfile == NULL)
	{
		printf("error\n");
		return 1;
	}
	
	char line[256];
	while (fgets(line, sizeof(line), textfile) != NULL)
	{
		printf("line = %s\n", line);
	}

	
	fclose(textfile);
}
