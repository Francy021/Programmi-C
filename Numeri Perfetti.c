//Numeri Perfetti
#include <stdio.h>
int check_num(long int inf, long int sup);
int perfect_num(long int inf, long int sup);
int check_perfect(long int num);

int main() {
long int inf, sup;
printf("Algoritmo numeri perfetti fra due estremi\n-------------------------------\nInserire l'estremo inferiore (maggiore di 1) e l'estremo superiore:\n");
check_num(inf, sup);
return 0;
}


int check_num(long int inf, long int sup) {
while(1) {
 scanf("%ld %ld", &inf, &sup);
 if(inf>sup || inf<2) {
  printf("Estremi Invalidi! Inserire l'estremo inferiore (maggiore di 1) e l'estremo superiore:\n"); }
 else {
  perfect_num(inf, sup);
  return 0; }
 }
}


int perfect_num(long int inf, long int sup) {
printf("numeri perfetti = ");
for(long int i=inf; i<=sup; i++) {
 if(check_perfect(i)==0)
  printf("%ld ", i);
 }
printf("\n");
return 0;
}


int check_perfect(long int num) {
long int sum=0;
for(long int i=1; i<=num/2; i++) {
 if(num%i==0)
  sum=sum+i;
 }
if(sum==num) {
 return 0;}
else {
 return 1;}
}