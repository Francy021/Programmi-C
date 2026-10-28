//Congettura di Goldbach
#include <stdio.h>
int check_num(int num);
int sum_prim(int num);
int check_prim(int x);

int main() {
int num, add1, add2;
printf("Algoritmo numero pari e' uguale alla somma di due numeri primi\n-------------------------------\nInserisci un numero intero positivo pari: ");
num=check_num(num);
add1=sum_prim(num-2);
add2=num-add1;
printf("Il numero %d e' la somma di %d e %d\n", num, add1, add2);
return 0;
}

int check_num(int num) {
scanf("%d", &num);
while(num<=0||num%2!=0) {
 printf("Numero invalido! Riprova: ");
 scanf("%d", &num); 
 }
return num;
}


int sum_prim(int num) {
for(int x=num; x>=2; x--) {
 if(!(check_prim(x)))
  return x;
 }
}


int check_prim(int num) { 
int check;
for(int i=2; i<=(int)num/2; i++) {
 check=num%i;
 if(check==0)
  return 1;
 }
return 0;
}