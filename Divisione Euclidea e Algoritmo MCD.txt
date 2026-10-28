//Divisione Euclidea e Algoritmo MCD
#include <stdio.h>

int main()
{int n1, n2, q, r, d;
printf("Divisione Euclidea e Massimo comune divisore fra due numeri in Z\n----------------\nInserire il dividendo: ");
scanf("%d", &n1);
printf("\nInserire il divisore: ");
scanf("%d", &n2);
if(n1==0||n2==0)
{if(n2!=0)
 {q=n1/n2;
  r=n1%n2;
  printf("\nQuoziente = %d\nResto = %d", q,r);
  printf("\nImpossibile calcolare il Massimo comune divisore");
  return 0;
 }
 {printf("\nImpossibile eseguire l'operazione");
 return 0;}
}
q=n1/n2;
r=n1%n2;
printf("\nQuoziente = %d\nResto = %d\n", q,r);
if(n1==1 || n2==1 || n1==-1 || n2==-1)
{printf("Massimo comune divisore = 1");
return 0;
}
if (n1<n2)
 {d=n1;
  n1=n2;
  n2=d;
 }
d=n2;
if (n1%n2==0)
{printf("Massimo comune divisore = %d\n", d);
return 0;}
while (r!=0)
 {r=n1%d;
  n1=d;
  if(r!=0)
  d=r;
}
if(n1<0)
n1=n1*-1;
printf("Massimo comune divisore = %d\n", n1);
return 0;
}