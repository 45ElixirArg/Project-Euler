#include <stdio.h>
#include <time.h>
#include <math.h>

int primo(long num);

int main() {
	int i;
	long num;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	
	i = 6;
	num = 13;
	while(i != 10001){
		num++;
		if(primo(num) == 1)
			i++;
	}
	
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	
	printf("\n El 10001 primo es:%ld", num);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	return 0;
}

int primo(long num){
	
	long pd;
	
	pd = 2;
	
	while(pd<= num/2 && num%pd != 0){
		pd++;
	}
	if (pd>num/2)
		return 1;
	else
		return -1;
}
