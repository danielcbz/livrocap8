#include <stdio.h>
#include <string.h>
void maior(int a, int b, int c, int d){
  if(a>b && a>b && a>c && a>d){
    printf("O maior numero é: %d\n", a);
  }
  else  if(b>a && b>c && b>d){
    printf("O maior numero é: %d\n", b);
  }
  else  if(c>a && c>b && c>d){
    printf("O maior numero é: %d\n", c);
  }
  else{
    printf("O maior numero é: %d\n", d);
  }
}
void menor(int a, int b, int c, int d){
   if(a<b && a<b && a<c && a<d){
    printf("O menor numero é: %d\n", a);
  }
  else  if(b<a && b<c && b<d){
    printf("O menor numero é: %d\n", b);
  }
  else  if(c<a && c<b && c<d){
    printf("O menor numero é: %d\n", c);
  }
  else{
    printf("O menor numero é: %d\n", d);
  }
}
int main(){
  int a, b, c, d;
  printf("Digite quatro numeros inteiros:\n");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  maior(a, b, c, d);
  menor(a, b, c, d);
  return 0;
}