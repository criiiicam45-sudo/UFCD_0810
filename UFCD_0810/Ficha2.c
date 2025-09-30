//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//void teste_ponteiros() {
//	//declaraçao de variaveis
//	int x = 1, y = 2;
//
//	//declaracao de variavel tipo ponteiro
//	int* p;
//
//	//coloca em P o endereço de X e P agora aponta para a variavel X
//	p = &x;
//	printf("Valors de P: %d \n", p);
//
//	//coloca em Y o valor do objeto apontado
//	y = *p;
//	printf("Valors de Y: %d \n", y);
//
//	//coloca o objeto apontado por p o 
//	*p =0;
//	printf("Valors de x: %d \n", x);
//}
//
//void exercicio1() {
//	int  num1 = 7;
//	int* num2;
//
//	//utilizar o & para copiar o endereço da variavel num1 para
//	//o apontador num2
//	num2 = &num1;
//
//	//mostrar as informaçºoes da varia vel e apontador
//	printf("valor de num1:%d \n", num1);
//	printf("valor de num2:%d \n", num2);
//	printf("valor de num2 com *: %d\n", *num2);
//
//
//}
//void exercicio2() {
//
//	int valor1 = 5;
//	float valor2 = 10;
//	char letra = 'a';
//
//	//variaveis tipo ponteiros
//	int *ponteiro_valor1;
//	float *ponteiro_valor2;
//	char *ponteiro_letra;
//
//	//associação dos ponteiros para as variaveis(para o copiar o endereço)
//	ponteiro_valor1 = &valor1;
//	ponteiro_valor2 = &valor2;
//	ponteiro_letra = &letra;
//
//	//mostrar os valores dos apontadores
//	printf("valor do ponteiro_valor1: %d \n", *ponteiro_valor1);
//	printf("valor do ponteiro_valor2: %f \n", *ponteiro_valor2);
//	printf("valor do ponteiro_letra: %C \n", *ponteiro_letra);
//
//	//mudar os valores dos ponteiros nas variaveis originais
//	*ponteiro
//
//
//
//
//}
//
//Void exercicio3() {
//	//declarar variaveis normais
//	int x = 5, y = 7;
//
//	print(endereco de x : % d \n, &x);
//
//}
////procedimento do exercicio 4
//void verifica_numeros(int v1, int v2) {
//
//	if (v1 > v2) {
//		printf("v1 é o maior");
//
//	}
//	else if (v2 > v1) {
//		printf("v2 é o maior");
//
//	}
//	else {
//		printf("v2 é o maior");
//
//	}
//}
//void exercicio4() {
//	int valor1 = 10, valor2 = 15;
//
//	//invocar o procedimento para verificar qual dos numeros é o maior
//	verifica_numeros(valor1, valor2);
//
//
//}
////subprograma do ex 5
//void recebe_valores(int n1, int n2) {
//	n1 = 30;
//	n2 = 75;
//	//mostrar valores de subprograma
//	printf("valor de n1: %d \n", n1);
//	printf("valor de n2: %d \n", n2);
//
//	*n1 = 30;
//	*n2 = 70;
//}
//void exercicio5() {
//	int num1 = 5, num2 = 10;
//
//	//invocar subprograma para receber informação
//	recebe_valores(valor1, valor2);
//
//	}
//
//void main() {
//
//	struct Atleta {
//		int ID;
//		char nome[25];
//		int idade;
//		float peso;
//		
//	};
//
//}
//void main() {
//	//teste_ponteiros();
//	//exercicio1();
//	//exercicio2();
//	//exercicio3();
//	//exercicio4();
//	//exercicio5();
//
//
//
//
//}