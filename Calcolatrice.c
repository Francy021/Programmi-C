//Calcolatrice
#include <stdio.h>
void calcola(int a, int b);

int main () {
    int scelta, a, b;
    printf("Calcolatrice\n--------------------\nInserisci due numeri interi:\n");
    scanf("%d %d", &a, &b);
    calcola(a, b);
    return 0;
}


int calcola(int a, int b) {
    int scelta;
    while(1) {
        printf("0: Esci dal Programma\n1: Somma\n2: Sottrazione\n3: Moltiplicazione\n4: Divisione\nScegli un'operazione: ");
        scanf("%d", &scelta);
        switch(scelta) {
            case 0:
            break;
            case 1:
            printf("Somma = %d\n", a+b);
            break;
            case 2:
            printf("Differenza = %d\n", a-b);
            break;
            case 3:
            printf("Moltiplicazione = %d", a*b);
            break;
            case 4:
            if(b==0) {
                printf("Errore: divisone per zero\n");
                break;
            }
            printf("Divisione: %.2f\n", a/b);
            break;
            default:
            printf("Scelta invalida!\n");
            break;
        }
    }
}