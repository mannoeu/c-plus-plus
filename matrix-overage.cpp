#include <stdio.h>


int main (){
	float matriz[5][3];
	int linha, coluna;
	
	float media, soma = 0;
	
	for(linha=0; linha<5; linha++){
		for(coluna=0; coluna<3; coluna++){
			printf("Digite um valor: ");
			scanf("%f", &matriz[linha][coluna]);
		}
	}
	
	printf("\n\n===== Sua matriz =====\n\n");
	
	for(linha=0; linha<5; linha++){
		for(coluna=0; coluna<3; coluna++){
			printf("%f ", matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\n\n===== A media dos numeros da matriz =====\n\n");
	
	for(linha=0; linha<5; linha++){
		for(coluna=0; coluna<3; coluna++){
			soma = soma + matriz[linha][coluna];
		}
	}
	
	media = soma / (5*3);
	
	printf("%.2f", media);

	return 0;
}
