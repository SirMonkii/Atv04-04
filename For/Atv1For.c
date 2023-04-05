#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	for(contador = 1; contador <= 25; contador++){
		
		printf("%d\n", contador);
		
	}
	
	return 0;
}
