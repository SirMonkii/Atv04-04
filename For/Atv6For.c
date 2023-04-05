#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, num, numA, numS;
	
	for(contador = 1; contador <= 5; contador++){
		
		printf("Digite um número: ");
		scanf("%d", &num);
	
		numA = num - 1;
		
		numS = num + 1;
		
		printf("\nAntecessor: %d | Seu número: %d | Sucessor: %d\n\n", numA, num, numS);
	}
	
	return 0;
}
