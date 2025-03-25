#include <stdio.h> // Inicialização da biblioteca

int main() { // Início da função principal
    
    // Declaração das variáveis do card1
    int carta = 1; 
    char estado;
    char codigo[4]; // Array para armazenar o código (3 caracteres (0,1 e 2) + \n (3) + terminador nulo (4))
    char cidade[20];
    int populacao;
    float pib;
    float area;
    int pontosturiscos;
    float pibpercapita, densidade;

    // Declaração das variáveis do card2
    int carta2 = 2;
    char estado2;
    char codigo2[4]; // Array para armazenar o código (3 caracteres (0,1 e 2) + \n (3) + terminador nulo (4))
    char cidade2[20];
    int populacao2;
    float pib2;
    float area2;
    int pontosturiscos2;
    float pibpercapita2, densidade2;



    //Declaração das Variável escolha
    int escolha;

    
        // Leitura e gravação dos dados do card1
        printf("\nInforme o Estado do card 1: \n"); // Mostra qual informação inserir
        scanf(" %c", &estado); // Grava a informação inserida

        printf("\nInforme a Código do card 1: \n");
        scanf("%s", codigo); // Não precisa de & (char com leitura em string), Grava a informação inserida

        printf("\nInforme a Cidade do card 1: \n");
        scanf("%s", cidade); 

        printf("\nInforme a População do card 1: \n"); 
        scanf("%d", &populacao);
    
        printf("\nInforme a Área (em km²) do card 1: \n");
        scanf("%f", &area);

        printf("\nInforme o PIB do card 1: \n");
        scanf("%f", &pib);
     
        printf("\nInforme quantos pontos turísticos tem o card 1: \n");
        scanf("%d", &pontosturiscos);
    

    //Calculo da Densidade Populacional
    densidade = populacao / area;

    //Calculo do PIB per capita 
    pibpercapita = pib * 1000000000 / populacao;



        printf("\n\n");
    
        
        // Leitura e gravação dos dados do card2
        printf("\nInforme o Estado do card 2: \n");
        scanf(" %c", &estado2);

        printf("\nInforme a Código do card 2: \n");
        scanf("%s", codigo2); 

        printf("\nInforme a Cidade do card 2: \n");
        scanf("%s", cidade2);

        printf("\nInforme a População do card 2: \n");
        scanf("%d", &populacao2);
    
        printf("\nInforme a Área (em km²) do card 2: \n");
        scanf("%f", &area2);

        printf("\nInforme o PIB do card 2: \n");
        scanf("%f", &pib2);
    
        printf("\nInforme quantos pontos turísticos tem o card 2: \n");
        scanf("%d", &pontosturiscos2);

        

    //Calculo da Densidade Populacional
    densidade2 = populacao2 / area2;

    //Calculo do PIB per capita
    pibpercapita2 = pib2 * 1000000000 / populacao2;

  
        printf("\n\n");

        // Exibição das informações do Card1
        printf("Carta: %d\n", carta);
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de pontos turísticos: %d\n", pontosturiscos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
        printf("PIB per capita: %.2f reais\n",pibpercapita);

        printf("\n\n");

        // Exibição das informações do Card2
        printf("Carta: %d\n", carta2);
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontosturiscos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n",pibpercapita2);

        printf("\n\n");

        // Atributos a serem comparados
        printf("Atributos a serem comparados\n");
        printf("1 - População\n");
        printf("2 - Área (em km²)\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n \n");
        printf("Qual atributo você deseja comparar?");

        //Escolha do Atributo
        scanf("%d", &escolha);
        
        printf("\n\n");

        //Início dos possíveis casos de escolha
        switch (escolha)
        {
            //Caso o atributo População seja escolhido
            case 1:

                    printf("Atributo Escolhido: POPULAÇÃO\n");
            
                //Início das Comparações
                if (populacao > populacao2) {
                    printf("Card 1 - Cidade: %s | População: %d\n",cidade, populacao);
                    printf("Card 2 - Cidade: %s | População: %d\n",cidade2, populacao2);
                    printf("***Card 1: %s Venceu!!***", cidade);

                } else if (populacao < populacao2) {
                
                    printf("Card 1 - Cidade: %s | População: %d\n",cidade, populacao);
                    printf("Card 2 - Cidade: %s | População: %d\n",cidade2, populacao2);
                    printf("*** Card 2: %s Venceu!!***", cidade2);

                } else {
                 
                    printf("Card 1 - Cidade: %s | População: %d\n",cidade, populacao);
                    printf("Card 2 - Cidade: %s | População: %d\n",cidade2, populacao2);
                    printf("### EMPATE ###"); // Mensagem em caso de empate
                }
                break;


            //Caso o atributo Área seja escolhido
            case 2:

                    printf("Atributo Escolhido: ÁREA\n");

                //Início das Comparações
                if (area > area2) {
                          
                    printf("Card 1 - Cidade: %s | Área: %.2f km²\n",cidade, area);
                    printf("Card 2 - Cidade: %s | Área: %.2f km²\n",cidade2, area2);
                    printf("***Card 1: %s Venceu!!***", cidade);

            }   else if (area < area2) {
                  
                    printf("Card 1 - Cidade: %s | Área: %.2f km²\n",cidade, area);
                    printf("Card 2 - Cidade: %s | Área: %.2f km²\n",cidade2, area2);
                    printf("***Card 2: %s Venceu!!***", cidade2);

            }   else {
                    
                    printf("Card 1 - Cidade: %s | Área: %.2f km²\n",cidade, area);
                    printf("Card 2 - Cidade: %s | Área: %.2f km²\n",cidade2, area2);
                    printf("### EMPATE ###"); // Mensagem em caso de empate
            }
                break;
            

            //Caso o atributo PIB seja escolhido
            case 3:

                    printf("Atributo Escolhido: PIB\n");
            
                // Início das comparações
                if (pib > pib2) {
                    printf("Card 1 - Cidade: %s | PIB: %.2f bilhões de reais\n",cidade, pib);
                    printf("Card 2 - Cidade: %s | PIB: %.2f bilhões de reais\n",cidade2, pib2);
                    printf("***Card 1: %s Venceu!!***", cidade);

            }   else if (pib < pib2) {
                    printf("Card 1 - Cidade: %s | PIB: %.2f bilhões de reais\n",cidade, pib);
                    printf("Card 2 - Cidade: %s | PIB: %.2f bilhões de reais\n",cidade2, pib2);
                    printf("***Card 2: %s Venceu!!***", cidade2);

            }   else {
                    printf("Card 1 - Cidade: %s | PIB: %.2f bilhões de reais\n",cidade, pib);
                    printf("Card 2 - Cidade: %s | PIB: %.2f bilhões de reais\n",cidade2, pib2);
                    printf("### EMPATE ###"); // Mensagem em caso de empate
            }
                break;


            //Caso o atributo Pontos Turísticos seja escolhido
            case 4:
            
                    printf("Atributo Escolhido: PONTOS TURÍSTICOS\n");

                //Início das comparações    
                if (pontosturiscos > pontosturiscos2) {
                    printf("Card 1 - Cidade: %s | Pontos Turísticos: %d\n",cidade, pontosturiscos);
                    printf("Card 2 - Cidade: %s | Pontos Turísticos: %d\n",cidade2, pontosturiscos2);
                    printf("*** Card 1: %s Venceu!!***", cidade);

            }   else if (pontosturiscos < pontosturiscos2) {
                    printf("Card 1 - Cidade: %s | Pontos Turísticos: %d\n",cidade, pontosturiscos);
                    printf("Card 2 - Cidade: %s | Pontos Turísticos: %d\n",cidade2, pontosturiscos2);
                    printf("*** Card 2: %s Venceu!!***", cidade2);

            } else {
                    printf("### EMPATE ###"); // Mensagem em caso de empate
            }
                break;

             //Caso o atributo Densidade Populacional seja escolhido
            case 5:

                    printf("Atributo Escolhido: DENSIDADE POPULACIONAL\n");

                //Início das comparações     
                if (densidade < densidade2) {
                    printf("Card 1 - Cidade: %s | Densidade Populacional: %.2f hab/km²\n",cidade, densidade);
                    printf("Card 2 - Cidade: %s | Densidade Populacional: %.2f hab/km²\n",cidade2, densidade2);
                    printf("*** Card 1: %s Venceu!!***", cidade);

            }   else if (densidade > densidade2) {
                    printf("Card 1 - Cidade: %s | Densidade Populacional: %.2f hab/km²\n",cidade, densidade);
                    printf("Card 2 - Cidade: %s | Densidade Populacional: %.2f hab/km²\n",cidade2, densidade2);
                    printf("*** Card 2: %s Venceu!!***", cidade2);

            } else {
                    printf("### EMPATE ###"); // Mensagem em caso de empate
            }
                break;
           
        default:

                    printf("Escolha uma opção válida\n"); // Mensagem exibida caso seja digitado um número diferente das opções
                break;
        }
    
        
    return 0;
}