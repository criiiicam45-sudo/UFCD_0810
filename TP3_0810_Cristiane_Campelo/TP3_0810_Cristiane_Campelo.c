// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>


// Exercício 1 – Ler e mostrar o conteúdo do ficheiro ficheiro_tp3.txt
void exercicio1() {
    FILE* fp;
    char texto[1000];

    if((fp = fopen("ficheiro_tp3.txt", "r")) == NULL{
    
        printf("Erro ao ler a informacao do ficheiro\n");
    }
    else {
        while (fgets(texto,1000, fp) != NULL) {
            printf("%s", texto); // imprime linha a linha
        }
        fclose(fp);
    }
}

// Exercício 2 – Criar ficheiro e escrever conteúdo
void exercicio2() {
    FILE* fp;

    if((fp = fopen("ficheiro_tp3_escrita.txt", "w")) == NULL{
    
        printf("Erro ao criar o ficheiro\n");
    }
    else {
        char texto[100] = "Este e um ficheiro de teste criado no exercicio 2.";
        puts(texto);         // mostra no ecrã
        fputs(texto, fp);    // grava dentro do ficheiro
        fclose(fp);
    }
}

// Exercício 3 – Acrescentar informação ao ficheiro
void exercicio3() {
    FILE* fp;

    if((fp = fopen("ficheiro_tp3_escrita.txt", "a")) == NULL{
        
   
        printf("Erro ao abrir o ficheiro\n");
    }
    else {
        char expressao[150] = "Aqui acrescentamos mais uma linha de conteudo no exercicio3.";
        puts(expressao);        // mostra no ecrã
        fputs("\n", fp);        // quebra de linha antes de acrescentar
        fputs(expressao, fp);   // escreve no ficheiro
        fclose(fp);
    }
}

int main() {
    printf("\n Executando Exercicio1: \n");
    exercicio1();

    printf("\n Executando Exercicio2: \n");
    exercicio2();

    printf("\n Executando Exercicio3: \n");
    exercicio3();

    return 0;
}

