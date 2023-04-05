#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, num, par, impar;
	
	contador = 1;
	
	do{
		
		printf("Insira um número: ");
		scanf("%d", &num);
		
		if(num % 2 == 0){
			
			par++;
			
		}
		else{
			
			impar++;
			
		}
		
		contador = contador + 1;
		
	}while(contador <= 30);
	
	printf("\nQuantidade de números pares: %d\nQuantidade de números ímpares: %d", par, impar);
	
	return 0;
}
