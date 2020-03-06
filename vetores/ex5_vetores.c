#include <stdio.h>
#include <stdlib.h>
#define TAM 30
#include <time.h>

int main(){
	//declarando um vetor
	int i, soma = 0;
	float media = 0 ; 
	int v[TAM];
	//preenchendo o vetor
	for ( i = 0; i < TAM; i++){
		v[i] = rand()%100;
		soma = soma + v[i];
		media = soma / TAM;
	} 
		//for ( i = 0; i < TAM; i++){
			


printf ("A soma dps elementos eh: %d", soma);
printf ("\nA media eh: %f", media);

}
