#include <stdio.h>
#include <time.h>

int main() {
	
	int i,num,bandera;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	
	num = 1;
	bandera = 0;
	while (bandera == 0){
		i = 1;
		while (i<=20 && num % i == 0) {
			i++;
		}
		if (i>20) {
			bandera = 1;
		}else{
			num++;
		}			
	}
	
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	
	printf("\n El numero es:%d", num);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	
	return 0;
}

