#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, nota1, nota2, media;
	
	contador = 1;
	
	do{
		
		printf("Digite a primeira nota: ");
		scanf("%d", &nota1);
		
		printf("\n\nDigite a segunda nota: ");
		scanf("%d", &nota2);
		
		media = (nota1 + nota2) / 2;
		
		printf("\n\nA média das duas notas é: %d\n\n\n\n", media);
		
		contador = contador + 1;
		
	}while(contador <= 10);
	
	return 0;
}
