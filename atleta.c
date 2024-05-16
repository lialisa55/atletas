#include <stdio.h>

void bubbleSort(int pontos[], int n) {
    int i, j, tempPontos;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (pontos[j] < pontos[j+1]) {
                tempPontos = pontos[j];
                pontos[j] = pontos[j+1];
                pontos[j+1] = tempPontos;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Digite o número de atletas: ");
    scanf("%d", &n);
    
    int pontos[n];
    int pontosCopia[n];
    int indices[n];
    int colocacao[n];
    
    // Recebe os pontos dos atletas
    for (i = 0; i < n; i++) {
        printf("Digite os pontos do atleta %d: ", i+1);
        scanf("%d", &pontos[i]);
        pontosCopia[i] = pontos[i]; // Faz uma cópia dos pontos
        indices[i] = i; // Armazena o índice original
    }
    
    // Ordena os pontos usando a cópia e os índices
    bubbleSort(pontosCopia, n);
    
    // Atribui as colocações
    for (i = 0; i < n; i++) {
        colocacao[indices[i]] = i + 1;
    }
    
    // Imprime os resultados mantendo a ordem original
    for (i = 0; i < n; i++) {
        printf("Atleta: %d, Pontos: %d, Colocacao: %d\n", i+1, pontos[i], colocacao[i]);
    }
    
    return 0;
}
