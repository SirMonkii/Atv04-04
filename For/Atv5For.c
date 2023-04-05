#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	for(contador = 2; contador <= 20; contador = contador + 2){
		
		printf("%d\n", contador);
		
	}
	
	return 0;
}
