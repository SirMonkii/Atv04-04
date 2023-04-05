#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	contador = 2;
	
	do{
		
		printf("%d\n", contador);
		
		contador = contador + 2;
		
	}while(contador <= 20);
	
	return 0;
}
