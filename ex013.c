#include <stdio.h>

int main(){
	int num[10];
	int crescente = 1;
	
	for(int i = 0; i < 10; i++){
		printf("Informe posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < 10; i++){
		printf("num[%d]: %d \n", i, num[i]);
	}
	
	for(int i = 0; i < 9; i++){
	    if (num[i] > num [i+1]){
	    crescente = 0;
	    break;    
	    }
	}
	
	if (crescente == 1) {
	    printf("\n\nA lista esta em ordem crescente!");
	} else{
	    printf("\n\nA lista nao esta em ordem!");
	}

	return 0;
}