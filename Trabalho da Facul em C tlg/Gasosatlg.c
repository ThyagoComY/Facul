#include <stdio.h>
int main() {

    float dist, cons, preco, custo;

    printf("\n\nQual a distancia da viagem? ");
    scanf("%f", &dist);

    printf("\n\nQual o consumo medio de combustivel do seu veiculo? ");
    scanf("%f", &cons);

    printf("\n\nQual o valor do combustivel? ");
    scanf("%f", &preco);

    custo = dist/cons*preco;

    printf("\n\nO custo estimavel de combustivel será de %.2f\n\n", custo);

return 0;
}
