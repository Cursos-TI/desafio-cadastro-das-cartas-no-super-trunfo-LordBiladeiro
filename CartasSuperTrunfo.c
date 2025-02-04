#include <stdio.h>

int main(){
     
     printf("Desafio Cartas Super Trunfo! \n");
    
 char nome[50];
 int populacao;
 float area;
 float pib;
 int numero;

    printf("Digite o nome da Cidade: \n");
    scanf("%s" , &nome);

    printf("Digite sua população: \n");
    scanf("%d" , &populacao);

    printf("Digite sua área: \n");
    scanf("%f" , &area);

    printf("Digite o PIB: \n");
    scanf("%f" , &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d" , &numero);

      
      
      printf("Nome da Cidade: %s \n" ,nome);
      printf("População: %d \n" , populacao);
      printf("Área: %f \n" , area);
      printf("PIB: %f \n" , pib);
      printf("Pontos Turísticos: %d \n" , numero);


    return 0;
}
