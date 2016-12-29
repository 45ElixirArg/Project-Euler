#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
	
	int a,b,c,bandera;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();
	
	a = 1;
	bandera = 0;
	
	while(bandera == 0 && a<= 1000){
		b = a+1;		
		while( bandera == 0 && b<= 1000){
			c = b+1;
			while( bandera == 0 && c<=1000){
				if(pow(a,2)+pow(b,2)==pow(c,2) && a+b+c == 1000){
					bandera = 1;
				}
				else
				   c++;
			}
			b++;
		}
		a++;
	}
	a = a - 1;
	b = b - 1;
	
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	
	printf("\n Los numeros son a:%d - b:%d - c:%d",a,b,c);
	printf("\n El producto abc es:%d",a*b*c);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	
	return 0;
}

