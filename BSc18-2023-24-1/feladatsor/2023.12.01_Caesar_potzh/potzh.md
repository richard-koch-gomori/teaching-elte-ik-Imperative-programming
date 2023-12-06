# Imperatív Programozás Labor PótZH – 2023.12.01.

## Elvárások a programmal szemben

todo copy

## Caesar-rejtjelezés

A Caesar-rejtjelezés lényege az, hogy egy sztringet (pl. egy jelszó) átalakítjuk oly módon, hogy ránézésre
ne legyen felismerhető, mi volt az eredeti sztring, azonban egy titkosítási kulcs ismeretében
az visszafejthető legyen. A Caesar-rejtjelezés egy egyszerű titkosítási eljárás, amely
elnevezést Julius Caesar után kapta, aki ennek segítségével kommunikált tábornokaival.

Legyen adott egy eltolás (`shift`, nemnegatív egész szám). A Caesar-rejtjelezés a titkosítani
kívánt szöveg minden betűjét `shift`-tel tolja arrébb az ABC-ben. Legyen például `shift=1`,
ekkor a "password" sztring Caesar-rejtjelezése:

- a "p" utáni betű "q"
- az "a" utáni betű "b"
- ...
- a "d" utáni betű "e"

Így a rejtjelezett szöveg "qbttxpse", amit a kriptográfiában cipher-nek neveznek. A "qbttxpse"
szöveg ismeretében még nem tudja valaki, hogy az eredeti sztring mi volt, azonban a `shift=1`
ismeretében gyorsan vissza tudja fejteni, hogy a "password" volt a bemenet. A Caesar-rejtjelezés egy gyenge módszer, ugyanis pl. az összes `shift` kipróbálásával könnyen feltörhető, mi volt az eredeti sztring.

Az egyszerűség kedvéért ebben a feladatban csak a **26 betűs angol ABC kisbetűit** kell titkosítani: "abcdefghijklmnopqrstuvwxyz".

A feladat összesen 50 pontot ér.

Legalább 10 pontot kell gyűjteni a tárgy sikeres teljesítéshez.
A megoldásra 180 perc áll rendelkezésre.

A végén csak az egy darab **ZIP tömörített állományt** (`<neptun_kód>.zip`) kérjük feltölteni. (Az utoljára feltöltött megoldást pontozzuk.)

A kötelezően megvalósítandó alprogramok, részfeladatok:

### Titkosítás - `Caesar_encrypt()` - 7 pont

Az alprogram paraméterként megkapja a titkosítandó sztringet (karaktertömb), az eltolást, ill. egy másik a karaktertömöt, ahová a ciphertext-et elő fogja állítani. Az alprogram járja végig a titkosítandó sztringet, és ha az aktuális karakter az angol ABC kisbetűje, akkor a fent elmondottak alapján titkosít. Ha az aktuális karakter nagybetű, akkor alakítsuk kisbetűssé, és a kisbetűt titkosítsuk. (Azaz 'A' helyett 'a'-t titkosítsuk.) Ha az aktuális karakter bármi más, akkor azt bármilyen módosítás nélkül másoljuk a ciphertext-be.

Például, ha a 'b' betűhöz hozzá kell adni 2-őt, akkor az eredmény 'd' lesz. Tipp: Tároljuk egy globális karaktertömbben az ABC betűit. A 0. index így az 'a' betűt, az 1. index így a 'b' betűt, ..., a 25. index a 'z' betűt jelenti. Ekkor, a 'b' karakterről tudjuk, hogy az indexe 1, hozzáadunk 2-őt, így 3-at kapunk, és az ABC globális tömb 3. indexű eleme 'd'. (A karakter-index hozzárendeléshez kihasználhatjuk, hogy a C programozási nyelv a karaktereket azok ASCII sorszámával tárolja, amelyek egymást követő egész számok, vagy akár segédfüggvényeket is írhatunk, amelyek az ABC globális karaktertömb segítségével megkeresi egy karakter indexét az ABC tömbben ill. egy adott indexhez megadja az ABC tömbbeli karaktert.)

Az ABC utolsó betűje után az ABC első betűje következzen. Például, ha a 'z' betűhöz hozzá kell adni 2-őt, akkor az eredmény 'b' lesz. Tipp: Tároljuk preprocesszor szimbólumban az ABC hosszát (26). Az eltolt index kiszámolása után vegyük az összeg osztási maradékát az ABC hosszával. Például, 25 + 2 = 27, 27 maradéka 26-tal 1, ami a 'b' betű indexe.

### Visszafejtés - `Caesar_decrypt()` - 3 pont

A visszafejtő függvény működése analóg a titkosító függvénnyel, az eltolást az ellenkező irányba kell végezni. Az alprogram paraméterként megkapja a ciphertext-et (karaktertömb), az eltolást, ill. egy másik a karaktertömöt, ahová a visszafejtett sztringet elő fogja állítani.

