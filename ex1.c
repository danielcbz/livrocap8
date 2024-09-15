int posinega(int n){
  int i=0;
  if(n>0){
    i=1;
  }
  return i;
}
int main(){
  int n;
  printf("escreva um numero \n");
  scanf("%d", &n);
  printf("o numero %d e positivo? %d\n", n, posinega(n));
}