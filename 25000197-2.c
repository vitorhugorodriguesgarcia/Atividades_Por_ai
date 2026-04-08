#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
		
	int **matri , num , lin , colu, i, j, k = 0;
	int *vet, tmp;
	do{
		
		printf("Digite a quantidade de linhas(entre 3 e 6)");
		scanf("%d",&lin);
	}while(lin < 3 || lin > 6);
	
	do{
		printf("Digite a quantidade de colunas(entre 4 e 8)");
		scanf("%d",&colu);
	}while(colu < 4 || colu > 8);
	

	matri = malloc(lin * sizeof(int));
	for(i = 0; i < lin; i++){
		matri[i] = malloc (colu * sizeof(int));
	}
	
	for( i = 0; i < lin; i++){
		for(j= 0; j < colu; j++){
			matri[i][j] = rand()%91 + 10;
		}
	}
		
	for( i = 0; i < lin; i++){
		for(j= 0; j < colu; j++){
			printf("%4d", matri[i][j]);
		}
		printf("\n ");
	}
	printf("\n \n ");
	
	vet = malloc(lin * colu * sizeof(int));
	
	printf("Vetor ordenado: \n");
	// preenche
	for(i = 0; i < lin; i++){
		for(j = 0; j < colu; j++){
				vet[k] = matri[i][j];
				k++;
		}
	}	
	
	for( i = 0; i < lin - 1; i++){
		for(j = 0; j < colu + 1; j++){
			tmp= vet[k];
			vet[k]= vet[j];
			vet[j]= tmp;
		}
	}
	
	for(k = 0; k < lin * colu; k++){
		printf(" %d ", vet[k]);
		
		
	}	

}
