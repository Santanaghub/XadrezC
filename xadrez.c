#include <stdio.h>

int main(){
   // mover a torre 5 casas a direita
   for (int i = 0; i < 5; i++) {
     printf("direita\n"); // imprime a direção do movimento
   }
int linha = 2; // por exemplo, começa na linha 2 (equivalente à casa c3)
int coluna = 2; // começa na coluna 2 (c = terceira coluna)
int passos = 0;

    do {
    linha += 1;     // diagonal → avança uma linha
    coluna += 1;    // diagonal → avança uma coluna (direita)
    passos++;

        printf("Bispo move para direita (%d, %d)\n", linha, coluna); // exibe a nova posição

} 

    while (passos < 5 && linha < 8 && coluna < 8);
int linha = 4;    // linha atual (por exemplo, linha 4 = e)
int coluna = 4;   // coluna atual (por exemplo, h = 4)
int passos = 8;

    while (passos < 8 && coluna > 0) {
        coluna -= 1;     // move 8 casas para a esquerda
        passos++;

        printf("Rainha move 8 linhas para esquerda (%d, %d)\n", linha, coluna);
}

return 0;

}