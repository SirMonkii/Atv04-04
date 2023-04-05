#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	float altura, soma;
	
	for(contador = 1; contador <= 5; contador++){
		
		printf("Digite a altura: ");
		scanf("%f", &altura);
		
		soma += altura;
		
	}
	
	soma /= 5;
	
	printf("A média das alturas é: %.2f", soma);
	
	return 0;
}
