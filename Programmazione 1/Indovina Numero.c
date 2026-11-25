//Indovina Numero
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 7
int scelta();
int intervallo();
int eta();
int manuale();
int gioca(int segreto, int sup);
int verificaTentativo(int segreto, int tentativo);

int main () {
int segreto, sup;
printf("Indovina il numero fra 1 e 100 in 7 tentativi per vincere!\n-----------------\n");
sup=scelta();
srand(time(NULL));
segreto=rand()%sup+1;
printf("Inserire tentativo: ");
gioca(segreto, sup);
return 0;
}


int scelta() {
    int scelta, num;
    printf("Inserire 0 se si vuole procedere a difficolta' standard, 1 se si desidera scegliere l'intervallo massimo manualmente\n");
   
    do {
        scanf("%d", &scelta);
        switch(scelta) {
            case 0:
            num=intervallo();
            printf("L'intervallo è da 1 a %d!\n", num);
            return num;
            case 1:
            num=manuale();
            printf("L'intervallo è da 1 a %d!\n", num);
            return num;
            default:
            printf("Scelta invalida!\n");
            break;
        }
    }
    while(scelta!=1||scelta!=0);
}


int intervallo() {
    int num=eta();
    if(num<50)
        num=100*(num/10)-(num/10)*50;
    else
        num=500-(num/10)*50;
    if(num<=25)
        return 25;
    return num;
}


int eta() {
    int eta;
    printf("Inserire la propria eta' per la difficolta'\n");
    do {
        printf("Inserisci un'eta' valida fra 1 e 100: ");
        scanf("%d", &eta);
    }
    while(eta<0||eta>100);
    return eta;
}


int manuale() {
    int num=0;
    while(num<=1) {
        printf("Inserire l'estremo superiore dell'intervallo (Maggiore di 1): ");
        scanf("%d", &num);
    }
    return num;
}


int gioca(int segreto, int sup) {
    int tentativo, num_tentativo=0;
    while(1) {
        if(num_tentativo<max) {
        scanf("%d", &tentativo);
        if (tentativo<1||tentativo>sup) {
            printf("Tentativo invalido!\n Inserire un tentativo compreso tra 1 e 100: ");
        }
        else {
            num_tentativo++;
                switch(verificaTentativo(segreto, tentativo)) {
                    case 0:
                    printf("Hai vinto! Numero tentativi = %d", num_tentativo);
                    return 0;
                    case -1:
                    printf("Il numero inserito e' più piccolo del numero da indovinare!\nInserire tentativo: ");
                    break;
                    case 1:
                    printf("Il numero inserito e' più grande del numero da indovinare!\nInserire tentativo: ");
                    break;
                    default:
                    break;
                }
            }
        }
    else {
        printf("Hai perso! Il numero da indovinare era %d", segreto);
        return 0;
        }
    }
}


int verificaTentativo(int segreto, int tentativo) {
    if(tentativo<segreto)
        return -1;
    if(tentativo>segreto)
        return 1;
    return 0;
}