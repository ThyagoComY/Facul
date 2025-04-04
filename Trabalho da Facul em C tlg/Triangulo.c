#include <stdio.h>
int main() {
    float base, altura, area;

    printf("\nQual a base do triangulo? ");
    scanf("%f", &base);

    printf("\nE qual a altura do triangulo?");
    scanf("%f", &altura);

    area = (altura*base)/2;

    printf("\n\nA area total do triangulo sera de: %.2f metros quadrados\n\n", area);

    return 0;
}
