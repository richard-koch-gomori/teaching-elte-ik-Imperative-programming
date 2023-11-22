#include <stdio.h>
#include "util.h"


int main()
{
    char result[256] = "vmi memoria szemet";
    create_string('C', 5, result); // azzal nem foglalkozunk, h result elég nagy-e
    printf("result: %s\n", result);
}
