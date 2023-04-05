#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, num, numA, numS;
	
	contador = 1;
	
	do{
		
		printf("Digite um número: ");
		scanf("%d", &num);
	
		numA = num - 1;
		
		numS = num + 1;
		
		printf("\nAntecessor: %d | Seu número: %d | Sucessor: %d\n\n", numA, num, numS);
		
		contador = contador + 1;
		
	}while(contador <= 5);
	
	return 0;
}
