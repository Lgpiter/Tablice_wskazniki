#include <stdio.h>

void wypisywanie_tablicy(int tab[], int n);//funkcja wypisuje wartosci tablicy o rozmiarze n
void suma_dwoch(int *tab, int *tab2, int *tab3, int n);//funkcja sumuje elementy tablic 1 i 2 do tablicy 3

int main()
{
    int n = 4;
    int tab[4] = {11,0,0,0};
    int tab2[4] = {10, 1, 2, 3};
    int tab3[n];
    
    suma_dwoch(tab, tab2, tab3, n);
    wypisywanie_tablicy(tab3,n);
}

void wypisywanie_tablicy(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void suma_dwoch(int *tab, int *tab2, int *tab3, int n)
{
    for (int i = 0; i < n; i++)
    {
        *tab3 = *tab2 + *tab;
        tab3++;
        tab2++;
        tab++;
    }
}
