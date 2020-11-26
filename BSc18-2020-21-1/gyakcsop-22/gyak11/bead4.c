

#include <stdio.h>
#include <stdlib.h>


struct Person
{
    char name[30];
    unsigned age;
    char job[30];
};


int main()
{
    size_t max_size = 10; // az adatbázis max mérete
    size_t i = 0; // az éppen tárolt person-ok száma
    struct Person* iterator;

    iterator = malloc(max_size * sizeof(struct Person));
    // if (iterator == NULL) ...

    char ch;
    while (1)
    {
        printf("menu: ");
        scanf(" %c", &ch);
        if (ch == 'a')
        {
            // ha elfér az adatbázisban
            printf("Enter name: ");
            fflush(stdin);

            //fgets(iterator[i].name, 30, stdin); // iterator[i] == *(iterator + i)
            scanf("%s", iterator[i].name);
            printf("Enter age: ");
            fflush(stdin);
            scanf("%u", &(iterator[i].age));
            printf("Enter job: ");
            fflush(stdin);

            //fgets(iterator[i].job, 30, stdin);
            scanf("%s", iterator[i].job);
            ++i;

            // else
            // realloc
        }
        else if (ch == 'l')
        {
            for (size_t idx = 0; idx < i; idx++)
            {
                printf("i = %zu\nname: %s, age: %u, job: %s\n\n", idx, iterator[idx].name, iterator[idx].age, iterator[idx].job);
            }
        }
    }

    return 0;
}

