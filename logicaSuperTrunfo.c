//Codigo do nivel Novato


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
// Fim do código
// O código foi testado e está funcionando corretamente. Ele lê os dados de duas cidades, calcula a densidade populacional e o PIB per capita, compara as cidades em várias categorias e determina a vencedora com base nas vitórias acumuladas.


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
