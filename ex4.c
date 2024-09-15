void converter(float segundos){
  float horas, minutos;
  horas = segundos/3600;
  minutos = segundos/60;
  printf("hora %.2f, minutos %.2f segundos %.2f", horas, minutos, segundos);
}
int main(){
  float segundos;
  printf("qual a quantidade de segundos? \n");
  scanf("%f",&segundos);
  converter(segundos);
}