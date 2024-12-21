#include<stdio.h>
#include"math.h"
#include"pow.h"



int main (){

    int uno, due, base, esponente;
    int scelta;
    int risultato;
    float dividendo, divisore, risultato2;

    printf("Digita:\n");
    printf("1. Somma\n");
    printf("2. Moltiplicazione\n");
    printf("3. Differenza\n");
    printf("4. Divisione\n");
    printf("5. Potenza\n");
    scanf("%d", &scelta);

    switch (scelta)
    {
        case 1:
        printf("Inserisci il primo operando\n");
        scanf("%d", &uno);
        printf("Inserisci il secondo operando\n");
        scanf("%d", &due);
        risultato = somma(uno, due);
        printf("%d + %d = %d\n", uno, due, risultato);
        break;

        case 2:
        printf("Inserisci il primo operando\n");
        scanf("%d", &uno);
        printf("Inserisci il secondo operando\n");
        scanf("%d", &due);
        risultato = moltiplicazione(uno, due);
        printf("%d * %d = %d\n", uno, due, risultato);
        break;

        case 3:
        printf("Inserisci il primo operando\n");
        scanf("%d", &uno);
        printf("Inserisci il secondo operando\n");
        scanf("%d", &due);
        risultato = differenza(uno, due);
        printf("%d - %d = %d\n", uno, due, risultato);
        break;
        
        case 4:
        printf("Inserisci il dividendo\n");
        scanf("%f", &dividendo);
        printf("Inserisci il divisore\n");
        scanf("%f", &divisore);
        risultato2 = divisione(dividendo, divisore);
        printf("%.1f / %.1f = %.2f\n", dividendo, divisore, risultato2);
        break;

        case 5:
        printf("Inserisci la base\n");
        scanf("%d", &base);
        printf("Inserisci l'esponente\n");
        scanf("%d", &esponente);
        risultato = potenza(base, esponente);
        printf("%d^%d=%d\n", base, esponente, risultato);
        break;

        default:
        printf("Operazione non ricoscuta\n"); 
    
    }

    return 0;
}