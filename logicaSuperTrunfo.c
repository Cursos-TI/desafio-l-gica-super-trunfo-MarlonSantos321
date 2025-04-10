//Nivel Novato

#include <stdio.h>

int main() {
    // Dados para a Carta 1
    char Estado1[25], Cidade1[30], Codigo1[10];
    int População1, Pontos1;
    float Pib1, Densidade1, Per_Capita1, Area1;

    // Dados para a Carta 2
    char Estado2[25], Cidade2[30], Codigo2[10];
    int População2, Pontos2;
    float Pib2, Densidade2, Per_Capita2, Area2;

    // Dados da Carta 1
    printf("\n***CARTA 1***\n");

    printf("Codigo: ");
    scanf("%s", Codigo1);

    printf("Estado: ");
    scanf("%s", Estado1);

    printf("Cidade: ");
    scanf("%s", Cidade1);

    printf("Area da Cidade: ");
    scanf("%f", &Area1);

    printf("População: ");
    scanf("%d", &População1);

    printf("Pib Da Cidade: ");
    scanf("%f", &Pib1);

    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &Pontos1);

    // Dados da Carta 2
    printf("\n***CARTA 2***\n");

    printf("Codigo: ");
    scanf("%s", Codigo2);

    printf("Estado: ");
    scanf("%s", Estado2);

    printf("Cidade: ");
    scanf("%s", Cidade2);

    printf("Area da Cidade: ");
    scanf("%f", &Area2);

    printf("População: ");
    scanf("%d", &População2);

    printf("Pib Da Cidade: ");
    scanf("%f", &Pib2);

    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &Pontos2);

    // Calculando a Densidade Populacional
    Densidade1 = População1 / Area1;
    Densidade2 = População2 / Area2;

    // Calculando o PIB per capita
    Per_Capita1 = Pib1 / População1;
    Per_Capita2 = Pib2 / População2;

    // Variáveis para contar as vitórias
    int vitoriasCidade1 = 0;
    int vitoriasCidade2 = 0;

    // Comparando as Cartas e contando as vitórias
    printf("\n***COMPARANDO AS CARTAS***\n");

    // Comparação da Densidade Populacional (menor densidade ganha)
    if (Densidade1 < Densidade2) {
        printf("A cidade %s tem uma densidade populacional menor que a cidade %s\n", Cidade1, Cidade2);
        vitoriasCidade1++;
    } else {
        printf("A cidade %s tem uma densidade populacional menor que a cidade %s\n", Cidade2, Cidade1);
        vitoriasCidade2++;
    }

    // Comparação do PIB per capita (quem tem maior PIB per capita ganha)
    if (Per_Capita1 > Per_Capita2) {
        printf("A cidade %s tem um PIB per capita maior que a cidade %s\n", Cidade1, Cidade2);
        vitoriasCidade1++;
    } else {
        printf("A cidade %s tem um PIB per capita maior que a cidade %s\n", Cidade2, Cidade1);
        vitoriasCidade2++;
    }

    // Comparação dos Pontos Turísticos (quem tem mais pontos turísticos ganha)
    if (Pontos1 > Pontos2) {
        printf("A cidade %s tem mais pontos turísticos que a cidade %s\n", Cidade1, Cidade2);
        vitoriasCidade1++;
    } else {
        printf("A cidade %s tem mais pontos turísticos que a cidade %s\n", Cidade2, Cidade1);
        vitoriasCidade2++;
    }

    // Comparação da População (quem tem mais população ganha)
    if (População1 > População2) {
        printf("A cidade %s tem uma população maior que a cidade %s\n", Cidade1, Cidade2);
        vitoriasCidade1++;
    } else {
        printf("A cidade %s tem uma população maior que a cidade %s\n", Cidade2, Cidade1);
        vitoriasCidade2++;
    }

    // Comparação da Área (quem tem mais área ganha)
    if (Area1 > Area2) {
        printf("A cidade %s tem uma área maior que a cidade %s\n", Cidade1, Cidade2);
        vitoriasCidade1++;
    } else {
        printf("A cidade %s tem uma área maior que a cidade %s\n", Cidade2, Cidade1);
        vitoriasCidade2++;
    }

    // Comparação do PIB (quem tem mais PIB ganha)
    if (Pib1 > Pib2) {
        printf("A cidade %s tem um PIB maior que a cidade %s\n", Cidade1, Cidade2);
        vitoriasCidade1++;
    } else {
        printf("A cidade %s tem um PIB maior que a cidade %s\n", Cidade2, Cidade1);
        vitoriasCidade2++;
    }

    // Determinando a cidade vencedora
    printf("\n***RESULTADO FINAL***\n");
    if (vitoriasCidade1 > vitoriasCidade2) {
        printf("A cidade vencedora é %s com %d vitórias!\n", Cidade1, vitoriasCidade1);
    } else if (vitoriasCidade1 < vitoriasCidade2) {
        printf("A cidade vencedora é %s com %d vitórias!\n", Cidade2, vitoriasCidade2);
    } else {
        printf("As cidades empataram! Cada uma teve %d vitórias.\n", vitoriasCidade1);
    }

    return 0;
}

