#include <stdio.h>

int indeks_najwiekszego(int *tab, int n);//funkcja zwraca indeks najwiekszego elementu tablicy

int main()
{
    int n = 5;
    int tab[5] = {7,102,3,5,99};
    printf("Najwiekszy element tablicy znajduje sie pod indeksem %d\n", indeks_najwiekszego(tab,n));
}

int indeks_najwiekszego(int *tab, int n)
{
    int max = *tab;
    int indeks = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (tab[i] >= max)
        {
            max = tab[i];
            indeks = i;
        }
    }
    return indeks;
}
