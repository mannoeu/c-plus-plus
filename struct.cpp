#include <stdio.h>

struct Paciente{
	char nome[60];
	int idade;
	char genero;
	float peso;
	float altura;
	float temperatura;
	char pressao[5];
};

typedef struct Paciente paciente;


int main (){
	Paciente novoPaciente;
	
	printf("===> Cadastre o primeiro paciente: \n");
	
	printf("Nome: "); 
    scanf("%s", &novoPaciente.nome); 
    
    printf("Idade: "); 
    scanf("%d", &novoPaciente.idade);
    
    fflush(stdin);
    printf("Genero: "); 
    scanf("%c", &novoPaciente.genero);

    
    printf("Peso: "); 
    scanf("%f", &novoPaciente.peso);
    
    printf("Altura: "); 
    scanf("%f", &novoPaciente.altura);
    
    printf("Temperatura: "); 
    scanf("%f", &novoPaciente.temperatura);
    
    fflush(stdin);
    printf("Pressao: "); 
    scanf("%s", &novoPaciente.pressao);
	
	printf("\n\n===== Prontuario =====\n");
	printf("\n=> Nome: %s", novoPaciente.nome);
	printf("\n=> Idade: %d", novoPaciente.idade);
	printf("\n=> Genero: %c", novoPaciente.genero);
	printf("\n=> Peso: %.2f", novoPaciente.peso);
	printf("\n=> Altura: %.2f", novoPaciente.altura);
	printf("\n=> Temperatura: %.2f", novoPaciente.temperatura);
	printf("\n=> Pressao: %s", novoPaciente.pressao);
	
	return 0;
	
}
