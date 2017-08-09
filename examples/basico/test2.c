/**
* Ejercicio 2: Realizar un programa que sume dos numeros enteros
*/
#include<stdio.h>
int suma (int a, int b){
	return a+b;
}

int main(){
	int val1, val2,res;
	val1=5;
	val2=3;
	res=suma(val1,val2);
	printf("La suma de %d con %d resulta %d",val1,val2,res);
	getchar();
}

