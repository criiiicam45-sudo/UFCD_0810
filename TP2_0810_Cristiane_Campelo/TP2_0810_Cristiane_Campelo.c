//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
//// importar bibliotecas
//#include <stdio.h>
//#include <stdlib.h>
//
////Estruturas 
//struct Empresa {
//    int NIF;
//    char Nome[25];
//    char Tipo_Empresa[25];
//    int Ano_Fundacao;
//    int Qtd_Trabalhadores;
//};
//
//struct Funcionario {
//    int ID;
//    char Nome[25];
//    char Cargo[50];
//    float Salario;
//};
//
////Procedimentos
//void Mostra_Empresa(struct Empresa registo) {
//    printf("Empresa\n");
//    printf("NIF: %d\n", registo.NIF);
//    printf("Nome: %s\n", registo.Nome);
//    printf("Tipo de Empresa: %s\n", registo.Tipo_Empresa);
//    printf("Ano de Fundacao: %d\n", registo.Ano_Fundacao);
//    printf("Qtd Trabalhadores: %d\n", registo.Qtd_Trabalhadores);
//}
//
//void Mostra_Funcionario(struct Funcionario registo) {
//    printf("Funcionario\n");
//    printf("ID: %d\n", registo.ID);
//    printf("Nome: %s\n", registo.Nome);
//    printf("Cargo: %s\n", registo.Cargo);
//    printf("Salario: %.2f\n", registo.Salario);
//}
//
////Exercício 1 
//void exercicio1() {
//    //criar variavel estruturada com base na Empresa
//    struct Empresa registos_empresas[4];
//
//    //estrutura de repetição FOR para inserir registos
//    for (int i = 0; i < 4; i++) {
//        printf("Inserir Empresa %d\n:", i );
//
//        printf("NIF: ");
//        scanf("%d", &registos_empresas[i].NIF);
//
//        printf("Insira Nome: ");
//        scanf("%s", registos_empresas[i].Nome);
//
//        printf("Insira Tipo de Empresa: ");
//        scanf("%s", registos_empresas[i].Tipo_Empresa);
//
//        printf("Insira Ano de Fundacao: ");
//        scanf("%d", &registos_empresas[i].Ano_Fundacao);
//
//        printf("Insira Quantidade de Trabalhadores: ");
//        scanf("%d", &registos_empresas[i].Qtd_Trabalhadores);
//    }
//
//    printf("Lista de Empresas\n");
//    for (int i = 0; i < 4; i++) {
//        Mostra_Empresa(registos_empresas[i]);
//    }
//}
//
////Exercício 2 
//void exercicio2() {
//    struct Funcionario registos_funcionarios[3];
//
//    for (int i = 0; i < 3; i++) {
//        printf("Inserir Funcionario %d\n:", i + 1);
//
//        printf("ID: ");
//        scanf("%d", &registos_funcionarios[i].ID);
//
//        printf("Nome: ");
//        scanf("%s", registos_funcionarios[i].Nome);
//
//        printf("Cargo: ");
//        scanf("%s", registos_funcionarios[i].Cargo);
//
//        printf("Salario: ");
//        scanf("%f", &registos_funcionarios[i].Salario);
//    }
//
//    printf("Lista de Funcionarios\n");
//    for (int i = 0; i < 3; i++) {
//        Mostra_Funcionario(registos_funcionarios[i]);
//    }
//}
//
////Programa Principal 
//int main() {
//    int opcao;
//
//    do {
//        printf("MENU\n");
//        printf("1 - Exercicio1(Empresas)\n");
//        printf("2 - Exercicio2(Funcionarios)\n");
//        printf("0 - Sair\n");
//        printf("Opcao: ");
//        scanf("%d", &opcao);
//
//        switch (opcao) {
//        case 1: exercicio1(); break;
//        case 2: exercicio2(); break;
//        case 0: printf("A sair...\n"); break;
//        default: printf("Opcao invalida!\n");
//        }
//    } while (opcao != 0);
//
//    return 0;
//}