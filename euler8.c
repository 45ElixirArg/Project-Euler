#include <stdio.h>
#include <time.h>
#include <string.h>


typedef char tCadena[1050];

void armarCadena(tCadena cadena);
int toInteger(char c);

int main() {	
		
	tCadena cadena="";
	long numero,aux,mayor=0;
	int i,j,contador;
	
	clock_t begin, end;
	double time_spent;
	
	begin = clock();	
	
    armarCadena(cadena);
	for(i=0 ;i <= strlen(cadena);i++){
		contador = 1;
		numero = 1;
		j=i;
		while(contador <= 13){
			aux = toInteger(cadena[j]);
			numero = numero * aux;
			j++;
			contador++;
		}
		if (numero > mayor){
			mayor = numero;
		}		
	}
		
	end = clock();
	time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	
	printf("\n Mayor producto de 4 digitos consecutivos:%ld",mayor);
	printf("\nTiempo de ejecucion:%f", time_spent);
	
	return 0;
}

void armarCadena(tCadena cadena){
	
	FILE *archivo;
	tCadena linea;
	char *pos;
	
	archivo = fopen("euler8.txt", "r");
	
	if( archivo != NULL ){
		while (fgets(linea, sizeof(linea), archivo)) {
			if ((pos=strchr(linea,'\n')) != NULL)
				*pos = '\0';
			strcat(cadena,linea);
		}
	}
	
	
	fclose(archivo);
}

int toInteger(char c){
	int num;
	
	switch(c){
	case '0' : num = 0;
			break;
	case '1' : num = 1;
			break;
	case '2' : num = 2;
			break;
	case '3' : num = 3;
			break;
	case '4' : num = 4;
			break;
	case '5' : num = 5;
			break;
	case '6' : num = 6;
			break;
	case '7' : num = 7;
			break;
	case '8' : num = 8;
		break;
	case '9' : num = 9;
			break;
	}
	
	return num;
		
}
