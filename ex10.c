#include <stdio.h>
#include <string.h>
float valors(int n){
  float valor=1;
  for(int i = 1; i<=n; i++){
 valor = valor+ 1/(n);
 n= n-1;
  }
  return valor;
}
int main(){
  int n;
  printf("escreva o valor de n: \n");
  scanf("%d",&n);
  printf("O valor de s e: %.2f\n", valors(n));
  return 0;
}