#include <stdio.h>

int main() {

float a,b,c;

printf("Digite três números:\n");
scanf("%f %f %f", &a,&b,&c);
printf("A média dos números %.2f, %.2f, %.2f é igual a %.2f", a,b,c, (a+b+c)/3);

return 0;

}