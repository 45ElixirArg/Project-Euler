#include <stdio.h>
#include <time.h>

int esPrimo(long num);

int main() {
	
	long mayor,primo,constante;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	
	constante = 600851475143;
	primo = 2;
	mayor = primo;
	while (esPrimo(constante) == -1){
		if (constante % primo == 0){
			constante = constante / primo;
			if (primo > mayor) 
				mayor = primo;
		}
		else{
			primo = primo + 1;
			while ( esPrimo(primo) == -1) {
				primo = primo + 1;
			}
		}
	}
	if (constante > mayor)
		mayor = constante;
	
	
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	printf("El mayor factor primo es:%i",mayor);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	return 0;
}

int esPrimo(long num){
	int PD;
	
	PD = 2;
	while(PD <= (num / PD) && (num % PD != 0)){
		PD = PD + 1;
	}
	if (PD > (num / PD)) 
		return 1;
	else
		return -1;	
}
