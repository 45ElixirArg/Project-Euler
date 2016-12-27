#include <stdio.h>
#include <time.h>
#include <math.h>

long sumaCuadrados();
long cuadradoSuma();

int main() {
	long sumaCua,cuaSuma;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	
	sumaCua = sumaCuadrados();
	cuaSuma = cuadradoSuma();
	
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	
	printf("\n Resultado:%ld", cuaSuma-sumaCua);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	return 0;
}

long sumaCuadrados(){
	int i;
	long acu;
	
	acu = 0;
	for(i=1;i<=100;i++){
		acu = acu + pow(i,2);
	}
	
	return acu;
	
}

long cuadradoSuma(){
	int i;
	long acu;
	
	acu = 0;
	for(i=1;i<=100;i++){
		acu = acu + i;
	}
	
	acu = pow(acu,2);
	return acu;
}
