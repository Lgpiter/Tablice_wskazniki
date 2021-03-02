#include <stdio.h>

void kopiowanie(const int tab[], int tab2[], int n);// funckja kopiuje wartosci z tablicy 1 do tablic 2

int main()
{
    const int tab1[3][2] = {
        {1,2},
        {3,4},
        {7,11}        
    };
    int tab2[3][2];
    
    for (int i = 0; i < 3; i++)
    {
        kopiowanie(tab1[i],tab2[i],2);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d ",tab2[i][j]);
        printf("\n");
    }
}

void kopiowanie(const int tab[], int tab2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab[i];
    }
}
