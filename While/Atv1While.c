#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	contador = 1;
	
	while(contador <= 25){
		
		printf("%d\n", contador);
		
		contador = contador + 1;
		
	}
	
	return 0;
}
