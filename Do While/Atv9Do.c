#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	float altura, soma;
	
	contador = 1;
	
	do{
		
		printf("Digite a altura: ");
		scanf("%f", &altura);
		
		soma += altura;
		
		contador = contador + 1;
		
	}while(contador <= 5);
	
	soma /= 5;
	
	printf("A média das alturas é: %.2f", soma);
	
	return 0;
}
