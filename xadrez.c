#include <stdio.h>

int main() {

    printf("## MOVIMENTO DE PEÇAS DE XADREX ##\n\n");
    
    //Mover a Torre 5 casas para a direita
    printf("## Movimento da Torre 5 casas para a direita ##\n\n");

    // Implementação de Movimentação da Torre usando For
    for(int Torre = 0; Torre < 5; Torre++) 
    {
        printf("Direita\n"); //Imprime a direção do movimento
    } 
    
    printf("\n\n");

    //Mover o Bispo 5 casas para a diagonal para cima e à direita
    printf("## Movimento do Bispo 5 casas para cima e à direita ##\n\n");

    // Implementação de Movimentação do Bispo usando while
    int Bispo = 1;

    while (Bispo <= 5)
    {
       printf("Cima-Direita\n", Bispo); //Imprime a direção do movimento
       Bispo++;
    }

    printf("\n\n");

    //Mover a Rainha 8 casas para a esquerda
    printf("## Movimento da Rainha 8 casas para a esquerda ##\n\n");

    // Implementação de Movimentação da Rainha usando do-while
    int Rainha = 1;

    do
    {
        printf("Esquerda\n", Rainha);//Imprime a direção do movimento
        Rainha++;
    } while (Rainha <= 8);

    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.