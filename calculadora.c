#include<stdio.h>
#include<stdlib.h>

int main() {
    char operacao;
    int numero1, numero2, resultado;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        printf("Digite a operacao que voce deseja fazer (+, -, *, /): ");
        scanf(" %c", &operacao);
        
        printf("Digite o primeiro numero:");
        scanf("%d", &numero1);
        
        printf("Digite o proximo numero:");
        scanf("%d", &numero2);
        
        if (operacao == '+') {
            resultado = numero1 + numero2;
            printf("Resultado: %d\n", resultado);
        } else if (operacao == '-') {
            resultado = numero1 - numero2;
            printf("Resultado: %d\n", resultado);
        } else if (operacao == '*') {
            resultado = numero1 * numero2;
            printf("Resultado: %d\n", resultado);
        } else if (operacao == '/') {
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %d\n", resultado);
            } else {
                printf("Erro: divisão inválida.\n");
            }
        } else {
            printf("Operação inválida.\n");
        }
        
        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &continuar);
    }
    
    return 0;
}
