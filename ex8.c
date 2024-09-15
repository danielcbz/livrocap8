#include <stdio.h>
#include <string.h>
int dminutos(hini, minini,hfim,minfim){
  int dura=((hfim*60)+minfim)-((hini*60)+minini);
  return dura;
}
int main(){
int hini, minini, hfin, minfin;
printf("escreva a hora e minuto de inicio\n");
scanf("%d%d", &hini, &minini);
printf("escreva a hora e minuto de fim \n");
scanf("%d%d", &hfin, &minfin);
printf("A duracao em minutos e: %i", dminutos(hini, minini, hfin, minfin));
}