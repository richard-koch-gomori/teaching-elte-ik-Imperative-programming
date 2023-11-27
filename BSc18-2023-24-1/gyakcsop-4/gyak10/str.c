#include <stdio.h>
#include <string.h>

#define MAX_STRING 256

int main()
{
     char str[] = "hello";
     str[0] = 'A';
     printf("%s\n", str);
     
     char str2[MAX_STRING];
     printf("Enter a string: ");
     fgets(str2, MAX_STRING, stdin);
     printf("str2 = %s\n", str2); // "hello\0\0"
     
     int i = 0;
     while (str2[i] != '\0')
     {
		 i++;
	 }
	 printf("str2 len before removing n = %d\n", i);
	 str2[i - 1] = '\0';
	 printf("str2 = %s\n", str2);
	 printf("str2 en = %d\n", strlen(str2));
	 
	 if (strcmp(str2, "hello") == 0) // if (!strcmp(...
	 {
		 printf("egyezik\n");
	 }
	 else
	 {
		 printf("nem egyezik\n");
	 }
 }
 
 
