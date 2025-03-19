#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Felipe 123

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    



    //Fiz a separação usando um código para cada carta, com isso o código ficou mais extenso, porém achei mais didático.
    //Usei todos os códigos que foram ensinados em aula, exceto o código para nomes das cidades, que fiz uma pesquisa.
    //Na pesquisa também encontrei os códigos: fgets e getchar. Pórem quando rodei o código com o "%[^\n]", apenas adicinei um "Espaços" para limpar o buffer.
    //Adicionei uma notação cientifica para mostrar o número de forma inteira na hora de calcular o PIB per capita: "1e9"
    //Segue o código abaixo:


    

        char estado1, estado2;
        char codigodacarta1[10], codigodacarta2[10];
        char nomedacidade1[50], nomedacidade2[50];
        unsigned long int populacao1, populacao2;
        float area1, area2, pib1, pib2;
        int pontosturisticos1, pontosturisticos2;
        float densidadepopulacional1, densidadepopulacional2;
        float pibpercapita1, pibpercapita2;
        float superpoder1, superpoder2;

        printf("\nCarta 1\n");
        
        printf("Estado: \n");
        scanf(" %c", &estado1);
        
        printf("Código Da Carta: \n");
        scanf(" %s", &codigodacarta1);

        printf("Nome da cidade: \n");
        scanf(" %[^\n]", nomedacidade1);
        
        printf("População: \n");
        scanf("%lu", &populacao1);

        printf("Área: \n");
        scanf("%f", &area1);

        printf("PIB: \n");
        scanf("%f", &pib1);

        printf("Número de pontos turísticos: \n");
        scanf("%d", &pontosturisticos1);

        densidadepopulacional1 = (area1 != 0) * ((float)populacao1 / area1);
        pibpercapita1 = (populacao1 != 0) * ((pib1 * 1e9) / populacao1);
        superpoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontosturisticos1 + pibpercapita1 + ((densidadepopulacional1 > 0) * (1.0 / densidadepopulacional1));

        printf("\nCarta 2\n");
        
        printf("Estado: \n");
        scanf(" %c", &estado2);
        
        printf("Código Da Carta: \n");
        scanf("%s", &codigodacarta2);

        printf("Nome da cidade: \n");
        scanf(" %[^\n]", nomedacidade2);
        
        printf("População: \n");
        scanf("%lu", &populacao2);

        printf("Área: \n");
        scanf("%f", &area2);

        printf("PIB: \n");
        scanf("%f", &pib2);

        printf("Número de pontos turísticos: \n");
        scanf("%d", &pontosturisticos2);

        densidadepopulacional2 = (area2 != 0) * ((float)populacao2 / area2);
        pibpercapita2 = (populacao2 != 0) * ((pib2 * 1e9) / populacao2);
        superpoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontosturisticos2 + pibpercapita2 + ((densidadepopulacional2 > 0) * (1.0 / densidadepopulacional2));


        printf("\nCarta 1\n");
        printf("\nEstado: %c\n", estado1);
        printf("Código da Carta: %s\n", codigodacarta1);
        printf("Nome da cidade: %s\n", nomedacidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontosturisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per capita: %.2f Reais\n", pibpercapita1);
        printf("Super poder: %.0f\n", superpoder1);


        printf("\nCarta 2\n");
        printf("\nEstado: %c\n", estado2);
        printf("Código da Carta: %s\n", codigodacarta2);
        printf("Nome da cidade: %s\n", nomedacidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontosturisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf("PIB per capita: %.2f Reais\n", pibpercapita2);
        printf("Super poder: %.0f\n", superpoder2);
              

        printf("\nComparacao de Cartas:\n");
        printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
        printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
        printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? 1 : 2, pontosturisticos1 > pontosturisticos2);
        printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2 ? 1 : 2, densidadepopulacional1 < densidadepopulacional2);
        printf("PIB per Capita: Carta %d venceu (%d)\n", pibpercapita1 > pibpercapita2 ? 1 : 2, pibpercapita1 > pibpercapita2);
        printf("Super Poder: Carta %d venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 2, superpoder1 > superpoder2);




        return 0;




    }