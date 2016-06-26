#include <stdio.h>
#include <time.h>

int main() {
	
	int a,b,nuevofib,sum;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	sum = 0;
	a = 1;
	b = 2 ;
	while (	b <= 4000000) {
		if ( b % 2 == 0 ) {
			sum = sum + b;
		}
		nuevofib = a + b;
		a = b;
		b = nuevofib;		
	}
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	printf("La suma de los valores de fibonacci pares es:%i",sum);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	return 0;
}
