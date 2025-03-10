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
    
    



    //Fiz a separção usando um código para cada carta, com isso o código ficou mais extenso, porém achei mais didático.
    //Usei todos os códigos que foram ensinados em aula, apenas o código para nomes compostos que fiz uma pesquisa.
    //Na pesquisa também encontrei os códigos: fgets e getchar. Pórem quando rodei o código com o "%[^\n]", apenas adicinei um "Espaços" para limpar o buffer.
    //Segue o código abaixo:


    
        char estado1, estado2;
        char codigodacarta1[10], codigodacarta2[10];
        char nomedacidade1[50], nomedacidade2[50];
        int populacao1, populacao2;
        float area1, area2, pib1, pib2;
        int pontosturisticos1, pontosturisticos2;


        printf("\nCarta 1\n");
        
        printf("Estado: \n");
        scanf(" %c", &estado1);
        
        printf("Código Da Carta: \n");
        scanf(" %s", &codigodacarta1);

        printf("Nome da cidade: \n");
        scanf(" %[^\n]", nomedacidade1); 
        
        printf("População: \n");
        scanf("%d", &populacao1);

        printf("Área: \n");
        scanf(" %f", &area1);

        printf("PIB: \n");
        scanf("%f", &pib1);

        printf("Número de pontos turísticos: \n");
        scanf("%d", &pontosturisticos1);



        printf("\nCarta 2\n");
        
        printf("Estado: \n");
        scanf(" %c", &estado2);
        
        printf("Código Da Carta: \n");
        scanf("%s", &codigodacarta2);

        printf("Nome da cidade: \n");
        scanf(" %[^\n]", nomedacidade2);
        
        printf("População: \n");
        scanf("%d", &populacao2);

        printf("Área: \n");
        scanf(" %f", &area2);

        printf("PIB: \n");
        scanf("%f", &pib2);

        printf("Número de pontos turísticos: \n");
        scanf("%d", &pontosturisticos2);



        printf("\nCarta 1\n");
        printf("Estado: %c\n", estado1);
        printf("Código da Carta: %s\n", codigodacarta1);
        printf("Nome da cidade: %s\n", nomedacidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontosturisticos1);


        printf("\nCarta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código da Carta: %s\n", codigodacarta2);
        printf("Nome da cidade: %s\n", nomedacidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontosturisticos2);


              


        
        return 0;




    }