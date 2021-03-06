#include <stdio.h>
#define MIESIACE 12
#define LATA 5

float suma_tab(const float (*deszcz)[12], int rozmiar);
void wypisanie_koncowe(const float (*deszcz)[12], int rozmiar);
int main()
{
    const float deszcz[LATA][MIESIACE]{
        {10.2, 8.1, 6.8, 4.2, 2.1, 1.8, 0.2, 0.3, 1.1, 2.3, 6.1, 7.4},
        {9.2, 9.8, 4.4, 3.3, 2.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 5.2},
        {6.6, 5.5, 3.8, 2.8, 1.6, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 4.2},
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.0, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.2}
    };
    int rok, miesiac;
    float podsuma, suma;
    
    printf(" ROK      OPADU (w cm)\n");
    suma = suma_tab(deszcz,LATA);
    printf("\nRoczna srednia wynosci %.1f cm\n\n",suma/LATA);
    printf("SREDNIE MIESIECZNE: \n\n");
    printf(" Sty Lut Mar Kwi MAj Cze Lip Sie Wrz Paz Lis Gru\n");
    
    wypisanie_koncowe(deszcz,LATA);
    return 0;
}

float suma_tab(const float (*deszcz)[12], int rozmiar)
{
    int rok, miesiac;
    float podsuma, suma;
    
    printf(" ROK      OPADU (w cm)\n");
    for (rok = 0, suma = 0; rok < LATA; rok++)
    {
        for (miesiac = 0, podsuma = 0; miesiac < MIESIACE; miesiac++)
        {
            podsuma += *(*(deszcz+rok)+miesiac);// == deszcz[rok][miesiac]
        }
        printf("%5d %12,1f\n", 1995 + rok, podsuma);
        suma += podsuma;
    }
    return suma;
}

void wypisanie_koncowe(const float (*deszcz)[12], int rozmiar)
{
    int rok, miesiac;
    float podsuma, suma;
    
    for (miesiac = 0; miesiac < MIESIACE; miesiac++)
    {
        for (rok = 0,podsuma = 0; rok < LATA; rok ++)
        {
            podsuma += *(*(deszcz+rok)+miesiac);// == deszcz[rok][miesiac]
        }
        printf("%4.1 ",podsuma/LATA);
    }
    printf("\n");
}
