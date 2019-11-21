
/*
ford�t�si direkt�v�k: #-gel kezd�d� utas�t�sok, ford�t�s k�zben
fejtik ki hat�sokat a forr�sk�don

pl. #define SYMBOL vmi
ford�t�s k�zben a forr�ssz�vegben mindenhol SYMBOL hely�re vmi
helyettes�t�dik (k�z�ns�ges search-and-replace)

ha csak #define SYMBOL van, akkor ez csak azt r�gz�ti, hogy
SYMBOL defini�lva van

az #if kifejez�s �s #endif k�z�tti forr�sk�dr�szleteket csak akkor
�rtelmezi a ford�t�, ha a kifejez�s igaz

p�ld�ul
#if !defined SYMBOL

...

#endif

a ... csak akkor ker�l �rtelmez�sre, ha SYMBOL nincs defini�lva

a direkt�v�k ilyen speci�lis haszn�lat�t h�vjuk include guard-oknak

a header f�jl-ok tartalm�t az utols� p�ld�ban bemutatott direkt�v�kkal
szok�s ell�tni, ezzel megakad�lyozva, hogy a f�programba t�bbsz�r
bem�sol�djon a header f�jl tartalma (ami t�bb szempontb�l sem j�,
pl nem akarjuk, hogy ugyanaz a defin�ci� duplik�lva ker�lj�n a k�dba)
*/


#if !defined FUNC_HEADER

#define FUNC_HEADER


extern void CopyOrderedArray(int s[], int size1, int z[], int size2, int sz[]);


#endif
