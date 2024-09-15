#include <stdio.h>
float crescimento(float valora, float valorb){
  float porcentagem;
  porcentagem = ((valorb - valora) * 100) / valora;
  return porcentagem;
}
int main(){
  float valora, valorb;
  printf("digite dois valores \n");
  scanf("%f", &valora);
  scanf("%f", &valorb);
  printf("a porcentagem de crescimento foi: %.2f\n", crescimento(valora, valorb));
}