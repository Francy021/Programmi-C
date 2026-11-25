//Stampa Numeri Palindromi
#include <stdio.h>
int check_num(int inf, int sup);
int check_palindromo(int inf, int sup);
int num_invertito(int num);

int main() {
int inf, sup;
printf("Algoritmo numeri palindromi fra due estremi\n-------------------------------\nInserire l'estremo inferiore (maggiore di 0) e l'estremo superiore:\n");
check_num(inf, sup);
return 0;
}

int check_num(int inf, int sup) {
while(1) {
 scanf("%d %d", &inf, &sup);
 if(inf>sup || inf<0) {
  printf("Estremi Invalidi! Inserire l'estremo inferiore (maggiore di 0) e l'estremo superiore:\n"); }
 else {
  check_palindromo(inf, sup);
  return 0; }
 }
}

int check_palindromo(int inf, int sup) {
    printf("Numeri Palindromi = ");
    for(int i=inf;i<=sup;i++) {
        if(num_invertito(i)==i)
            printf("%d ", i);
    }
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