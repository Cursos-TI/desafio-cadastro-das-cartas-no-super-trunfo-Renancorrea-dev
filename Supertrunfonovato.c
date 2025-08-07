#include <stdio.h>
#include <string.h>

    int main (){


    /*Variaveis Carta 1*/

    char cidade1 [100];
    int população1;
    double area1;
    double PIB1;
    int Pontosturisticos1;
    
    /*Variaveis Carta 2*/

    char cidade2 [100];
    int população2;
    double area2;
    double PIB2;
    int Pontosturisticos2;

    /* Leitura da carta 1 */

    printf("Digite a cidade 1: " );
    scanf("%s", cidade1); 
    //Sem uso de & por causa da string

    printf("Digite a população 1: " );
    scanf("%d", &população1);

    printf("Digite a área (km²) da Cidade 1: ");    
    scanf("%lf", &area1); 

    printf("Digite o PIB 1: " );
    scanf("%lf", &PIB1);
    // Uso do %.2lf para exibir números double com duas casas decimais.

    printf("Digite os pontos turísticos da Cidade 1: ");
       scanf("%d", &Pontosturisticos1);

    /*Leitura Carta 2*/

    printf("Digite a cidade 2: ");
    scanf("%s", cidade2);

    printf("Digite a população 2: ");
    scanf("%d", &população2);

    printf("Digite a area 2 (km2): ");
    scanf("%lf", &area2);

    printf("Digite o PIB 2: ");
    scanf("%lf", &PIB2);

    printf("Digite os pontosturisticos1: ");
    scanf("%d", &Pontosturisticos2);

    /*Dados primeira carta*/
    
    printf("\\n--- Dados da CARTA 1 ---\\n");
    
    printf("nome: %s\\n", cidade1);
    
    printf("população: %d\\n", população1);
    
    printf("area: %.2lf km²\\n", area1);
    // %.2lf para exibir double com 2 casas decimais
    
    printf("PIB: %.2lf\\n", PIB1);    
    
    printf("Pontos Turísticos: %d\\n", Pontosturisticos1);
         
    /*Dados segunda carta*/

    
    printf("\\n--- Dados da CARTA 2 ---\\n");    
    
    printf("nome: %s\\n", cidade2);    
    
    printf("população: %d\\n", população2);    
    
    printf("area: %.2lf km²\\n", area2);    
    
    printf("PIB: %.2lf\\n", PIB2);    
    
    printf("Pontos Turísticos: %d\\n", Pontosturisticos2);
    
    return 0;}
