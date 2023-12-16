#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 30

struct Student
{
    char name[MAX_NAME];
    int id;
    double avg;
    int age;
};

typedef struct Student Student_t;

Student_t* get_max_avg_student(Student_t array[], int size)
{
    int max_id = 0;
    for (int i = 1; i < size; ++i)
    {
        if (array[i].avg > array[max_id].avg)
        {
            max_id = i;
        }
    }
    return &array[max_id];
}

//int x;
//&x;

int main()
{
    Student_t* array = malloc(sizeof(Student_t) * 2);
    strcpy(array[0].name, "Mark");
    array[0].id = 1;
    array[0].avg = 4;
    array[0].age = 20;


    strcpy(array[1].name, "Peter");
    array[1].id = 2;
    array[1].avg = 4.4;
    array[1].age = 23;

    Student_t* result = get_max_avg_student(array, 2);
    printf("result = %d\n", (*result).id);
    printf("result = %d\n", result->id);

    free(array);
}

