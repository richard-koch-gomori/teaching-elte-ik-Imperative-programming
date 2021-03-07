

// ebben a ford�t�si egys�gben nincs foo() f�ggv�ny defini�lva, ez�rt
// a gcc nem fogadn� el (hiszen neml�tez� f�ggv�nyeket nem h�vhatunk)

// a foo() f�ggv�ny defini�l�sa m�sik ford�t�si egys�gben tal�lhat�,
// (amit a compiler ezen f�jl ford�t�sa k�zben nem is l�t)

// ahhoz, hogy ez a f�jl leforduljon, a ford�t�nak annyi inform�ci�ra
// van sz�ks�ge, hogy a "foo" nev� f�ggv�ny void t�pus�, int param�ter�
// az extern kulcssz�val bevezetett f�ggv�ny fejl�c �ppen ezt
// k�zli a ford�t�val
extern void foo(int x);


int main()
{
    foo(2);
    return 0;
}

