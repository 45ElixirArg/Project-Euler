#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main() {
	
	int lista[2000009],i,j;
	long acu;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	
	memset(lista, -1, sizeof(int)*2000000);
	lista[2] = 1;
	
	for(i=4;i<=2000000;i=i+2){
		lista[i]=0;
	}
	
	i=3;
	
	while(i<=2000000){
		if(lista[i]==-1){
			lista[i] = 1;
			for(j= i*2;j<=2000000; j = j+i){
				lista[j] = 0;
			}
		}
		i++;
	}
	
	acu = 0;
	for(i=2;i<=2000000;i++){
		if(lista[i] == 1)
			acu = acu+ i;
	}
	
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	
	printf("La suma es :%ld",acu);
	printf("\n Tiempo de ejecucion:%f", time_spent);
	
	return 0;
}

