

#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int val;
    // �nhivatkoz� strukt�ra: �nmag�ra mutat� pointer
    struct node* next;
} node_t;


int main()
{
    node_t* head = malloc(sizeof(node_t));

    head->val = 17; // ugyanaz mint: (*head).val
    head->next = malloc(sizeof(node_t)); // l�ncol�s l�trehoz�sa: next egy m�sik ilyen struct p�ld�nyra mutat

    //(head->next)->val = 72;
    node_t* ptr = head->next;
    ptr->val = 72;

    printf("%i %i\n", head->val, (head->next)->val);

    // vigy�zat, az t�rt�nik amit �rtunk: a head �ltal mutatott struct m�sol�dik le,
    // nem az eg�sz l�ncolt lista
    // a m�solat next pointer-e az eredeti a 2. alkalommal malloc()-olt struct-ra mutat
    // mert annak csak a pointer-e m�sol�dott le
    node_t head_copied = *head;
}

