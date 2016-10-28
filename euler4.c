#include <stdio.h>
#include <time.h>

long darVuelta(long num);
long mayorPalindromo();

int main() {
	long palindromo;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	
	palindromo = mayorPalindromo();	
	
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	
	printf("\n El mayor palindromo de multiplicacion de numeros de 3 digitos es:%ld",palindromo);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	
	return 0;
}



long darVuelta(long num){
	long aux;
	int d;
	
	aux = 0;
	while(num>0){
		d = num % 10;
		aux = aux*10 + d;
		num = num/10;
	}
	return aux;
}

long mayorPalindromo(){
	int i,j;
	long palindromo,aux;
	
	palindromo = 0;
	for(i=100;i<=999;i++){
		for(j=i+1;j<=999;j++){
			aux = i * j;
			if (aux == darVuelta(aux)){
				if(aux>palindromo)
					palindromo = aux;
			}				
		}
	}
	
	return palindromo;
}
	