A visszafejtéshez ugyanazt szükséges elvégezni, mint a titkosításhoz, de negatív `shift` értékkel, viszont ekkor is elvárás, hogy az ABC-t körkörösen járjuk be! Ekkor pl. ha a 'c' betűt (indexe: 2) -5-tel kell eltolni, akkor az így alakul: 2 + (-5) = -3, azaz az ABC végéről a harmadik betű, ami 'x' kell legyen (aminek az indexe: 23). Tipp: Hívjuk fel a `Caesar_encrypt()` alprogramot negatív eltolással, és a `Caesar_encrypt()` alprogram elején vizsgáljuk meg, hogy a paraméterként kapott `shift` negatív-e. Ha a `shift` negatív, akkor adjuk hozzá az ABC hosszát; ha nem negatív, akkor nem szükséges módosítani. A `Caesar_encrypt()` alprogramban már megírt osztási maradék az ABC hosszával így garantálni fogja az ABC körkörös bejárását mind pozitív, mind negatív eltolás esetében.

### Főprogram, modularizálás - 7 pont

Készítsen főprogramot, amelyben egy példa sztringen bemutatja a titkosító és visszafejtő függvények használatát. (Lehet beégetett adatokkal; **nem** elvárás a standard inputról olvasni.)

Bontsa fordítási egységekre programját. A titkosító és visszafejtő alprogram implementációk
kerüljenek külön `util` fordítási egységbe, amelyhez készüljön el egy header
állomány. A header állományt védje include guard-dal.

### Frekvenciaanalízis

A kriptográfiában frekvenciaanalízisnek hívják azt az eljárást, amikor a megszámolják, hogy ciphertext-ben melyik betű hányszor fordul elő, majd az adott nyelv sajátosságai alapján megtippelik, hogy a leggyakrabban előfordult betű melyik betűt titkosítja. Például, az angol nyelvben a leggyakrabban előforduló betű az 'e', ezért egy "értelmesen" hosszú ciphertext-ben a leggyakrabban előforduló betű és az 'e' betű távolsága egy jó tipp a titkosítási kulcsra (eltolásra). Ekkor, a teljes visszafejtéshez elég kettő alkalommal végigmenni a ciphertext-en, szemben az összes lehetőség kipróbálásával, ahol erre legrosszabb esetben 26-szor van szükség. Természetesen általában nem garantált, hogy a szövegben a leggyakrabb betű valóban 'e'.

#### Fájl megnyitás - 5 pont

Adott egy input.txt fájl, melyben soronként Caesar-rejtjelezett sztringek vannak. A sorokról feltesszük, hogy 256 méretű karaktertömbben tárolhatóak. (Azaz **nem** elvárás bármekkora input kezelése.)

A program parancssori argumentuma legyen a feldolgozandó input fájl neve, tehát a programot így szükséges indítani:

Linux-on:

~~~
./a.out input.txt
~~~

Windows-on:

~~~
a.exe input.txt
~~~

Ha a program paraméterezését nem tudja kezelni, akkor a megnyitni kívánt fájl neve legyen beégetett.

Nyissuk meg a paraméterként kapott fájlt olvasásra. Ha nem sikerült a megnyitás, írjunk hibaüzenetet a képernyőre, majd 0-tól különböző exitkóddal álljon le a programunk.

#### Gyakoriság - 14 pont

Inicializáljunk egy egészeket tartalmazó `freq` tömböt 0-ákkal, amelynek a mérete az ABC hossza legyen, és ebben a tömbben feladatunk számolni, hogy melyik betű milyen gyakorisággal szerepel a ciphertext-ben. A karakter-index hozzárendelés itt is a korábban elmondottak alapján történjen. (Azaz a 0. indexű elem az 'a' betű gyakorisága stb.)

Soronként dolgozzuk fel a fájl tartalmát az `fgets()` könyvtári függvénnyel. A fájl feldolgozásakor **nem szükséges** a fájl tartalmát memóriában tárolni. Tipp: Az `fgets()` függvény a fájl egy adott sorát olvassa be a neki adott karaktertömbbe, amely tartalmazni fogja a sortörést ('\n') is. A sztring hosszának megállapításával az utolsó karaktert írjuk felül nullbájttal ('\0'), így nem kell a sorvége jelekkel foglalkoznunk.

Egy adott sor feldolgozása:  
Karakterenként haladjunk végig a sztringen, majd az aktuális karakternek megfelelő indexű elemet a `freq` tömbben növeljük 1-gyel.

#### Visszafejtés - 14 pont

A fájl feldolgozása után keressük meg a `freq` tömb legnagyobb elemének indexét (maximumkeresés). A feltételezett eltolás ekkor a legnagyobb elemnek megfelelő karakter és az 'e' karakter távolsága. A programban nem szükséges paraméterezni a nyelvtől függő feltételezett leggyakrabban előforduló betűt. (Pluszpontot érhet a program paraméterezésével megadni, melyik legyen a nyelvtől függő feltételezett leggyakrabban előforduló betű, azaz 'e' paraméterezése.)

Ha kiszámoltuk a feltételezett eltolást, akkor soronként dolgozzuk fel mégegyszer a szöveges fájl tartalmát (nyissuk meg újra, és `fgets()`-el haladjunk végig soronként), és minden sort fejtsünk vissza a `Caesar_decrypt()` függvénnyel, ahol az eltolás legyen az előbb kiszámolt érték. A visszafejtett sztringet írjuk ki a képernyőre. Ha a megoldásunk helyes, akkor a visszafejtett sztring a C99 szabvány egy bekezdése.

