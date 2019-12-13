
#orderednums

Ezt a feladatot nem oldottuk meg gyakorlaton, a kész kódról meséltem és mutattam meg debug-olási technikákat.

Készítsen orderednums néven egész számokat tároló rendszert: saját függvénykönyvtárat és hozzá tartozó fordítási egységet, amellyel egész számokat nagyság szerint növekvõ sorrendben tárolunk a heap-en. Írjon függvényeket, amelyek: inicializálja a kezelõ rendszert; kiírja a tárolt számokat; beszúr egy új számot; eldönti, hogy egy adott szám tárolva van-e; felszabadítja a rendszer által használt memóriát.

## Elsõ megoldás: meg1

orderednums_MaxElements a rendszer által kezelt max. elemek száma
orderednums_CurrentSize az éppen tárolt elemek száma
orderednums_pointer a tárterület kezdõ pointer-e

A megoldásban a forráskódban beégetett felsõ korlát van.
Az adatok a orderednums_data fordítási egységben vannak. A felhasználó eléri ezeket az adatokat, a rendszert el tudja rontani (ld main.c).

## Második megoldás: meg2

orderednums_MaxElements: a rendszer által kezelt max. elemek száma
orderednums_CurrentSize: az éppen tárolt elemek száma
orderednums_pointer: a tárterület kezdõ pointer-e

A megoldásban a forráskódban beégetett felsõ korlát van.
Az adatok a orderednums fordítási egységben vannak. A változók statikusak, a generált fájlból nem látszódnak ki, de a fordítási egységben mindenhol elérhetõek.

## Harmadik megoldás: meg3

A változónevek ebben a megoldásban már nem jók, az allokálástól eltekintve a forráskód változatlan

orderednums_MaxElements: a tároló éppen hány sizeof(int) részbõl áll
orderednums_CurrentSize: tárolt int-ek száma


