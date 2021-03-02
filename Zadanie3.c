#include <stdio.h>

int maksymalny(int *tab, int n);//znajduje maksymalna wartosc w tablicy o rozmiarze n

int main()
{
    int n = 5;
    int tablica[5] = {12,2,3,4,10};
    printf("Najwiekszy w tablicy to %d\n",maksymalny(tablica,n));
}

int maksymalny(int *tab, int n)
{
    int max = *tab;
    
    for (int i = 0; i < n; i++)
    {
        if (*tab > max)
            max = *tab;
        tab++;
    }
    return max;
}
