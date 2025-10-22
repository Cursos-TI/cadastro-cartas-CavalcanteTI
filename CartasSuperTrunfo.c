#include <stdio.h>


int main(){

char Estado2;
char codigodacarta2[6];
char nomedacidade2[22];
int populaçao2;
float areakm²2;
float pib2;
int numerodepontost2;

printf("====Cadastrando a segunda Carta!====\n");


printf("Digite uma letra de A - H:\n");
scanf("%c" , &Estado2);


printf("Digite o codigo da carta:\n");
scanf("%s", codigodacarta2);


printf("Digite o nome da cidade:\n");
scanf("%s", nomedacidade2);


printf("Digite o numero da Habitantes da cidade:\n");
scanf("%d", &populaçao2);


printf("Digite a Área da cidade:\n");
scanf("%f",&areakm²2);


printf("Digite o Pib:\n");
scanf("%f", &pib2);


printf("Digite o numero de pontos Turisticos:\n");
scanf("%d",&numerodepontost2);

printf("\n===== Dados da Carta 2 =====\n");
printf("Estado: %c\n", Estado2);
printf("Codigo: %s\n", codigodacarta2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("População: %d\n", populaçao2);
printf("Área: %.3f\n", areakm²2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Pontos turisticos: %d", numerodepontost2);
}
