#include <stdio.h>

/*
https://stackoverflow.com/questions/11944314/ctrl-d-didnt-stop-the-whilegetchar-eof-loop

EOF is not a character. The EOF is a macro that getchar() returns when it reaches the end of input
or encounters some kind of error. The ^D is not "an EOF character". What's happening under linux
when you hit ^D on a line by itself is that it closes the stream, and the getchar() call reaches
the end of input and returns the EOF macro. If you type ^D somewhere in the middle of a line,
the stream isn't closed, so getchar() returns values that it read and your loop doesn't exit.
*/

int main()
{

    char ch;
    //scanf(" %c", &ch);

    //printf("ch = %c\n", ch);

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            printf("ENTER pressed\n");
        }
        putchar(ch);
    }


}
