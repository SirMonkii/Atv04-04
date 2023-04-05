#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	float n1, n2, media, mediatotal;
	
	contador = 1;
	
	do{
		
		printf("Digite sua primeira nota: ");
		scanf("%f", &n1);
		
		printf("\nDigite sua segunda nota: ");
		scanf("%f", &n2);
		
		media = (n1+n2)/2;
		
		mediatotal = mediatotal + media;
		
		printf("\nA sua média foi de: %.2f\n\n", media);
		
		contador = contador + 1;
		
	}while(contador <= 10);
	
	mediatotal = mediatotal/10;
	
	printf("\n\nA média total foi de: %.2f\n", mediatotal);
	
	
	return 0;
}
