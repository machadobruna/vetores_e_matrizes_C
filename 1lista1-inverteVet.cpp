#include<stdio.h>

int main(){
	int vet[16], i, temp;
	
	
	
	for (i =0; i<=16; i++){
		printf("Digite os valores do vetor: ");
		scanf("%d", &vet[i]); //L� o valor digitado pelo usu�rio e armazena na posi��o i da array
	}
	
	for (i = 0; i<=15; i++){
		printf("\n%d", vet[i]);
	}
	
	for (i = 0; i<8; i++){
		temp = vet[i];
		vet[i] = vet[15-i];
		vet[15-i] = temp;
	}
	
	for (i = 0; i<=15; i++){
		printf("\n%d", vet[i]);
	}
	
}
