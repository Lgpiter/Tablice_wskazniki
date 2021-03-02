#include <stdio.h>

void kopiowaniev2(const int *tab, int *tab2, int n);//funcka robi to samo co funkcja kopiowanie tylko w zapisie uzywamy wskaznikow
void wypisywanie_tablicy(int tab[], int n);//funkcja wypisuje wartosci tablicy o rozmiarze n

int main()
{
    int n = 6;
    int tab[6] = {0, 1, 2, 3, 4, 5};
    int tab2[3];
    kopiowaniev2((tab+2), tab2, 3);
    wypisywanie_tablicy(tab2, 3);
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
