# 1. gyakorlat

## Fejlesztői környezet az egyetemi laborokban

boot: Debian  
IDE: Geany  
fordítás LXTerminal-ban  

## PuTTY, WinSCP (otthonról)

Az ELTE IK-n működő `pandora.inf.elte.hu` számítógép felkínálja a lehetőséget,
hogy az internetről Pandora-s felhasználói fiók birtokában távolról is el
lehessen érni. A Pandora-s fiók felhasználóneve (valószínűleg) neptunkód, jelszava az
INF-es jelszó.

A távoli elérés egyik eszköze az SSH, amelyet Windows 10-en az `ssh` paranccsal,
esetleg a PuTTY szoftverrel használhatunk:

<https://www.putty.org/>

A WinSCP-vel grafikus felületen, kényelmesebben böngészhetjük a fájlrendszert (opcionális):

<https://winscp.net/eng/index.php?>

## Alapvető Linux parancsok

`cd foo`  
a `foo` könyvtárba lépés

`cd ..`  
a szülőkönyvtárba lépés

`mkdir dir`  
könyvtár létrehozása `dir` néven

`touch file`  
üres fájl létrehozása

`cp file1 file2`  
a `file1` másolása `file2` helyre

`rm file`  
`file` törlése

`ls`  
aktuális könyvtár tartalma, a `-l` kapcsolóval részletesebb

## Fordítás GCC-vel, program futtatása

`gcc helloworld.c -o helloworld.out`

A `helloworld.c` C nyelvű forrásállományt lefordítja, majd előállít egy Linux futtatható programot (binárist).

Program futtatása: `./helloworld.out`

Az órai program (`helloworld.c`) C nyelvű forrásállományában megadjuk, hogy a programunk mit csináljon futás közben (mi történjen a program végrehajtásakor). A programozási nyelvek rögzítik ennek sajátos szabályait (például, hogy minden sor végére ki kell tenni a `;`-t etc).

Ha a forrásállományunk nem teljesíti ezeket a szabályokat, akkor fordítási hibát (error) kapunk, és a fordító nem generál futtatható programot.


