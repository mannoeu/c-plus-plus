#include <stdio.h>


int main (){
	int vetor[10];
	int acc, i, f;
	
	
	for(i=0; i<10; i++){
		printf("~> Digite o numero [%i]: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n\n===== Ordenado =====\n\n");
	
	for(i=0; i<10; i++){
		for(f=i+1; f<10; f++){
			if(vetor[i] > vetor[f]){
				acc = vetor[i];
				vetor[i] = vetor[f];
				vetor[f] = acc;
			}
		}
	}
	
	for(i=0; i<10; i++){
		printf("[%d], ", vetor[i]);
	}
	
	return 0;
}
