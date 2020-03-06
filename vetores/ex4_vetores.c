#include <stdio.h>
#include <stdlib.h>
#define TAM 40

int main(){
	//declarando um vetor
	int i, j, aux ; 
	int v[TAM];
	//preenchendo o vetor
	for ( i = 0; i < TAM; i++){
	printf("Digite 40 valores:");
		scanf ("%d", &v[i]);
	} 
	//ordenando em ordem crescente
	for ( i=0; i < TAM; i++){
			for (j=i+1; j < TAM; j++){
				if (v[i] > v[j] ){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
				
			}
			}
		}
		for(i=0;i<TAM;i++) { 	
printf ("Vetor em ordem crescente: %d \n", v[i]);
}

}
