A *reverse* parancs megvalósítása
---------------------------------

Ebben a feladatban megvalósítjuk a *reverse* parancsot: az
argumentumként kapott fájlok tartalmát sorszámozva, fordított
sorrendben, és a sorokat megfordítva (tükrözve) írjuk ki a standard
outputra. Pl. ha a *test.txt* tartalma a következő:

```
alma
barack
szilva
```

…akkor a reverse parancs eredménye a következő:

```
3 avlizs
2 kcarab
1 amla
```

A megoldáshoz feltesszük, hogy bármely fájl teljes egészében elfér a
memóriában.

(Megjegyzés: a feladat alapja a *rev* Unix utility, amely a kapott
bemenet(ek) tartalmát eredeti sorrendben, de sorszámozás nélkül és a
sorokat megfordítva írja ki.)

Alapfeladat (9 pont)
--------------------

Definiálj `INITCAP` néven egy preprocesszor szimbólumot, amely
szimbólumot használjuk a fájl sorait tároló dinamikus tömb (heap-en tárolt sztringek)
inicializálására (ennek értéke legyen 8), és egy `BUFSIZE` nevű
preprocesszor szimbólumot, amelyet a sorok maximális hosszaként
használunk. Feltehetjük, hogy egy fájl sorai egyenként nem hosszabbak
1024 karakternél.

Az első megoldásban a program egy fájlt lesz képes beolvasni, és annak a
tartalmát fogja kiírni a fent leírt módon. A fájl nevét parancssori
argumentumként olvassuk be a főprogramban (`main`)! Ha a felhasználó nem
adott meg egy argumentumot sem, írjunk hibaüzenetet a standard outputra,
és fejezzük be a végrehajtást. Tegyünk ugyanígy, ha van megadott
argumentum, de a fájlt nem tudjuk megnyitni, egyébként nyissuk meg a
megadott fájlt.

Írd meg a `read` nevű függvényt, amely a parancssori argumentumként
kapott fájl sorainak beolvasását végzi. Paraméterül kapjon egy
fájlpointert (`fp`), egy, a heapen tárolt sztring tömböt (`lines`) és
egy egész számra mutató pointert (`lSize`), és a beolvasott tömböt adja
vissza. A `lines` tömb kezdetben `INITCAP` méretű. Olvassuk be soronként
a fájl tartalmát, és a sorokat tároljuk el a `lines` tömbben! Ha a sorok
száma eléri a tömb méretét, duplázzuk meg a tömb méretét! (Pl. ha
kezdetben a tömb mérete (elemszáma) 8, növeljük 16-ra.) Az `lSize`
pointeren keresztül adjuk vissza a beolvasott sorok számát (ami nem
feltétlenül egyezik meg a tömb méretével!).

Készítsd el a `write` függvényt, amely a beolvasott sztringeket
fordított sorrendben és tükrözve kiírja a képernyőre (standard output),
sorszámozással együtt, ahogy a
feladatsor elején létható volt. Ez a függvény a korábban feltöltött
sztring tömböt (lines) és a tömb elemeinek számát várja paraméterül.

Írd meg a `reverse` függvényt, amely egy fájlpointert vesz át
paraméterül. Foglalj le a heapen egy sztring tömböt a kezdeti mérettel.
Hozz létre egy egész típusú változót, amely a sorok számát fogja
tartalmazni, majd végezd el a beolvasást és a kiírást a `read` és
`write` függvények meghívásával!

A főprogram a fájl (sikeres) megnyitása után hívja meg a `reverse`
függvényt a megnyitott fájl feldolgozásához!

Modularizálás (3 pont)
----------------------

Bontsd fordítási egységekre a programot! A függvényimplementációk
kerüljenek külön fordítási egységbe, amelyhez készüljön el egy header
állomány. A header állományt védd header guarddal.

Több fájl feldolgozása (2 pont)
-------------------------------

Alakítsd át a programot úgy, hogy több fájl feldolgozására legyen képes.
Pl. ha a *test.txt* fájlt kétszer adjuk meg paraméterül, akkor a kimenet
a következő:

```
3 avlizs
2 kcarab
1 amla
3 avlizs
2 kcarab
1 amla
```

Ekkor a főprogram minden parancssori argumentumra megpróbálja elvégezni
a korábbi műveleteket. Ha valamely paraméter feldolgozása hibát
eredményez, a program jelezze a hibát, majd folytassa a végrehajtást a
következő paraméterrel.

Beolvasás a standard inputról (1 pont)
--------------------------------------

Alakítsd át a főprogramot úgy, hogy parancssori argumentumok hiánya
esetén ne fejeződjön be a végrehajtás, hanem a standard inputról
olvasson be sorokat a program, majd ezeket írja ki a megadott módon!
Tipp: A standard input (`stdin`) egy fájl típusú pointer (FILE\*).

Tanácsok
--------

-   Ne feledkezzünk meg a dinamikus memóriafoglalás sikerességének
    ellenőrzéséről, és a foglalt memória felszabadításáról!
-   Amennyiben a beolvasáshoz az `fgets` függvényt használod, ne feledd,
    hogy ha a sor rövidebb, mint a puffer maximális hossza, a függvény
    beolvassa a sortörést (ENTER-t, újsor karaktert) is, ami a kiírásnál
    hibás eredményhez vezethet.

