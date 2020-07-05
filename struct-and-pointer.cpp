#include <stdio.h>

struct Paciente{
	char nome[60];
	int chegada;
	struct Paciente *prox;
};

typedef struct Paciente paciente;


paciente cadastrar(){
    paciente novoPaciente;
    
    printf("Digite o nome do paciente: "); 
    scanf("%s", &novoPaciente.nome); 
    
    printf("Digite a ficha do paciente: "); 
    scanf("%d", &novoPaciente.chegada);
    
    novoPaciente.prox = NULL;
    
    return novoPaciente;
}

int main (){
	paciente paciente1, paciente2;
	
	printf("===> Cadastre o primeiro paciente: \n");
	paciente1 = cadastrar();
	
	printf("\n===> Cadastre o segundo paciente: \n");
	paciente2 = cadastrar();
	
	paciente1.prox = &paciente2;
	
	printf("\n===> Registros:");
	printf("\n- Paciente 1:");
	printf("\nNome: %s", paciente1.nome);
	printf("\nFicha: %d", paciente1.chegada);
	printf("\nProximo: %s", paciente1.prox->nome);
	printf("\n- Paciente 2:");
	printf("\nNome: %s", paciente2.nome);
	printf("\nFicha: %d", paciente2.chegada);
}
