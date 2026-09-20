#include <stdio.h>

int main(){
    int num[10];
	int achoumaior = 0;
	int achoumenor = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Informe posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < 10; i++){
		printf("num[%d]: %d \n", i, num[i]);
	}
	
	int maior = num[0], posmaior = 0;
	int menor = num[0], posmenor = 0;
	
	
	for (int i = 0; i < 10; i++){
		if (num[i] > maior) {
			maior = num[i];
			posmaior = i;
			
		}
		if (num[i] < menor) {
			menor = num[i];
			posmenor = i;
		}
	}
	printf("\nO maior valor: %d, na posicao %d", maior, posmaior);
	
	printf("\nO menor valor: %d, na posicao %d", menor, posmenor);
	return 0;
}