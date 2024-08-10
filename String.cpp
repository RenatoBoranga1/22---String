#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void contager();

void compute(int*, int);

int main(int argc, char *argv[]) {
	contager();
	return 0;
    }


void contager(){
	int K, i;
	scanf("%d", &K);
	int IN[K];
	for(i=0; i<K; i++){
		scanf("%d", &IN[i]);
	}
	compute(IN, K);
	
    }


void compute(int* IN, int tam){
	char buffer[101];
	int algorismos[10];
	int i, j, aux;
	for (i=0; i<10; i++){
		algorismos[i]=0;
	}
	for (i=0; i<tam; i++){
		snprintf(buffer, 20, "%d", IN[i]);
		for(j=0; buffer[j]!='\0'; j++){
			aux = (int) buffer[j];
			algorismos[aux-48]++;
	}
		
	}
	
	for(i=0; i<10; i++){
		printf("%d - %d\n", i, algorismos[i]);
	}
	
    }
