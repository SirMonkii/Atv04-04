#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, num, numA, numS;
	
	for(contador = 1; contador <= 5; contador++){
		
		printf("Digite um n�mero: ");
		scanf("%d", &num);
	
		numA = num - 1;
		
		numS = num + 1;
		
		printf("\nAntecessor: %d | Seu n�mero: %d | Sucessor: %d\n\n", numA, num, numS);
	}
	
	return 0;
}
