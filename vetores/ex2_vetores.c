#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
	//declarando um vetor
	int i, j, maior =0;
	int v[TAM];
	//preenchendo o vetor
	for ( i = 0; i < TAM; i++){
	printf("Digite 10 valores:");
		scanf ("%d", &v[i]);
	}
	//exibindo o maior elemento
		for (i=0; i < TAM; i++){
			if (v[i]>maior)
				maior=v[i];
		}
		printf ("O maior elemento e: %d", maior);
		//printf ("%d", v[i]);
}
