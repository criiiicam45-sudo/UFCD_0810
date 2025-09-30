//void exercicio1() {
//    int numeros[4];
//    int i;
//
//    // Inserir 4 números no vetor
//    for (i = 0; i < 4; i++) {
//        printf("Digite o numero %d: ", i + 1);
//        scanf("%d", &numeros[i]);
//    }
//
//    // Ler e mostrar os números
//    printf("\nNumeros inseridos:\n");
//    for (i = 0; i < 4; i++) {
//        printf("Indice %d: %d\n", i, numeros[i]);
//    }
//}
//
//// Exercício 2: Contar pares e ímpares
//void exercicio2() {
//    int numeros[5];
//    int i, pares = 0, impares = 0;
//
//    // Inserir 5 números no vetor
//    for (i = 0; i < 5; i++) {
//        printf("Digite o numero %d: ", i + 1);
//        scanf("%d", &numeros[i]);
//    }
//
//    // Contar pares e ímpares
//    for (i = 0; i < 5; i++) {
//        if (numeros[i] % 2 == 0) {
//            pares++;
//        }
//        else {
//            impares++;
//        }
//    }
//
//    printf("Quantidade de numeros pares: %d\n", pares);
//    printf("Quantidade de numeros impares: %d\n", impares);
//}
//
//// Exercício 3: Procurar número no vetor
//void exercicio3() {
//    int numeros[6];
//    int i, procurado, encontrado = 0;
//
//    // Inserir 6 números no vetor
//    for (i = 0; i < 6; i++) {
//        printf("Digite o numero %d: ", i + 1);
//        scanf("%d", &numeros[i]);
//    }
//
//    // Perguntar o número a procurar
//    printf("Digite o numero que deseja procurar: ");
//    scanf("%d", &procurado);
//
//    // Procurar no vetor
//    for (i = 0; i < 6; i++) {
//        if (numeros[i] == procurado) {
//            printf("Numero %d encontrado no indice %d\n", procurado, i);
//            encontrado = 1;
//        }
//    }
//
//    if (!encontrado) {
//        printf("Numero %d nao foi encontrado no vetor.\n", procurado);
//    }
//}
//
//// Função principal
//int main() {
//    // Descomente o exercício que deseja executar
//    //exercicio1();
//    //exercicio2();
//    exercicio3();
//
//    return 0;
//}