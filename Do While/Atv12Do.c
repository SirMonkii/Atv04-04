#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador, apr, rep, exa;
	
	float n1, n2, media;
	
	contador = 1;
	
	apr = 0;
	
	rep = 0;
	
	exa = 0;
	
	do{
		
		printf("Insira a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Insira a segunda nota: ");
		scanf("%f", &n2);
		
		media = (n1 + n2) / 2;
		
		if(media >= 5){
			
			apr += 1;
			
		}
		else{
			
			if(media < 3){
				
				rep += 1;
				
			}
			else{
				
				exa += 1;
				
			}
		}
		
		contador = contador + 1;
		
	}while(contador <= 60);
	
	printf("\nAlunos aprovados: %d\nAlunos reprovados: %d\nExame: %d", apr, rep, exa);
			
	return 0;
}
