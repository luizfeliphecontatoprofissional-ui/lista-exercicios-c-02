#include <stdio.h>

int main(){
    int num[100];
    int qtd = 0;
    int valor;
    
    for (qtd = 0; qtd < 100; qtd++){
        printf("Digite um numero (0 para encerrar): ");
        scanf("%d", &valor);
        
        if (valor == 0) {
            break;
        }
        
        num[qtd] = valor;
    }
    
    if(qtd == 0){
        printf("\nNenhum numero foi digitado.\n");
        return 0;
    }
    
    int soma = 0;
    int pares = 0, impares = 0;
    int maior = num[0], posmaior = 0;
    int menor = num[0], posmenor = 0;
    
    for (int i = 0; i < qtd; i++){
        soma += num[i];
        
        if (num[i] % 2 == 0){
            pares ++;
        } else {
            impares ++;
        }
        
        if (num[i] > maior) {
            maior = num[i];
            posmaior = i;
        }
        if (num[i] < menor) {
            menor = num[i];
            posmenor = i;
        }
    }
    
    float media = (float)soma / qtd;
    
    printf("\n--- RESULTADOS ---");
    printf("\nA quantidade de numeros: %d", qtd);
    printf("\nSoma: %d", soma);
    printf("\nMedia: %.2f", media);
    printf("\nPares: %d | Impares: %d", pares, impares);
    printf("\nMaior: %d (posicao %d)", maior, posmaior);
    printf("\nMenor: %d (posicao %d)", menor, posmenor);
    
    
    int X, achou = 0;
    printf("\nDigite um valor X para buscar no vetor: ");
    scanf("%d", &X);
    
    for (int i = 0; i < qtd; i++) {
        if (num[i] == X) {
            printf("O valor %d foi encontrado na posicao %d!\n", X, i);
            achou = 1;
        }
    }
    
    if (!achou) {
        printf("O valor encontrado %d nao pertence ao vetor.\n", X);
    }
    
    return 0;
}