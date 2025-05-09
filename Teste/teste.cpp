//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <iostream>
//Inicio
int main(){
  setlocale(LC_ALL,"");
  char time[20];
  int vitorias, empates, pontos;
  system("color 1F");
  printf("Digite o time: \n");
  scanf("%s", time);
  printf("Informe a quantidade de vitorias:\n");
  scanf("%d",&vitorias);
  printf("Informe a quantidade de empates:\n");
  scanf("%d", &empates);
  pontos = (vitorias*3) + empates;
  printf("%s fez um total de %d pontos",time, pontos);
  return 0;
  
}
