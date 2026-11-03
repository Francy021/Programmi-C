//Inversione Cifre
#include <stdio.h>
int check_num(int num);
int num_invertito(int num);

int main() {
int num, invertito;
printf("Algoritmo inverti cifre\n-------------------------------\nInserisci il numero intero positivo: ");
num=check_num(num);
invertito=num_invertito(num);
printf("Il numero %d invertito e' %d\n", num, invertito);
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


int num_invertito(int num) {
int inv=0;
while(num>0) {
 inv=inv*10+num%10;
 num/=10;
 }
return inv;
}