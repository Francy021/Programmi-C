/*Scrivere un programma in linguaggio C che permetta di analizzare i risultati
di un esame universitario.
Il programma deve:
* Chiedere all'utente il numero di studenti e controllare che sia valido.
* Acquisire i voti degli studenti in un formato valido.
* Calcolare e visualizzare la media dei voti.
* Determinare il voto minimo e il voto massimo.
* Contare quanti studenti hanno superato l'esame.
* Calcolare la percentuale di studenti promossi.*/

#include <stdio.h>
#define max_studenti 100
#define max_voto 30
#define voto_promosso 18

int main() {
unsigned int studenti, voto, voto_minimo=30, voto_massimo=0, promossi=0, n=1, invalido=0;
float percentuale_promossi, voto_media=0;
printf("ANALIZZATORE ESAMI UNIVERSITARI (Numero max studenti: 100; Max voto: 30)\n----------------------\n");
printf("Inserisci il numero di studenti: ");
scanf("%u", &studenti);
if (studenti>max_studenti) {
 printf("Numero di studenti invalido!");
 return 0;
}
while(n<=studenti) {
 printf("Inserisci il voto dello studente %d: ", n);
 scanf("%u", &voto);
 if (voto<=max_voto) {
  voto_media=voto_media+voto;
  if (voto>=voto_promosso)
   promossi++;
  if (voto>voto_massimo)
   voto_massimo=voto;
  if (voto<voto_minimo)
   voto_minimo=voto;
 }
 else {
 printf("Voto inserito invalido!\n");
 invalido++;
 }
 n++;
}
if (studenti!=invalido) {
studenti=studenti-invalido;
voto_media=(float)voto_media/studenti;
percentuale_promossi=((float)promossi/studenti)*100;
printf("Studenti = %d\n", studenti);
printf("Media voti = %f\n", voto_media);
printf("Voto minimo = %d\n", voto_minimo);
printf("Voto massimo = %d\n", voto_massimo);
printf("Studenti promossi = %d\n", promossi);
printf("Percentuale promossi = %f%%\n", percentuale_promossi);
}
else {
 printf("Nessun voto valido inserito. Impossibile calcolare le statistiche.\n");
}
return 0;
}