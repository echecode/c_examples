/**
*Ejercicio Numero 3: Sumar con un bucle for
*/

#include<stdio.h>

int suma (int a, int b){
	return a+b;
}

int main(){
	int val1, res;
	int i;
	val1=5;	
	for(i=0;i<10; i++){  		
		res=suma(val1, i);	
		printf ("La suma de %d con %d resulta %d\n", val1, i, res);
	}
	getchar();
} 


