# Imperatív programozás (gyakorló feladatok)


További gyakorló feladatok. Email-ben beadható, átnézem (code review),
de pluszpont **nem** jár értük.


## Alapok: program, input-output, adattípusok, vezérlési szerkezetek, függvények

### feladat

Írjon C programot amely, amely bekér 2 lebegőpontos számot és egy műveleti jelet
(+, -, *, /) majd a kívánt műveletet elvégzi.

### feladat

Adott intervallumból írjuk ki a `7`-tel vagy `11`-gyel osztható egész számokat.

### feladat

Számítsa ki a `h = 1 + 1/2 + 1/3 + ... + 1/n` sor összegét.

### feladat

Olvassa be a háromszög három oldalának adatait és ellenőrizze a háromszög
szerkeszthetőségét (bármely két oldal összegének nagyobbnak kell lennie a harmadik
oldalnál). Számolja ki a háromszög kerületét és területét (Heron-képlet).

### feladat

Készítsen a Newton-approximáció alapján n-edik gyökvonásra használható C függvényt.  
`x(k + 1) = (1/n) * ((n - 1) * x(k) + A/((x(k))^(n - 1))`  
A formulában `k` a sorozat indexe, `n` a gyökkitevő, `A` a gyökvonás argumentuma.

### feladat

Készítsen programot, amely `n` darab elem szórását számolja ki.

### feladat

Írjon C függvényeket, amelyek maghatározzák a paraméterként kapott `n`-hez legközelebbi
négyzetszámot/prímszámot.

### feladat

Keressük meg az első `n`-nél nagyobb prímet.

## Tömbök, sztringek

### feladat

Írjon C függvényt, amely a paraméterben átadott sztringről eldönti, hogy tartalmaz-e
nagybetűt.

### feladat

Írjon programot, amely beolvas egy mondatot.  
Például: `Ma szep az ido.`  
Visszaírja: `Mava szevep avaz ividovo.`  
Tehát magánhangzó esetén v betűvel megismétli a magánhangzót.

### feladat

Olvasson be egy mondatot, amely ponttal (.) végződik. Írasson ki minden szót külön sorba.
A szavak között egy vagy több szóköz is lehet.

### feladat

Olvassunk be egy sztringet és egy karaktert. Számoljuk meg, hány olyan szó van
a mondatban, amely az adott karakterre végződik.

## Mutatók

### feladat

Írjon C programot, amelyben definiál és inicializál egy double, int és char
típusú változót. Ezután definiáljon és inicializáljon három pointer-t, amelyek
az előbb létrehozott változóra mutatnak. Írja ki a képernyőre a változók
(összesen 6 változó) memóriacímét, tartalmát és méretét (bájtokban).

### feladat

Írjon C programot, amelyben tárol egy konstans karaktersorozatot. Írja ki
a képernyőre a sztring elejéről az első szóköztől eltérő karaktert.

### feladat

Írjon C függvényt, amely egészre mutató pointer-t és azok darabszámát
fogadja. A függvény döntse el, hogy az egészek között van-e két olyan elem
amelyek szorzata a paraméterben kapott egész.

### feladat

Írjon C függvényt, amely egészre mutató pointer-t és azok darabszámát
fogadja. A függvény a páros számok között maximumot, a páratlan számok
között minimumot keres. A függvény adja meg a szélsőértékek mutatóját.

### feladat

