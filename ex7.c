#include <stdio.h>
#include <string.h>
float mediaariti(float nota1, float nota2, float nota3){
float media=(nota1+nota2+nota3)/3;
return media;
}
float mediapond(float nota1, float nota2,float nota3){
  float media= ((nota1*5)+ (nota2*3)+ (nota3*2))/3;
  return media;
}
int main(){
  float n1, n2, n3;
  printf("escreva as notas \n");
  scanf("%f%f%f", &n1, &n2, &n3);
  printf("A media aritimetica e: %.2f\n", mediaariti(n1, n2, n3));
  printf("A media ponderada e: %.2f\n", mediapond(n1, n2, n3));
}