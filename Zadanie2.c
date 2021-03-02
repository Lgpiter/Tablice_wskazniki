#include <stdio.h>

void kopiowanie(const int tab[], int tab2[], int n);// funckja kopiuje wartosci z tablicy 1 do tablic 2
void wypisywanie_tablicy(int tab[], int n);//funkcja wypisuje wartosci tablicy o rozmiarze n
void kopiowaniev2(const int *tab, int *tab2, int n);//funcka robi to samo co funkcja kopiowanie tylko w zapisie uzywamy wskaznikow

int main()
{
    int n = 5;
    const int tab[5] = {7,2,3,4,5};
    int tab2[n];
    int tab3[n];
    
    printf("Tablica Glowna: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
    kopiowanie(tab,tab2,n);
    printf("Tablica 2 po kopiowaniu: \n");
    wypisywanie_tablicy(tab2, n);
}

void kopiowanie(const int tab[], int tab2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab[i];
    }
}
void wypisywanie_tablicy(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void kopiowaniev2(const int *tab, int *tab2, int n)
{
    for (int i = 0; i < n; i++)
    {
        *tab2 = *tab;
        tab++;
        tab2++;
    }
}
