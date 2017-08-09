//
// Ejercicio N 4: Hacer un programa que realice una multiplicacion sin usar el operador "*"
//
#include<stdio.h>
int suma (int a, int b){
	return a+b;
}

//No funciona si "a" es negativo
int multiplicar(int a, int b){
	int i=0;
	int c=0;
	for(i=0; i<a;i++){	
		c=c+b;
	}
	return c;
}

int main(){
	int val1, val2,res;
	int i;
	val1=5;
	val2=3;
	res=multiplicar(val1,val2);
	printf ("La multiplicacion de %d con %d resulta %d\n",val1,val2,res);	
	getchar();
}