//Nivel Aventureiro

#include <stdio.h>

      int main(){

        // Dados da Carta 1
        char nome1[] = "Brasil";
        int populacao1 = 12300;
        float area1 = 1000.5;
        float pib1 = 50000.0;   
        float idh1 = 0.75;
        float densidade1 = populacao1 / area1;
        int opcao = 0;


        // Dados da Carta 2
        char nome2[] = "Alemanha";
        int populacao2 = 8000;  
        float area2 = 500.0;
        float pib2 = 60000.0;
        float idh2 = 0.85;
        float densidade2 = populacao2 / area2;

        //opções de comparação

        printf("*** ESCOLHA UM ATRIBUTO PARA COMPARAR ***\n");
        printf("1. PIB\n");
        printf("2. IDH\n");
        printf("3. Densidade\n");
        printf("4. População\n");
        printf("5. Area\n");
        printf("Sua escolha é: ");
        scanf("%d", &opcao);

        // Comparando os atributos escolhidos

        switch(opcao){
            case 1:
                if(pib1 > pib2){
                    printf("O %s tem um PIB maior que %s\n", nome1, nome2);
                }else{
                    printf("O %s tem um PIB maior que %s\n", nome2, nome1);
                }
                break;
            case 2:
                if(idh1 > idh2){
                    printf("O %s tem um IDH maior que a(o) %s\n", nome1, nome2);
                }else{
                    printf("O %s tem um IDH maior que a(o) %s\n", nome2, nome1);
                }
                break;
            case 3:
                if(densidade1 < densidade2){
                    printf("O %s tem uma densidade melhor que a(o) %s\n", nome1, nome2);
                }else{
                    printf("O %s tem uma densidade melhor que a(o) %s\n", nome2, nome1);
                }
                break;
            case 4:
                if(populacao1 > populacao2){
                    printf("O %s tem uma população maior que a(o) %s\n", nome1, nome2);
                }else{
                    printf("O %s tem uma população maior que a(o) %s\n", nome2, nome1);
                }
                break;
            case 5:
                if(area1 > area2){
                    printf("O %s tem uma área maior que a(o) %s\n", nome1, nome2);
                }else{
                    printf("O %s tem uma área maior que a(o) %s\n", nome2, nome1);
                }
                break;
            default:
                printf("Opção inválida!\n");

        }
return 0;
      }

//nivel Mestre

