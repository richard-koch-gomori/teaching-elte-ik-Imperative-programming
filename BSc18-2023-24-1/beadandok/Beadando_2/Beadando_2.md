# 2. beadandó

## 1. feladat (3.5 pont)

Ebben a feladatban megvalósítunk egy "paritásos tömb"-öt: egészek
olyan tömbje, ahol a páros számok a tömb elején, a páratlan számok a
tömb végén helyezkednek el.

Legyen például a tömb maximális mérete 10. Kezdetben a tömb üres: \_ \_ \_ \_ \_ \_ \_ \_ \_ \_

A 2 hozzáadása után: 2 \_ \_ \_ \_ \_ \_ \_ \_ \_

A 7 hozzáadása után: 2 \_ \_ \_ \_ \_ \_ \_ \_ 7

Az 1 hozzáadása után: 2 \_ \_ \_ \_ \_ \_ \_ 1 7

A 9 hozzáadása után: 2 \_ \_ \_ \_ \_ \_ 9 1 7

A 4 hozzáadása után: 2 4 \_ \_ \_ \_ \_ 9 1 7

Definiáljon `MAX_ARRAY_SIZE` néven egy preprocesszor szimbólumot, értéke 10, amely
szimbólumot használjuk a tömb maximális méretére hivatkozáskor
(beégetett értékek helyett).

A `main()` függvényen belül definiáljon előjeles egészek (`int`) tömbjét, amelynek mérete `MAX_ARRAY_SIZE`, és minden
elemét kezdetben -1-re inicializáljuk.
Az 1. feladatban szükséges megoldás bár előjeles egészeket tárol, csak
nemnegatív egész számok tárolására lesz alkalmas, mert a tömbbeli üres
helyeket (\_) a -1-gyes értékkel fogjuk reprezentálni.

Készítsen `PrintParityArray(array, size)` néven függvényt, amely kiírja a
képernyőre a tömb elemeit. Az üres helyeket a -1-gyes értékkel
reprezentáljuk, a -1-gyes tömbelemek ne kerüljenek kiírásra (üres hely
esetén ne kerüljön semmi a képernyőre).

A `main()` függvény egy `even_idx` és
`odd_idx` változókban tárolja, hogy páros illetve páratlan beszúrandó
elem esetén mi a következő szabad index a tömbben. Például, ha a tömb
2 \_ \_ \_ \_ \_ \_ \_ 1 7, akkor `even_idx=1` és `odd_idx=7`.

A `main()` függvényben olvasson be a felhasználótól 5 db. egész számot,
és szúrja be a tömbbe a fent elmondottak figyelembevételével a megfelelő indexű helyre.
Ha nem pozitív számot ír be a felhasználó, írjon ki hibaüzenetet a képernyőre,
az adatbeolvasást ne folytassuk és a tömb elemei se íródjanak ki a képernyőre.
(Azaz lépjen ki a program. Azt nem kell ellenőrizni, hogy a felhasználó
egész számot írt-e be. Értelemszerűen ha a felhasználó más számokat ír
be a billentyűzeten, akkor azokra is működjön jól a program.)

A `PrintParityArray(array, size)` függvény segítségével írja ki a tömb elemeit kétszer:
az tömb inicializálása után és mind az 5 db. szám beszúrása után.


## 2. feladat (0.5 pont)

Írj programot, amely összeadja egy egészeket tároló tömbben az összes elemet!

## 3. feladat (0.5 pont)

Egészítsd ki a 2-es feladatot úgy, hogy legyen egy extra tömb, amely súlyokat határoz meg az elemekhez, és így számold ki az összeget! 
> - Pl. Első tömb: [1, 2, 3, 4, 5], második: [1, 1, 2, 3, 5], az összeg: 1\*1+1\*2+2\*3+3\*4+5\*5

A 2., 3. és 4. feladatban a vizsgált tömb lehet beégetett értékeket tartalmazó, `main()`-ben definiált.

## 4. feladat (0.5 pont)

Alakítsd át az előző feladatot úgy, hogy átlagot tudjon számolni! (Tudjon lebegőpontos súlyokkal is számolni.)


