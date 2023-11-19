# Értékelési szempontok

(Évfolyamszintű értékelési szempontok)

## Játék inicializálása (4 pont)
- ​ ha indokolatlanul "csúnya"/beégetett -1v2 pont

## Következő tetrisz elem beállítása (5 pont)
- random generátor megfelelő használata 2pont
- random seed megfelelő használata 1pont (egyszer, praktikusan  a mainben)
-  polyomino-k beállítása 2 pont

## Aktuális játékállás kirajzolása (5 pont)
- következő elem 1.5 pont
- tábla kirajzolása valamilyen kerettel, oszlop számokkal 3.5 pont

## Játék frissítése (26 pont)
- játék vége figyelés
      - nem fér be az elem (jobbra kilógna, új indexet kérünk) 3 pont
      - nem fér be és/vagy nincs üres hely az oszlopban 4pont
- ​lehetséges szabad hely
      - bal oldal (oszlop) kiszámolása 4 pont
      - jobb oldal (oszlop) kiszámolása, ha releváns 5 pont
      - az elem alakjának figyelembe vétele 6 pont
- ​az elem korrekt elhelyezése a mátrixon 4 pont

## Főprogram (10 pont)
- kommunikáció a felhasználóval (köszönések, feladat, üzenetek, játék vége stb.) 3 pont
- bemeneti karakter folyam (csak érvényes karakterek, EOF kezelése, hibás karakterek kezelése) 5 pont
-  a sikeresen elhelyezett elemek számolása 2 pont

Makrók használatának mellőzése -2 pont  
Globális változók használata -2 pont / változó  
Nem definiált viselkedés bent hagyása  
- mínusz pontok a súlyosság illetve darab szám függvényében
Egyéb csúnya kódolás, kódismétlés  
- mínusz pontok az elvárható kódminőségtől való eltérés függvényében


