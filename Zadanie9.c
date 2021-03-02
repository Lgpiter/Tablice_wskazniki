#include <stdio.h>

void podwajanie(int (*tab)[5], int rozmiar);//funkcja podwaja poczatkowe wartosci tablicy dwuwymiarowej
void wypisanie_dwuwymiarowe(int (*tab)[5], int rozmiar);//wypisuje tablice dwuwymiarowa

int main()
{
    int n = 3;
    int tab[3][5]= {
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3}
    };
    podwajanie(tab,n);
    wypisanie_dwuwymiarowe(tab,n);
}

void podwajanie(int (*tab)[5], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < 5; j++)
            tab[i][j] *= 2;
    }
}

void wypisanie_dwuwymiarowe(int (*tab)[5], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d ",tab[i][j]);
        printf("\n");
    }
}
