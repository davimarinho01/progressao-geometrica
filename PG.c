#include <stdio.h>
#include <stdlib.h>

/*Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.G (Progressão Geométrica), armazenando esses valores em um vetor de tamanho 10.*/

int main(){
	
	int vet[10], i, R;
	
	printf("Digite o valor da razao: ");
	scanf("%d", &R);
	
	for(i=0;i<10;i++){
		vet[i] = vet[i-1]*R;
	}
	
	for(i=0;i<10;i++){
		printf("%d ",vet[i]);
	}
}