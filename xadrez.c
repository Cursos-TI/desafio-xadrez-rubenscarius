#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int contador = 1;
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int count1 = 1;
    int count2 = 1;
    int cavalo1 = 2;
    int cavalo2 = 1;
    
    printf("Movimento de algumas peças de Xadrez.\n");
    printf("=====================================\n");
    printf("Movimento da Torre\n");
    printf("-------------------------------------\n");
    
    // Realiza os movimentos da torre usando a estrutura de loop while
    while (contador <= torre) {
      printf("Direita\n");
      
      contador++;
    }
    contador = 1;
    
    printf("\n");
    printf("Movimento do Bispo\n");
    printf("-------------------------------------\n");
    
    // Realiza os movimentos do bispo usando a estrutura de loop do while
    do {
      printf("Cima, Direita\n");
      
      contador++;
    } while (contador <= bispo);
    contador = 1;
    
    printf("\n");
    printf("Movimento da Rainha\n");
    printf("-------------------------------------\n");
    
    // Realiza os movimentos da rainha usando a estrutura de loop for
    for (contador; contador <= rainha; contador++) {
      printf("Esquerda\n");
    }
    contador = 1;
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação do Cavalo\n");
    printf("-------------------------------------\n");
    
    for (count1; count1 <= cavalo2; count1++) {
      for (count2; count2 <= cavalo1; count2++) {
        printf("Baixo\n");
      }
      printf("Esquerda");
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
