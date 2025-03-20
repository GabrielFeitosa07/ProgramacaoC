#include <stdio.h>

int main() {

    char operator;
    double num1, num2;
    printf("Selecione uma operação (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Digite dois Números: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Erro! Divisão por zero não é permitida.\n");
            break;
        default:
            printf("Erro! Operação inválida.\n");
    }

    return 0;
   
}