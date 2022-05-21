#include <stdio.h>

#include <stdlib.h>



int main(int argc, char *argv[])

{

int lado1, lado2, lado3;

scanf("%d %d %d", &lado1, &lado2, &lado3);

if ((lado1>=lado2+lado3) || (lado2>=lado1+lado3) || (lado3>=lado1+lado2))

{

printf("Os lados nao sao valores de um triangulo.\n");

return 0;

}

else {

if ((lado1==lado2) || (lado2==lado3))

printf("Os lados formam um triangulo equilatero.");

else

if ((lado1!=lado2) && (lado2!=lado3) && (lado3!=lado1))

printf("Os lados formam um triangulo escaleno.");

else

printf("Os lados formam um triangulo isoceles.");

}

system("PAUSE");

return 0;

}
