#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, num, par, impar;
	
	for(contador = 1; contador <= 30; contador++){
		
		printf("Insira um n�mero: ");
		scanf("%d", &num);
		
		if(num % 2 == 0){
			
			par++;
			
		}
		else{
			
			impar++;
			
		}
		
	}
	
	printf("\nQuantidade de n�meros pares: %d\nQuantidade de n�meros �mpares: %d", par, impar);
	
	return 0;
}
