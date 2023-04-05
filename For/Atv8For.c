#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, soma;
	
	soma = 0;
	
	for(contador = 1; contador <= 10; contador++){
		
		soma += contador;
		
		printf("%d\n\n", soma);
		
	}
	
	return 0;
}
