#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, num, numA, numS;
	
	contador = 1;
	
	do{
		
		printf("Digite um n�mero: ");
		scanf("%d", &num);
	
		numA = num - 1;
		
		numS = num + 1;
		
		printf("\nAntecessor: %d | Seu n�mero: %d | Sucessor: %d\n\n", numA, num, numS);
		
		contador = contador + 1;
		
	}while(contador <= 5);
	
	return 0;
}
