#include <stdio.h>
#include <time.h>

int main() {
	
	int i,sum;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
		sum = 0;
		for(i=1;i<1000;i++){
			if (i % 3 ==0 || i % 5 ==0) {
				sum = sum+i;
			}
		}		
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	printf("La suma de los valores de fibonacci es:%i",sum);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	return 0;
}

