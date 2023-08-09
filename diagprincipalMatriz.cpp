#include<stdio.h>

int main(){
	int tam = 5;
	int i, j, mat[5][5];
	
	for(i=0; i<tam; i++) {
		for(j = 0; j<tam; j++){
			printf ("\n Informe o valor para mat [%d%d]", i, j);
			scanf ("%d", &mat [i][j]);
		}
	}
	
	printf ("\nDiagonal Principal");
	for (i = 0; i<5; i++){
		printf("\n%d", mat[i][i]);
	}
	
	printf ("\nDiagonal Secundaria");
	for (i = 0; i<5; i++){
		printf("\n%d", mat[i][4-i]);
	}
	
	return 0;
}
