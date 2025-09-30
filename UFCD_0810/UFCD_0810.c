//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//void exercicio1() {
//	//Declaração do vetor com 5 elemmentos
//	int numeros[5];
//
//	//colocar os valores dentro do vetor (MANUAL)
//	numeros[0] = 12;
//	numeros[1] = 21;
//	numeros[2] = 7;
//	numeros[3] = 9;
//	numeros[4] = 31;
//
//	//mostrar os valores dentro do vetor (MANUAL)
//	printf("valor do indice 0: %d\n", numeros[0]);
//	printf("valor do indice 1: %d\n", numeros[1]);
//	printf("valor do indice 2: %d\n", numeros[2]);
//	printf("valor do indice 3: %d\n", numeros[3]);
//	printf("valor do indice 4: %d\n", numeros[4]);
//}
//void exercicio2() {
//	//Declaração de um vetor com 5 elementos
//	int lista[5];
//
//	//Estrutura de repetição automatica FOR
//	//para automatizar o processo da obtenção da  informação
//	//Parametro 1: valor mínimo a processar
//	//Parametro 2: condição máxima que pode atingir
//	//Parametro 3: incrementar +1 de cada vez que repetir a
//	//estrutura de repetição
//	for (int i = 0; i < 5; i++) {
//		//mostrar a mensagem do indice que está a percorrer atualmente
//		printf("valor do indice %d:", i);
//		//ler o calor do teclado e colocar no indice do vetor atual
//		scanf("%d", &lista[i]);
//	}
//	//como ler o vetor e mostrar o valor dos indices
//	for (int i = 0; i < 5; i++) {
//		printf("valor do indice %d: %d \n", i, lista[i]);
//	}
//}
//void exercicio3() {
//	//criação do vetor decimais com 6 elementos
//	float notas[6];
//
//		//estrutura de repetição FOR para pedir valores decimais
//	for (int i = 0; i < 6; i++) {
//		printf("valor do indice %d:", i);
//		//pedir o valor decimal ao utilizador
//		scanf("%f", &notas[i]);
//	}
//
//	//estrutura de repetição para ler os valores do vetor
//	for (int i = 0; i < 6; i++) {
//		//estrutura de decisão dupla para avaliar se o valor que
//		//estiver a percorrer é positivo ou é negativo
//		if (notas[i] < 0) {
//			negativos++; //negativos = negativos + 1;
//		}
//		else {
//			positivos++; //positivos = positivos +1;
//		}
//	}
//	//mostrar quantos positivos e negativos detetou
//	printf("numero de positivos: %d e negativos: %d", positivos, negativos);
//}
//
//void exercicio4(){
//	//criação de vetor inteiro com 5 elementos
//	int valores[5];
//
//
//	//estrutura de  repetição para inserir valores no vetor
//	for (int x = 0; x < 5; x++) {
//	//declaração de variavel só para correr dentro do FOR
//		int  valor = 0;
//
//
//		//ewstrutura de repetição do...while que vai servir
//		//para verificar se os numeros s~so diferentes de 1
//		do {
//			printf("Insira o  valor para o indice %d:", x);
//			scanf("%d", &valor);
//
//		} while (valor == 1);
//		
//		//só depois de ultrapassar a condição do  do...while é 
//		//que vamos assumir o novo valor no vetot, ou seja,
//		//o valor introduzido foi diferente de 1
//		valores[x] = valor;
//
//	}
//	//estrutura de repetição para ler os valores no vetor
//	for (int x = 0; x < 5; x++) {
//		printf("valor do indice %d e: %d \n", x, valores[x]);
//
//	}
//	}
//void exercicio5() {
//	//declaração do  vetor com 5 elementos
//	int numeros[5];
//
//	//estruturs de reticao For para inserir  valores no vetor
//	for (int i = 0; i < 5; i++) {
//		printf("Insira o valor do indice %d:", i);
//		scanf("%d", &numeros[i]);
//	}
//	//estrutura de repetição FOR par ler os valores
//	for (int i = 0; i < 5; i++) {
//		printf("valor do indice %d: %d \n", i, numeros[i]);
//
//		//estrutura de decisão simples para verificar se
//		//o elemento do indice tem valor 5
//		if (numeros[i] == 5){
//			printf("Esse indice tem o valor 5! \n");
//		}
//	
//	}
//}
////Função para verificar se existe um numero igual no vetor
////e retornar 2 respostas:
////0 caso não encontre nenhum numero repetido
////1 caso encontre numero repetido
//int verifica_numeros(int vetor[5], int valor) {
//	//estrutura de repetição para ler os valores do vetor
//	for (int i = 0; i < 5; i++) {
//		//estrutura de decisão simples para verificar
//		//se existe o numero repetido dentro do valor
//		if (vetor[i] == valor) {
//			return 1;
//
//		}
//	}
//
//	// se não acontecer nada dentro da repetição do FOR
//	// significa se não encontrou numero repetido
//	return 0;
//}
//
////procedimento para calcular a media os numeros de um vetor
//void calcula_media(int vetor[5]) {
//		//percorrer todos os elemntos  do vetor e somar todos os valores
//	float soma = 0;
//
//		//estrutura de repetição para percorrer o vetor que recebemos
//	for (int i = 0; i < 5; i++){
//		// somar todos os numeros que exitem no vetor
//		soma = soma + vetor[i];
//
//	}
//	//Mostrar o resultado da média
//	printf("Media dos numeros no vetor: %f", (soma / 5));
//
//}
//
//
//
//void exercicio6() {
////declaracao do vetor com 5 elementos
//	int vetor[5];
//
//	//estrutura de repeticao FOR par inserir valores no vetor
//	for (int i = 0; i < 5; i++) {
//		//dedclarar variavel para armazenar o valor
//		int valor = 0;
//
//		//estrutura de repetição do... while para  receber e depois avaliar
//		//o valor no teclado e deve repetir o  código se a função
//		//verifica_numeros retornar o valor 1
//		
//		do {
//			//pedir in formação ao utilizador
//			printf("Insira o valor para indice %d:", i);
//			scanf("%d", &valor);
//		} while (verifica_numeros(vetor, valor) ==1);
//
//		// só depois de ultrapassar a condição do do... while
//		//é que vamos assumir o novo valor no vetor, ou seja,
//		//o valor introduzidofoi digerente de 1
//		//logo não existe numero repetido
//		vetor[i] = valor;
//
//	}
//	//Invocar o procedimento e mostrar a media
//	calcula_media(vetor);
//
//	
//
//}
//
//void exercicio7() {
//	//declarar um array multidimensional
//	//uma matriz é composta por linhas e colunas
//	int matriz[3][3];
//
//	//como a matriz tem linhas e colunas precisamos de 2 estruturas
//	//de repetição para processar as mesmas
//
//	//para inserir valores na matriz
//	for (int i = 0; i < 3; i++) {//percorrer as linhas da matriz
//		for (int j = 0; j < 3; j++) {//percorrer as colunas da linha que está a processar
//			// a intercessao do valor da linyha i e a coluna j permite colocar o  valor da celula
//			printf("Insira o valor da linha %d e da coluna%d:", i, j);
//			scanf("%d", &matriz[i][j]);
//
//		}
//	}
//		//ler valores da matriz
//	for (int i = 0; i < 3; i++) {//percorrer as linhas da matriz
//		for (int j = 0; j < 3; j++) {//percorrer as colunas da linha que está a processar
//			printf("Valor na linha %d e coluna %d: %d\n", i, j, matriz[i][j]);
//
//		}
//	}
//}
//
//void main() {
//	//exercicio1();
//	//exercicio2();
//	//exercicio3();
//	//exercicio4();
//	//exercicio5();
//	//exercicio6();
//	//exercicio7();
//
//}