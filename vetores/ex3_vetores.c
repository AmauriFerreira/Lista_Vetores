#include <stdio.h>

int main (int argc, char const * argv[]){
	//declarando o vetor
	int v[] = {15, 4, 3, 2, 1, 5, 7, 5, 4, 0};
	int i, j, moda, modaAux, freq, freqAux = 0;
	moda = v[0];
	for (i = 1; i < 10; ++i){
		freq = v[i] == moda ? freq +1 : freq;
	}
	
	for (i = 1; i < 10; i++){
	modaAux = v[i];
	freqAux = 0;
	for ( j = 0; j<10; j++){
		if (v[j] == modaAux)
			++freqAux;
	}
	if (freqAux >= freq){
		moda = modaAux;
		freq = freqAux;
	}	
}

printf ("A moda e %d, com frequencia: %d\n", moda, freq);

	return 0;
}