#include <stdio.h>

     int main(){

            //Carta 1

            char Nome1[] = "Eua" ;
            int População1 = 335000000;
            float Area1 = 9800000.00;
            unsigned long long int Pib1 = 28000000000000.00;
            float Densidade1 = (População1 / Area1);

            //Carta 2

            char Nome2[] = "China" ;
            unsigned long int População2 = 1500000000;
            float Area2 = 9600000.00;
            unsigned long long int Pib2 = 17700000000000 ;
            float Densidade2 = (População2 / Area2);

            //Opção para o menu e demais Funções

            int Escolha1, Escolha2;
            float Valor1_Carta1, Valor1_Carta2;
            float Valor2_Carta1, Valor2_Carta2;
            int Pontos_Carta1 = 0;
            int Pontos_Carta2 = 0;

            //menu do primeiro atributo
            printf("*** ESCOLHA O PRIMEIRO ATRIBUTO ***\n");
            printf("1. População\n");
            printf("2. Area\n");
            printf("3. Densidade Populacional\n");
            printf("4. PIB\n");
            printf("Escolha um Numero de 1 a 4: ");
            scanf("%i", &Escolha1);

            printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
            switch (Escolha1)
            {
            case 1: 
            printf("2. Area\n");
            printf("3. Densidade Populacional\n");
            printf("4. PIB\n");
             break;

            case 2:
            printf("1. População\n");
            printf("3. Densidade Populacional\n");
            printf("4. PIB\n");
             break;

            case 3:
            printf("1. População\n");
            printf("2. Area\n");
            printf("4. PIB\n");
             break;

            case 4:
            printf("1. População\n");
            printf("2. Area\n");
            printf("3. Densidade Populacional\n");
             break;

            default:
            printf("Opção Inválida");
             break;
            }
            scanf("%d", &Escolha2);
            
                // Validação: os atributos devem ser diferentes
            if (Escolha1 == Escolha2 || Escolha1 < 1 || Escolha1 > 4 || Escolha2 < 1 || Escolha2 > 4) {
        printf("Erro: atributos inválidos ou repetidos!\n");
        return 1;
    }
            // Obter os Valores dá carta 1

            if (Escolha1 == 1){
                Valor1_Carta1 = População1;
                Valor1_Carta2 = População2;

            }else if (Escolha1 == 2){
                Valor1_Carta1 = Area1;
                Valor1_Carta2 = Area2;

            }else if (Escolha1 == 3){
                Valor1_Carta1 = Densidade1;
                Valor1_Carta2 = Densidade2;
                
            }else{
                Valor1_Carta1 = Pib1;
                Valor1_Carta2 = Pib2;

            }

            // Obter os Valores dá Carta 2

            if (Escolha2 == 1) {
                Valor2_Carta1 = População1;
                Valor2_Carta2 = População2;

            } else if (Escolha2 == 2) {
                Valor2_Carta1 = Area1;
                Valor2_Carta2 = Area2;

            } else if (Escolha2 == 3) {
                Valor2_Carta1 = Densidade1;
                Valor2_Carta2 = Densidade2;

            } else {
                Valor2_Carta1 = Pib1;
                Valor2_Carta2 = Pib2;

            }

    // Comparação dos atributos
    int pontos_carta1 = 0;
    int pontos_carta2 = 0;

    // Primeiro atributo
                 // Densidade - menor vence
    if (Escolha1 == 3) {
        if(Valor1_Carta1 < Valor1_Carta2) pontos_carta1++;

        else if (Valor1_Carta2 < Valor1_Carta1) pontos_carta2++;

    } else {
        if (Valor1_Carta1 > Valor1_Carta2) pontos_carta1++;

        else if (Valor1_Carta2 > Valor1_Carta1) pontos_carta2++;

    }

    // Segundo atributo
                  // Densidade - menor vence
    if (Escolha2 == 3) { 
        if (Valor2_Carta1 < Valor2_Carta2) pontos_carta1++;

        else if (Valor2_Carta2 < Valor2_Carta1) pontos_carta2++;

    } else {
        if (Valor2_Carta1 > Valor2_Carta2) pontos_carta1++;

        else if (Valor2_Carta2 > Valor2_Carta1) pontos_carta2++;

    }

    // Soma dos atributos
    float Soma1 = Valor1_Carta1 + Valor2_Carta1;
    float Soma2 = Valor1_Carta2 + Valor2_Carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", Nome1, Soma1);
    printf("%s: %.2f\n", Nome2, Soma2);

    // Resultado final
    printf("\n--- Resultado Final ---\n");
    if (Soma1 > Soma2) {
        printf("Vencedor: %s\n", Nome1);
    } else if (Soma2 > Soma1) {
        printf("Vencedor: %s\n", Nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
