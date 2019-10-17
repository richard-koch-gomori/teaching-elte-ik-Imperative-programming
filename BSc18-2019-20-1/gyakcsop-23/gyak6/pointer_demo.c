

#include <stdio.h>


int main()
{
    int x = 14;

    // pi egy int* típusú pointer, int típusú változó memóriacímét tárolhatja
    int* pi;

    // &x: eredményül egy pointer-t ad, ami az x memóriacímét tartalmazza
    pi = &x; // pi az x változó memóriacímét tartalmazza

    // *pi a pi által mutatott területet érjük el
    printf("*pi = %i\n", *pi);

    // a pointereket %p-vel kiírva a pointerben tárolt memóriacím íródik ki
    // (hexadecimális számrendszerben)
    printf("x memoriacime: %p\n", &x);

    // mivel "pi az x-re mutat", a pi tartalma ugyanaz mint az elõzõ printout-ban
    printf("pi = %p\n", pi);
}

