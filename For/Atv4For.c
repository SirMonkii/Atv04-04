#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	for(contador = 500; contador >= 1; contador--){
		
		printf("%d\n", contador);
		
	}
	
	return 0;
}
