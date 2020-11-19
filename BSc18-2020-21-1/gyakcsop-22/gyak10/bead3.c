

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// ez a megoldás nem a legelegánsabb, de az elemi eszközök gyakorlására jó feladat volt
/*
bool isValidTime(char* time) // óra:perc "08:10"
{
    bool temp = false;
    for (int i = 0; time[i] != '\0'; ++i)
    {
        //    time[i] 0..9 számjegy-e
        //if (time[i] >= '0' && time[i] <= '9')
        
        //if (isdigit(time[i]) || time[i] == ':')
        //{
        //
        //}
        //else
        //{
        //    return false;
        //}
        
        //if (!(isdigit(time[i]) || time[i] == ':'))
        //{
        //    return false;
        //}
        if (!(time[i] >= '0' && time[i] <= '9') && time[i] != ':')
        {
            return false;
        }
        if (time[i] == ':')
        {
            if (temp)
            {
                return false;
            }
            temp = true;
            if (time[i+1] == '\0')
            {
                return false;
            }
        }
    }

    int hour = atoi(strtok(time, ":"));
    int min = atoi(strtok(NULL, ":"));

    if (hour < 0 || hour >= 24 || min < 0 || min >= 60)
    {
        return false;
    }
    else
    {
        return true;
    }
}
*/

// ha tudjuk hogy a bemenetnek pontosan hogyan kell kinéznie, és ezt nem szándékozunk
// a későbbiekben átalakítani, karakterenként is ellenőrizhetjük
bool isValidTime(char* time) // óra:perc "08:10"
{
    if (strlen(time) != 5) return false;

    char hour[3], min[3];

    hour[0] = time[0];
    hour[1] = time[1];
    hour[2] = '\0';

    min[0] = time[3];
    min[1] = time[4];
    min[2] = '\0';

    if (isdigit(hour[0]) && isdigit(hour[1]) && time[2] == ':' && isdigit(min[0]) && isdigit(hour[1]))
    {
        int ihour = atoi(hour);
        int imin = atoi(min);
        if (ihour >= 0 && ihour <= 23 && imin >= 0 && imin <= 59)
        {
            return true;
        }
        else return false;
    }
    else return false;
}

bool isValidTodo(char* todo)
{
    for (int i = 0; todo[i] != '\0'; ++i)
    {
        if (!(todo[i] >= 'a' && todo[i] <= 'z' || todo[i] >= 'A' && todo[i] <= 'Z'))
        {
            return false;
        }
    }
    return true;
}


int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Hibás bemenet!\n");
        return 1;
    }

    FILE* output = fopen("todolist.txt", "w");
    for (int i = 1; i < argc; i += 2)
    {
        //printf("time: %s; todo: %s\n", argv[i], argv[i+1]);
        if (isValidTime(argv[i]))
        {
            if (isValidTodo(argv[i+1]))
            {
                //char res[256];
                //sprintf(res, "%s - %s\n", argv[i], argv[i+1]);
                //fputs(res, output);

                fprintf(output, "%s - %s\n", argv[i], argv[i+1]);
            }
            else printf("Hibás bemenet!\n");
        }
        else printf("Hibás bemenet!\n");
    }

    fclose(output);

    return 0;
}

