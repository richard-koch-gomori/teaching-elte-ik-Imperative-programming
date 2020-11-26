

extern void counter(); // extern függvények esetén elhagyható
extern int count; // extern változók esetén nem hagyható el


int main()
{
    counter();
    counter();

    // (a) esetben ha a programhoz hozzálinkelnek egy másik fordítási egységet,
    // akkor a fordítási egység hozzáfér a count változóhoz,
    // foo belső logikáját el tudja rontani kívülről
    count = -10;
    counter();

    return 0;
}

