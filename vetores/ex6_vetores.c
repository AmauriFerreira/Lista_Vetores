#include <stdio.h>

int main() {

    int i=0, j=0, a=0, b=0;
    int v[10] = {15, 8, 15, 6, 55, 4, 3, 2, 1, 0};
    int x[10];
    
    
    for(i=0; i<10; i++){
    	a = v[i];
    	b = v[i+1];
    	if(a != b){
    		x[i] = v[i];
		}
	}
	
	int cont=0;
	for(cont=0; cont<10; cont++){
		printf("\nVetor v =%d e Vetor x = %d", v[cont], x[cont]);
	}

    return 0;
}
