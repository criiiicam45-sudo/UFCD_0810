//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//struct animal {
//	int ID;
//	char Nome[25];
//	int Idade;
//	float Peso;
//};
//
//void Mostra_Animal(struct Animal registo) {
//	printf("ID: %d \n", registo.ID);
//	printf("Nome: %s \n", registo.Nome);
//	printf("Idade: %d \n", registo.idade);
//	printf("Peso: %f \n", registo.Peso);
//}
//
////ler a informação da estruturs registos_animais
//for (int i = 0; i < 3; i++) {
//	Mostra_Animal(registos_animais[i]);
//}
//
//void exercicio1() {
//	//declaração de uma variavel do tipo estrutura
//	//baseado no animal
//	struct Animal registos_animais[3];
//
//	//inserir informacões com estrutura de repetição
//	for (int i = 0; i < 3; i++) {
//		/*/int id = 0, idade = 0;
//		float peso = 0;
//		char nome[25];*/
//
//		printf("Inserir registo %d \n", i);
//
//		printf("Insira o ID:\n")
//		scanf("%d", &registos_animais[i].ID);
//		
//		printf("Insira o nome:\n");
//		scanf("%s", registos_animais[i].Nome);
//
//		printf("Insira a idade: \n");
//		scanf("%d", registos_animais[i].idade);
//
//		printf("Insira o Peso: \n");
//		scanf("%f", registos_animais[i].Peso);
//
//	}
//}
//struct Animal {
//	int ID;
//	char Nome[25];
//	int Idade;
//	float Peso;
//};
//struct veterinario {
//	int ID;
//	char Nome[25];
//	int Idade;
//	float Cidade[25];
//
//};
//
//void Mostra_Animal(struct Animal registo) {
//	printf("ID: %d \n", registo.ID);
//	printf("Nome: %s \n", registo.Nome);
//	printf("Idade: %d \n", registo.idade);
//	printf("Peso: %f \n", registo.Peso);
//}
//void Mostra_Veterinario(struct Veterinario registo) {
//	printf("ID: %d \n", registo.ID);
//	printf("Nome: %s \n", registo.Nome);
//	printf("Idade: %d \n", registo.Idade);
//	printf("Cidade: %s \n", registo.Cidade);
//}
//
//
//
//void exercicio2() {
//	//declaração baseado no veterinario
//	struct Veterinario registos_veterinarios[3];
//
//
//	for (int i = 0; i < 3; i++) {
//
//
//		printf("Registo Veterinario %d \n", i);
//
//		printf("Insira o ID:")
//		scanf("%d", &registos_veterinarios[i].ID);
//
//		printf("Insira o nome: ");
//		scanf("%s", registos_veterinarios[i].Nome);
//
//		printf("Insira a idade:");
//		scanf("%d", &registos_veterinarios[i].idade);
//
//		printf("Insira a Cidade:");
//		scanf("%s", registos_veterinarios[i].Cidade);
//
//	}
//
//	for (int i = 0; i < 3; i++) {
//		Mostra_Veterinario(registos_veterinarios[i]);
//	}
//}
//
//
//void main() {
//	//exercicio1();
//	exercicio2();
//
//}