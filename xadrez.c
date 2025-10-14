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
    
    // Realiza os movimentos da torre usando a estrutura de loop while em uma função
    void movimentacaoTorre(contador, torre) {
      while (contador <= torre) {
        printf("Direita\n");
      
        contador++;
      }
    }
    
    // Realiza os movimentos da torre usando recursividade
    void movimentacaoRecursivaTorre(contador, torre) {
      printf("Direita\n");
      if (contador < torre) {
        contador++;
        movimentacaoRecursivaTorre(contador, torre);
      }
    }
    
    // Realiza os movimentos da rainha usando a estrutura de loop for
    void movimentacaoRainha(contador, rainha) {
      for (contador; contador <= rainha; contador++) {
      printf("Esquerda\n");
      }
    }
    
    // Realiza os movimentos do bispo usando a estrutura de loop do while
    void movimentacaoBispo(contador, bispo) {
      do {
      printf("Cima, Direita\n");
      
      contador++;
      } while (contador <= bispo);
    }
    
    void movimentacaoCavalo() {
      int count1 = 1;
      int count2 = 1;
      int cavalo1 = 2;
      int cavalo2 = 1;
      
      for (count1; count1 <= cavalo2; count1++) {
        for (count2; count2 <= cavalo1; count2++) {
         printf("Baixo\n");
        }
        printf("Esquerda");
      }
    }
    
    printf("Movimento de algumas peças de Xadrez.\n");
    printf("=====================================\n");
    printf("Movimento da Torre\n");
    printf("-------------------------------------\n");
    movimentacaoRecursivaTorre(contador, torre);
    
    printf("\n");
    printf("Movimento do Bispo\n");
    printf("-------------------------------------\n");
    movimentacaoBispo(contador, bispo);
    
    printf("\n");
    printf("Movimento da Rainha\n");
    printf("-------------------------------------\n");
    movimentacaoRainha(contador, rainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n");
    printf("Movimentação do Cavalo\n");
    printf("-------------------------------------\n");
    movimentacaoCavalo();
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
