#include <stdio.h>

void wypisanie_dwuwymiarowe(int (*tab)[5], int rozmiar);//wypisuje tablice dwuwymiarowa
void zapisanie_tablicy(int tab[][5], int rozmiar);//zapisuje dane do tablicy 
double srednia_zbioru(int tab[], int rozmiar);//liczy srednia z elementow w jednym wierszu tablicy dwuwymiarowej
double srednia_tablicy(int tab[][5], int rozmiar);//liczy srednia elementow calej tablicy dwuwymiarowej
int max_w_tablicy(int tab[][5], int rozmiar);//znajduje najwiekszy elemenet w tablicy 2 wymiarowej

int main()
{
    int tab[3][5];
    int i = 0;
    int pom;
    printf("Podaj 1 zbior 15 elementowy po skonczeniu wpisz q: ");
    zapisanie_tablicy(tab,3);
    wypisanie_dwuwymiarowe(tab,3);
    for (int i = 0; i < 3; i++)
    {
        printf("Srednia w %d wierszu jest rowna %0.2f\n", i, srednia_zbioru(tab[i],5));
    }
    printf("Srednia wyrazow w calej tablicy jest rowna %0.2f\n",srednia_tablicy(tab,3));
    printf("Najwiekszy wyraz tablicy ma wartosc %d\n", max_w_tablicy(tab,3));
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

void zapisanie_tablicy(int tab[][5], int rozmiar)
{
    int pom;
    int i = 0;
    int j = 0;
    while(scanf("%d",&pom) == 1)
    {
        if (j == 5)
        {
            i++;
            j = 0;
        }
        tab[i][j] = pom;
        j++;
    }
}

double srednia_zbioru(int tab[], int rozmiar)
{
    int suma = 0;
    for (int i = 0; i < rozmiar; i++)
    {
        suma += tab[i];
    }
    double wynik = suma/rozmiar;
    return wynik;
}

double srednia_tablicy(int tab[][5], int rozmiar)
{
    int suma = 0;
    int ile = 0;
    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            suma += tab[i][j];
            ile++;
        }
    }
    double wynik = suma/ile;
    return wynik;
    
}

int max_w_tablicy(int tab[][5], int rozmiar)
{
    int max = tab[0][0];
    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (tab[i][j] >= max)
                max = tab[i][j];
        }
    }
    return max;
}
