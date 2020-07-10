#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 


struct Funcionario{
	char primeiroNome[20];
	float salario;
};

typedef struct Funcionario Funcionario;


void swap(Funcionario *xp, Funcionario *yp)  
{  
    Funcionario temp = *xp;  
    *xp = *yp;
    *yp = temp;
}  

void selectionSort(Funcionario arr[], int n)  
{  
    int i, j, min_idx;  
  
    for (i = 0; i < n-1; i++){
        min_idx = i;  
        
        for (j = i+1; j < n; j++){
        	if (arr[j].salario < arr[min_idx].salario)  {
				min_idx = j;  
			}            
		}
   
        swap(&arr[min_idx], &arr[i]);  
    }  
}  


void printArray(Funcionario funcionarios[], int size)  
{  
    printf("===================================================\n");
    printf("FUNCIONARIOS EM ORDEM CRESCENTE DE SALARIO: \n");
    printf("===================================================\n");
    	
    int i;  
    
    for (i=0; i < size; i++) {
    	printf("Nome: %s\nSalario: %.2f\n\n", funcionarios[i].primeiroNome, funcionarios[i].salario);    	
	}
}  
  
int main (){
	int n;
	
	printf("Digite o numero de funcionarios: ");
	scanf("%d", &n);
	
	Funcionario funcionarios[n];
	
	for(int i = 0; i < n; i++){
		char nome[20];
		float salario;
		
		printf("Digite o nome do funcionario [%d]: ", i + 1);
		scanf("%s", &funcionarios[i].primeiroNome);
		
		printf("Digite o salario do funcionario [%d]: ", i + 1);
		scanf("%f", &funcionarios[i].salario);
		
		printf("\n");
	}
		
	selectionSort(funcionarios, sizeof(funcionarios)/sizeof(funcionarios[0]));
	
	printArray(funcionarios, n);
	
	return  0;
}
