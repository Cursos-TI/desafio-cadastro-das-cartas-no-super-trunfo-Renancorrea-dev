#include <time.h> // Necessário para usar a função time()
#include <stdlib.h> // Necessário para usar rand() e srand()
#include <stdio.h> // Necessário para printf() e scanf()

int main(){
    
    int resultado1, resultado2;
    char primeiroatributo, segundoatributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

    //GERAR NUMERO ALEATORIO

    srand(time(0)); // Inicializa o gerador de números aleatórios com base no relógio do sistema
    ataque1 = 1;//rand() % 100 + 1; // Numero entre 1 e 100
    ataque2 = 0;//rand() % 100 + 1; // Numero entre 1 e 100
    defesa1 = 1;//rand() % 100 + 1; // Numero entre 1 e 100
    defesa2 = 0;//rand() % 100 + 1; // Numero entre 1 e 100
    recuo1 = 0;//rand() % 100 + 1; // Numero entre 1 e 100
    recuo2 = 1;//rand() % 100 + 1; // Numero entre 1 e 100

    //INICIO DO JOGO

    printf("Bem vindo ao jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("A. ataque\n");
    printf("D. defesa\n");
    printf("R. recuo\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroatributo); // O espaço antes de %c faz ignorar ENTER e espaços

    switch (primeiroatributo)
    {
    case 'A':
    case 'a':
       printf("Voce escolheu a opcao ataque!\n");
       resultado1 = ataque1 > ataque2 ? 1 : 0; // Se ataque1 for maior, resultado = 1 (vitória)
        break;
        case 'D':
        case 'd':
        printf("Voce escolheu a opcao defesa!\n");
        resultado1 = defesa1 > defesa2 ? 1 : 0;
        break;
        case 'R':
        case 'r':
        printf("Voce escolheu a opcao recuo!\n");
        resultado1 = recuo1 > recuo2 ? 1 : 0;
        break;
    default:
    printf("Opcao de jogo invalida!\n");
        return 0; // Encerra o programa se a opção for inválida
    }

    printf("Escolha o segundo atributo.\n");
    printf("Atencção: Voce deve escolher um atributo diferente do primeiro.\n");
    printf("A. ataque\n");
    printf("D. defesa\n");
    printf("R. recuo\n");

    printf("Escolha a comparação: ");
    scanf("%c", &segundoatributo);

    if(primeiroatributo == segundoatributo)
    {
        printf("Voce escolheu o mesmo atributo");
    } else {
        switch (segundoatributo)
        {
        case 'A':
        case 'a':
        printf("Voce escolheu a opcao ataque!\n");
        resultado2 = ataque1 > ataque2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
        printf("Voce escolheu a opcao defesa!\n");
        resultado2 = defesa1 > defesa2 ? 1 : 0;
        break;
        case 'R':
        case 'r':
        printf("Voce escolheu a opcao recuo!\n");
        resultado2 = recuo1 > recuo2 ? 1 : 0;
        default:
        printf("Opcao de jogo invalida!\n");
            break;
        }
        // RESULTADO FINAL
        if (resultado1 && resultado2)
        {
            printf("Parabéns, você venceu!\n"); // Se venceu as duas comparações

        } else if (resultado1 != resultado2){  // Se venceu uma e perdeu outra
            printf("Empatou!\n");
        } else {
            printf("Voce perdeu!\n");  // Se perdeu as duas
        }
        {
        
        }
    }
    return 0;
}
