// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
	//inicializar um ficheiro e colocar o modo de abertura
	FILE* fp;
	char linha[1000];//paraarmazenar as linhas lidas dos ficheiros

	//a função fopen tem 2 parametros
	//Parametro 1 - localização do ficheiro
	//Parametro 2 - modo de abertura
	fp = fopen("ficheiro1.txt", "r");

	if ((fp = fopen("ficheiro1.txt", "r")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		printf("Informacao do ficheiro:\n\n");

		//precisamos de uma estruturade repetição pois a função fgets
		//lê o conteudo linha a linha
		while (fgets(linha, 1000, fp) != NULL) {//enquanto não atingir o fim do ficheiro
			printf("%s", linha);

		}
	}
}

	void exercicio2() {
		//inicializar um ficheiro e colocar o modo de abertura
		FILE* fp;
		char linha[1000];//paraarmazenar as linhas lidas dos ficheiros

		//a função fopen tem 2 parametros
		//Parametro 1 - localização do ficheiro
		//Parametro 2 - modo de abertura
		//fp = fopen("ficheiro1.txt", "r");

		if ((fp = fopen("ficheiro1.txt", "w")) == NULL) {
			printf("Impossivel abrir/criar o ficheiro pretendido \n");
			exit(1);
		}
		else {
			char texto[50] = "onde esta otexto?\n sera que quebrou?";
			//funcao fputs tem 2 parametros: variavel e ficheiro
			fputs(texto, fp);

		}
		//fechar o ficheiro que foi aberto
		fclose(fp);

	}
	void exercicio3() {
		//inicializar um ficheiro e colocar o modo de abertura
		FILE* fp;
		char linha[1000];//paraarmazenar as linhas lidas dos ficheiros

		//a função fopen tem 2 parametros
		//Parametro 1 - localização do ficheiro
		//Parametro 2 - modo de abertura
		
		if ((fp = fopen("teste.txt", "w+")) == NULL) {
			printf("Impossivel abrir/criar o ficheiro pretendido \n");
			exit(1);
		}
		else {
			//escrever  frase dentro do ficheiro com fputs
			fputs("Isto e uma experiencia utilizando o tema de acesso a informacao de forma direta", fp);

			//funcao seek serve para posicionar no fivcheiro
			//Parametro 1:indicar  o ficheiro
			//Parametro 2: qantos caracteres vamos ler
			//Parametro 3: qual posicionamento(inicio, especifico  ou fim)
			fseek(fp, 0, SEEK_SET);

			//funcao fgets para obterdados
			fgets(linha, 35, fp);

			//mostrar o que foi obtido
			printf("Antes de usar a funcao fseek: \n %s \n\n", linha);

			//utilizar a funcao fseek para colocar a leitura da informacao no caracter 21
			fseek(fp, 0, SEEK_SET);
			//funcao fgets para obter informação
			fgets(linha, 30, fp);
			//exibir a informação
			printf("Depois de usar o metodo SEEK_SET a partir do caracter 21: \n  %s \n\n", linha);

			//utilizar o fseek e retirar 10 caracteres
			fseek(fp, -35, SEEK_CUR);
			fgets(linha, 10, fp);
			printf("Depois de usar o seek_cur e retirar 10 caracteres na posicao atual:\n %s \n\n", linha);

			//ler a informação a partir do final do ficheiro
			fseek(fp, 0, SEEK_END);
			fgets(linha, 10, fp);
			printf("%s \n", linha);

			//fechar o ficheiro que foi aberto
			fclose(fp);


		}

	}
void main() {
	//exercicio1();
	//exercicio2();
	exercicio3();
	//exercicio4();

}