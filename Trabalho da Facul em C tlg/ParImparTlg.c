#include <stdio.h>
int main (){

int num;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

if (num % 2 == 0) { //bati um pouco a cabe�a pra saber como funciona o m�dulo, mas tendi
    printf("\n\nO numero digitado e par\n\n");
}
else printf("\n\nO numero digitado e impar\n\n");

return 0;
}
