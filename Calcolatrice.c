//Calcolatrice
#include <stdio.h>
void calcola();

int main () {
    printf("Calcolatrice\n--------------------\n");
    calcola();
    return 0;
}


void calcola() {
    int scelta, a, b;
    do {
        printf("Inserisci due numeri interi:\n");
        scanf("%d %d", &a, &b);
        printf("0: Esci dal Programma\n1: Somma\n2: Sottrazione\n3: Moltiplicazione\n4: Divisione\nScegli un'operazione: ");
        scanf("%d", &scelta);
        switch(scelta) {
            case 0:
            break;
            case 1:
            printf("Somma = %d\n\n", a+b);
            break;
            case 2:
            printf("Differenza = %d\n\n", a-b);
            break;
            case 3:
            printf("Prodotto = %d\n\n", a*b);
            break;
            case 4:
            if(b==0) {
                printf("Errore: divisione per zero\n\n");
                break;
            }
            printf("Quoziente: %.2f\n\n", (float)a/b);
            break;
            default:
            printf("Scelta invalida!\n\n");
            break;
        }
    }
    while(scelta!=0);
}