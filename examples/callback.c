#include<stdio.h>

int aplicar( int (*operacion)(int, int), int a, int b ){
	return operacion(a,b);// equivalente a (*operacion)(a,b);	
}

int suma(int a, int b){
	return a+b;
}

int producto(int a, int b){
	return a*b;
}

int main(void) {	
	int n=3, m=4;
	
	printf("\nResultado suma : %d", aplicar(suma, n, m));
	printf("\nResultado producto: %d", aplicar(producto, n, m));
	
	return 0;
}
