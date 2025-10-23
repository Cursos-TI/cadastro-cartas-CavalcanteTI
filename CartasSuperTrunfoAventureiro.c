#include <stdio.h>

int main(){
char Estado;
char codigodacarta[5];
char nomedacidade[20];
int populacao;
float areakm;
float pib;
int numerodepontost;
float densidadepopulacional;

char Estado2;
char codigodacarta2[6];
char nomedacidade2[22];
int populacao2;
float areakm2;
float pib2;
int numerodepontost2;
float densidadepopulacional2;



printf("====Cadastrando a primeira carta!====\n");

printf("Digite uma letra de A - H:\n");
scanf("%c" , &Estado);


printf("Digite o codigo da carta:\n");
scanf("%s", codigodacarta);


printf("Digite o nome da cidade:\n");
scanf("%s", nomedacidade);


printf("Digite o numero da Habitantes da cidade:\n");
scanf("%d", &populacao);


printf("Digite a Área da cidade:\n");
scanf("%f",&areakm);


printf("Digite o Pib:\n");
scanf("%f", &pib);


printf("Digite o numero de pontos Turisticos:\n");
scanf("%d",&numerodepontost);

printf("===== Dados da Carta 1 =====\n");
printf("Estado: %c\n" ,Estado);
printf("Codigo: %s\n", codigodacarta);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Área: %.3f\n", areakm);
printf("PIB: %.2f trilhoes de reais\n", pib);
printf("Pontos turisticos: %d", numerodepontost);
printf("\n");


densidadepopulacional = (float) populacao / areakm;

printf("Densidade Populacional de habitantes/km² é : %f\n." , densidadepopulacional);





printf("\n====Cadastrando a segunda Carta!====\n");


printf("Digite uma letra de A - H:\n");
scanf(" %c", &Estado2);


printf("Digite o codigo da carta:\n");
scanf("%s", codigodacarta2);


printf("Digite o nome da cidade:\n");
scanf("%s", nomedacidade2);


printf("Digite o numero da Habitantes da cidade:\n");
scanf("%d", &populacao2);


printf("Digite a Área da cidade:\n");
scanf("%f", &areakm2);


printf("Digite o Pib:\n");
scanf("%f", &pib2);


printf("Digite o numero de pontos Turisticos:\n");
scanf("%d",&numerodepontost2);

printf("\n===== Dados da Carta 2 =====\n");
printf("Estado: %c\n" , Estado2);
printf("Codigo: %s\n" , codigodacarta2);
printf("Nome da cidade: %s\n" , nomedacidade2);
printf("População: %d\n" , populacao2);
printf("Área: %.3f\n" , areakm2);
printf("PIB: %.2f bilhoes de reais\n" , pib2);
printf("Pontos turisticos: %d\n" , numerodepontost2);


densidadepopulacional2 = (float) populacao2 / areakm2;
printf("Densidade Populacional de habitantes/km²: %f" , densidadepopulacional2);
}

