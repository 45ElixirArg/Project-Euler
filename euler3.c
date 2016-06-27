#include <stdio.h>
#include <time.h>

int esPrimo(long num);

int main() {
	
	long primo,constante;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	
	constante = 600851475143;
	primo = 2;	
	while (primo <= constante){
		if (constante % primo == 0){
			constante = constante / primo;			
		}
		else{
			primo = primo + 1;			
		}
	}
		
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	printf("\nEl mayor factor primo es:%i",primo);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	return 0;
}


