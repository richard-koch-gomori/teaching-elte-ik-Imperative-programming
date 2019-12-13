
#orderednums

Ezt a feladatot nem oldottuk meg gyakorlaton, a k�sz k�dr�l mes�ltem �s mutattam meg debug-ol�si technik�kat.

K�sz�tsen orderednums n�ven eg�sz sz�mokat t�rol� rendszert: saj�t f�ggv�nyk�nyvt�rat �s hozz� tartoz� ford�t�si egys�get, amellyel eg�sz sz�mokat nagys�g szerint n�vekv� sorrendben t�rolunk a heap-en. �rjon f�ggv�nyeket, amelyek: inicializ�lja a kezel� rendszert; ki�rja a t�rolt sz�mokat; besz�r egy �j sz�mot; eld�nti, hogy egy adott sz�m t�rolva van-e; felszabad�tja a rendszer �ltal haszn�lt mem�ri�t.

## Els� megold�s: meg1

orderednums_MaxElements a rendszer �ltal kezelt max. elemek sz�ma
orderednums_CurrentSize az �ppen t�rolt elemek sz�ma
orderednums_pointer a t�rter�let kezd� pointer-e

A megold�sban a forr�sk�dban be�getett fels� korl�t van.
Az adatok a orderednums_data ford�t�si egys�gben vannak. A felhaszn�l� el�ri ezeket az adatokat, a rendszert el tudja rontani (ld main.c).

## M�sodik megold�s: meg2

orderednums_MaxElements: a rendszer �ltal kezelt max. elemek sz�ma
orderednums_CurrentSize: az �ppen t�rolt elemek sz�ma
orderednums_pointer: a t�rter�let kezd� pointer-e

A megold�sban a forr�sk�dban be�getett fels� korl�t van.
Az adatok a orderednums ford�t�si egys�gben vannak. A v�ltoz�k statikusak, a gener�lt f�jlb�l nem l�tsz�dnak ki, de a ford�t�si egys�gben mindenhol el�rhet�ek.

## Harmadik megold�s: meg3

A v�ltoz�nevek ebben a megold�sban m�r nem j�k, az allok�l�st�l eltekintve a forr�sk�d v�ltozatlan

orderednums_MaxElements: a t�rol� �ppen h�ny sizeof(int) r�szb�l �ll
orderednums_CurrentSize: t�rolt int-ek sz�ma


