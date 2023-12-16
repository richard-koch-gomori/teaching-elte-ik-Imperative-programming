

#include <stdio.h>

// 0 - user_guide
// 1 - generate_matrix
// 2 - save_matrix
// ...
// 5 - exit

void generate_matrix()
{
    // részfeladat megoldás
}

int main()
{
    int choice = -1;
    while (choice != 5)
    {
        printf("Enter a choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
             // printf("....");
        }
        else if (choice == 1)
        {
             // genearte_matrix
             generate_matrix();
        }

    }
}
