#include <stdio.h>

int maksymalna_roznica(int tab[], int n);//zwraca najwieksza roznice miedzy elementami tablicy o rozmiarze n

int main()
{
    int n = 6;
    int tablica[6] = {100, -1, 2, 3, 4, 10};
    printf("Najwieksza roznica w tablicy to %d\n", maksymalna_roznica(tablica,n));
}

int maksymalna_roznica(int tab[], int n)
{
    int maksymalna_roznica = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((tab[i] - tab[j]) >= maksymalna_roznica)
                maksymalna_roznica = tab[i] - tab[j];
            if ((tab[j] - tab[i]) >= maksymalna_roznica)
                maksymalna_roznica = tab[j] - tab[i];
        }
    }
    return maksymalna_roznica;
}
