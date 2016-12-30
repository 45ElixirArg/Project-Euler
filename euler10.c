#include <stdio.h>
#include <time.h>
#include <math.h>

int primo(long num);
int es_primo(long num);

int main() {
	
	long i,acu;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	
	acu = 0;
	for(i=2;i<=2000000;i++){
		printf("\n %ld",i);
		if(primo(i)== 1){
			acu = acu + i;
		}
	}	
	
	
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	
	printf("\n La suma de los primos es:%ld",acu);
	printf("\n Tiempo de ejecucion:%f", time_spent);
	
	return 0;
}


int primo(long num){
	
	long pd;
	
	pd = lround(sqrt(num));
	
	while(pd > 1 && num%pd != 0){
		pd--;
	}
	if (pd == 1)
		return 1;
	else
		return -1;
}

