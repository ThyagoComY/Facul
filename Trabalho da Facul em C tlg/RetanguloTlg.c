#include <stdio.h>
int main (){

    float base, altura, area;

    printf("Fale o tamanho da base do retangulo: ");
    scanf("%f", &base);
    printf("Agora diga o tamanho da altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("\n\nA area to retangulo sera de: %.2f metros quadrados\n\n", area);

return 0;
}
