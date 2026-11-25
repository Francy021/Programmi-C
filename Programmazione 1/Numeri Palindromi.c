//Numeri Palindromi
#include <stdio.h>
int check_num(int num);
int check_palindromo(int num);
int num_invertito(int num);

int main() {
int num, invertito;
printf("Algoritmo verifica numeri palindromi\n-------------------------------\nInserisci un numero intero positivo da verificare: ");
num=check_num(num);
check_palindromo(num);
num_invertito(num);
return 0;
}


int check_num(int num) {
scanf("%d", &num);
while(num<=0) {
 printf("Numero invalido! Riprova: ");
 scanf("%d", &num); 
 }
return num;
}


int check_palindromo(int num) {
    if(num_invertito(num)==num)
        printf("Il numero %d e' un palindromo", num);
    else
        printf("Il numero %d non e' un palindromo", num);
    return 0;
}


int num_invertito(int num) {
int inv=0;
while(num>0) {
 inv=inv*10+num%10;
 num/=10;
 }
return inv;
}