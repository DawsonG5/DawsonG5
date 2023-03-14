#include "biblioteca.h"
#include <stdio.h>

int main(){
	
	int num1, num2, maximo;
	
	printf("Entre com dois numeros para comparar: ");
	scanf("%d %d", &num1, &num2);
	
	maximo = max(num1, num2);
	
	printf("O maior e o %d\n", maximo);
}
