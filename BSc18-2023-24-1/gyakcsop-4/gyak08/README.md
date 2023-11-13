# 8. gyakorlat

## ZH előtti megjegyzések

- ZH szövegezés: `PrintParityArray`, `PrintParityArray()` esetleg paraméterekkel: `PrintParityArray(param)`
- 1-2p pluszpontok ÉRTELMES feladatleíárson túli extra funkciókért, pl. menükészítés, randomizáls, ÉRTELMES hibakezelés, https://github.com/richard-koch-gomori/teaching-elte-ik-Imperative-programming/blob/master/BSc18-2023-24-1/konz-nov10/6_prime.c#L84

- ZH feladat szövegezésében "Kerüld a nem definiált viselkedést okozó utasításokat!
A végleges programban ezek megléte pontlevonással jár!" -> a nem definiált viselkedés (undefined behaviour)-okra ne görcsöljünk rá, inkább figyeljünk a követezőkre: növelő és csökkentő műveleteket (++, --) **külön utasításba helyezzük**, **lokális változókat MINDIG inicializáljuk**, nem `void` fv-nek mindig **legyen visszatérési értéke**, ne indexeljünk túl tömböt, pointer dereferálásnál garantáljuk h nem nullpointert dereferálunk

- tömbök átadása paraméterként **HA NEM MEGY, LEGYEN GLOBÁLIS VÁLTOZÓ!** -> csak 2-3 pont levonás, de a többi feladat zavartalanul megoldható

- feladadat szövegezésben **alprogram**, **függvény**, **eljárás** szinonímák

pl.

```c
#define ROW 2
#define COL 3

int multidim_array[ROW][COL] = {
    { 0, 0, 0 },
    { 0, 0, 0 }
};

void init_array() // paraméterezés helyett "beégetetten" multidim_array-t írja
{
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
        {
            multidim_array[i][j] = -1;
        }
    }
}
```

- a beadott kód forduljon le, az a tanszéki elvárás, h nem forduló kód nem értékelhető; ha beadás előtti percekben nem fordul a kód, **kommentezzék ki a nem forduló kódot**
- a warning-ok (figyelmeztetések) javítását **prioritizálják későbbre, a feladatok megoldása fontosabb!**

- ezen a tárgyon a VLA azaz amikor egy tömb mérete futási időben változó, TILOS!; **helyette `#define`-oljuk a tömb méretét**:

```c
#define MAX_ARRAY_SIZE 10

int main()
{
    int array[MAX_ARRAY_SIZE];
    for (int i = 0; i < MAX_ARRAY_SIZE; ++i) {}
}
```

- ha esetleg lebegőpontos véletlen szám generálást kér a feladat, akkor a szokásos egész véletlen szám generálás (`rand())`) és vmilyen lebegőpontos műveletet végeznek vele, pl. osztják egy beégetett egész számmal, vagy `RAND_MAX`-al -> 0 és 1 közötti véletlen szám

## 8. gyakorlat feladatok

~~~
- modify_array.c, multidim_array.c, matrix.c
- fsor01fel05_read_string.c
- fsor02_math.c
- fsor03fel04_leapyear.c
- forward_declaration.c
- create_string.c

fsor06/

- fel04_summarize.c
- fel05_summarize_iterators.c
- fel06_avg.c
- fel07_local.c
- fel08_nullptr.c
- fel09: a `scanf()` fv módosítani tudja a változót amit fv híváskor adunk
- fel10_smaller_idx.c

fsor07/

- fel01_hexa.c
- fel05_change_first_and_last_digit.c

nice_to_have/

- pass_multidim_array_with_parameter_length.c
- store_string_in_array.c
~~~

