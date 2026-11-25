//Algoritmo per verificare se un numero è primo
#include <stdio.h>

int main() {
int numero, check;
printf("\nAlgoritmo per verificare se un numero è primo\n----------------------------\nInserisci un numero: ");
scanf("%d", &numero);
if(numero<0)
numero=numero*-1;
for(int i=2; i<=(int)numero/2; i++) {
 check=numero%i;
 if(check==0) {
  printf("Il numero non è primo\n");
  return 0;
 }
}
printf("Il numero è primo\n");
return 0;
}