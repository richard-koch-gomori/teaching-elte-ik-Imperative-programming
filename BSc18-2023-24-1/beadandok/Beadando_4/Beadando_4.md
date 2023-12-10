# 4. beadandó

## 1 pont

Készítsen `Person` néven `struct`-ot, amellyel egy személyt reprezentálhatunk.
Egy személynek van neve (karaktertömb, maximum 30 karakterből állhat a neve),
életkora (egész szám), vmint tároljuk hogy házas-e (igen/nem).

Vezessen be `Person_t` néven típusaliast-t a `Person` `struct`-ra.

## 1 pont

Írjon `get_younger_marriage()` néven függvényt, amely paraméterként
személyek tömbjét kapja, és visszatér a legfiatalabb házas személyre mutató pointer-rel.

## 2 pont

Írjon főprogramot, amelyben megkérdezi a felhasználótól hány személy adatait szeretné
tárolni (egész szám).
Allokáljon a heap-en ennyi személynek elegendő dinamikus memóriát,
majd olvassa be a felhasználótól a személyek adatait, tárolja a lefoglalt dinamikus memóriaterületen.

## 1 pont

Ha minden beolvasás sikeres, próbáljuk ki a `get_younger_marriage()` függvényt, és jelenítsük meg
a képernyőn a legfiatalabb személy adatait, majd szabadítsuk fel a dinamikus memóriát.





