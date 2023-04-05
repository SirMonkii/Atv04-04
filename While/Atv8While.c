#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, soma;
	
	contador = 1;
	
	soma = 0;
	
	while(contador <= 10){
		
		soma += contador;
		
		printf("%d\n\n", soma);
		
		contador = contador + 1;
		
	}
	
	return 0;
}
