#include <stdio.h>

int main(){
char Estado, codigodacarta[5], nomedacidade[20];
int populacao, numerodepontost;
float areakm, densidadepopulacional, pibpercapita, pib;

char Estado2, codigodacarta2[6], nomedacidade2[22];
int populacao2, numerodepontost2;
float areakm2, densidadepopulacional2, pibpercapita2, pib2;


//==== ADICIONANDO AS INFORMAÇOES PARA A PRIMEIRA CARTA ====//

printf("====Cadastrando a primeira carta!====\n");

printf("Digite uma letra de A - H:\n");
scanf("%c" , &Estado);


printf("Digite o codigo da carta:\n");
scanf("%s", codigodacarta);


printf("Digite o nome da cidade:\n");
scanf(" %[^\n]", nomedacidade);


printf("Digite o numero da Habitantes da cidade:\n");
scanf("%d", &populacao);


printf("Digite a Área da cidade:\n");
scanf("%f",&areakm);


printf("Digite o Pib:\n");
scanf("%f", &pib);


printf("Digite o numero de pontos Turisticos:\n");
scanf("%d",&numerodepontost);

//==== RESULTADO DAS CARTAS APÓS AS INFORMAÇOES ADICIONADAS ====//

printf("===== Dados da Carta 1 =====\n");
printf("Estado: %c\n" ,Estado);
printf("Codigo: %s\n", codigodacarta);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Área: %.2f km²\n", areakm);
printf("PIB: %.2f trilhoes de reais\n", pib);
printf("Numero de Pontos turisticos: %d", numerodepontost);
printf("\n");

pibpercapita = (float) pib / populacao;
printf("PIB per Capita: %.2f Reais\n", pibpercapita);

densidadepopulacional = (float) populacao / areakm;
printf("Densidade Populacional de: %f hab/km²\n", densidadepopulacional);



//====ADICIONANDO AS INFORMAÇOES INSERIDAS PARA A SEGUNDA CARTA====//

printf("\n====Cadastrando a segunda Carta!====\n");


printf("Digite uma letra de A - H:\n");
scanf(" %c", &Estado2);


printf("Digite o codigo da carta:\n");
scanf("%s", codigodacarta2);


printf("Digite o nome da cidade:\n");
scanf(" %[^\n]", nomedacidade2);


printf("Digite o numero da Habitantes da cidade:\n");
scanf("%d", &populacao2);


printf("Digite a Área da cidade:\n");
scanf("%f", &areakm2);


printf("Digite o Pib:\n");
scanf("%f", &pib2);


printf("Digite o numero de pontos Turisticos:\n");
scanf("%d",&numerodepontost2);

//==== RESULTADO DAS CARTAS APÓS AS INFORMAÇOES ADICIONADAS ====//  

printf("\n===== Dados da Carta 2 =====\n");
printf("Estado: %c\n" , Estado2);
printf("Codigo: %s\n" , codigodacarta2);
printf("Nome da cidade: %s\n" , nomedacidade2);
printf("População: %d\n" , populacao2);
printf("Área: %.2f km²\n" , areakm2);
printf("PIB: %.2f bilhoes de reais\n" , pib2);
printf("Numero de Pontos turisticos: %d\n" , numerodepontost2);

pibpercapita2 = (float) pib2 / populacao2;
densidadepopulacional2 = (float) populacao2 / areakm2;
printf("Densidade Populacional de : %.2f hab/km²\n" , densidadepopulacional2);
printf("PIB per Capita: %.2f Reais\n", pibpercapita2);
}
