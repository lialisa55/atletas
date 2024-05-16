#include <stdio.h>

// Função para trocar dois elementos de um vetor
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função de ordenação usando Bubble Sort
void bubbleSort(int pontos[], int ids[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (pontos[j] < pontos[j+1]) {
                swap(&pontos[j], &pontos[j+1]);
                swap(&ids[j], &ids[j+1]); // Mantém a sincronia dos IDs ao trocar os pontos
            }
        }
    }
}

int main() {
    int n;
    printf("Digite o número de atletas: ");
    scanf("%d", &n);

    int pontos[n];
    int ids[n];

    // Leitura dos pontos de cada atleta e atribuição de IDs
    for (int i = 0; i < n; i++) {
        printf("Digite os pontos do atleta %d: ", i+1);
        scanf("%d", &pontos[i]);
        ids[i] = i + 1; // Atribui um número de identificação para cada atleta
    }

    // Ordena os pontos utilizando Bubble Sort
    bubbleSort(pontos, ids, n);

    // Imprime as colocações
    printf("\nColocações:\n");
    for (int i = 0; i < n; i++) {
        printf("%d atleta, %d pontos, %d colocação\n", i, pontos[i], n -);
    }

    return 0;
}
