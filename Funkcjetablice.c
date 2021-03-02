#include <stdio.h>
//program zawiera rozne funckje dzialajace na tablicach stworzone przeze mnie

void kopiowanie(const int tab[], int tab2[], int n);// funckja kopiuje wartosci z tablicy 1 do tablic 2
void wypisywanie_tablicy(int tab[], int n);//funkcja wypisuje wartosci tablicy o rozmiarze n
void kopiowaniev2(const int *tab, int *tab2, int n);//funcka robi to samo co funkcja kopiowanie tylko w zapisie uzywamy wskaznikow
int maksymalny(int *tab, int n);//znajduje maksymalna wartosc w tablicy o rozmiarze n
int indeks_najwiekszego(int *tab, int n);//funkcja zwraca indeks najwiekszego elementu tablicy
int maksymalna_roznica(int tab[], int n);//zwraca najwieksza roznice miedzy elementami tablicy o rozmiarze n
void suma_dwoch(int *tab, int *tab2, int *tab3, int n);//funkcja sumuje elementy tablic 1 i 2 do tablicy 3
void podwajanie(int (*tab)[5], int rozmiar);//funkcja podwaja poczatkowe wartosci tablicy dwuwymiarowej
void wypisanie_dwuwymiarowe(int (*tab)[5], int rozmiar);//wypisuje tablice dwuwymiarowa
void zapisanie_tablicy(int tab[][5], int rozmiar);//zapisuje dane do tablicy 
double srednia_zbioru(int tab[], int rozmiar);//liczy srednia z elementow w jednym wierszu tablicy dwuwymiarowej
double srednia_tablicy(int tab[][5], int rozmiar);//liczy srednia elementow calej tablicy dwuwymiarowej
int max_w_tablicy(int tab[][5], int rozmiar);//znajduje najwiekszy elemenet w tablicy 2 wymiarowej

int main();

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
