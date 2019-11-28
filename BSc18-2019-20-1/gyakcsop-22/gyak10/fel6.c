

#include <stdio.h>


char* month_name(int n)
{
    // ha invalid h�nap sorsz�m, NULL pointer-rel t�r�nk vissza
    /*if (n < 1 || n > 12)
    {
        return NULL;
    }*/
    switch (n)
    {
        // ha j� a sorsz�m, akkor return "string"; a "string" liter�l els� elem�re mutat� pointer-t ad vissza
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";

        // default: if helyett; ha egyik �g sem hajt�dott v�gre
        default: return NULL;
    }
}


int main()
{
    printf("%s\n", month_name(2));
}

