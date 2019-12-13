


#include <stdio.h>


// a size m�ret� arr t�mb�t p�ros elemeit az arr1 t�mbbe,
// p�ratlan elemeit az arr2 t�mbbe tessz�k
// az s1 pointer-ben adja meg az arr1 m�ret�t
// az s1 pointer-ben adja meg az arr1 m�ret�t
// k: csak a t�mb els� k elem�t dolgozzuk fel
// ami hi�nyzik: az arr1 ter�let max. m�ret�t �t k�ne venni, h nehogy t�lhivatkozzuk
// ha �gyis �tvessz�nk az s1 v�ltoz� pointer-�t, a v�ltoz�t h�v�s el�tt be lehetne
// �ll�tani az arr1 max. m�ret�re, �s azt ellen�rizni
void foo(int arr[], int size, int k, int arr1[], int* s1, int arr2[], int* s2)
{
    // pl. // if (k > size) k = size;
    int j = 0; // p�ros
    int m = 0; // p�ratlan
    for (int i = 0; i < k; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            arr1[j++] = arr[i];
        }
        else
        {
            arr2[m++] = arr[i];
        }
    }
    *s1 = j;
    *s2 = m;
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%i, ", arr[i]);
    }
}


int main()
{
    int arr[50];
    for (int i = 0; i < 50; ++i)
    {
        arr[i] = i;
        //scanf("%i", &arr[i]); // a v�gs� megold�s ez, csak �r�n futtat�skor nem akarunk 50 elemet k�zzel bevinni
    }

    int arr1[50];
    int arr2[50];
    int s1, s2;

    foo(arr, 50, 40, arr1, &s1, arr2, &s2);

    printf("Even: ");
    PrintArray(arr1, s1);
    printf("\n");

    printf("Odd: ");
    PrintArray(arr2, s2);
    printf("\n");

    return 0;
}


