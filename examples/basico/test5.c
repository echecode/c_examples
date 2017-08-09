//Ejercicio N 5: Resolver el mismo ejercicio que el anterior pero ingresar valores por teclado.
#include<stdio.h>
int suma (int a, int b){
	return a+b;
}
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
	printf("Ingrese el Primer Valor: ");
	scanf("%d",&val1);
	if (val1<0){
		printf("Error el valor debe ser positivo");
	}else{		
		printf("Ingrese el Segundo Valor: ");
		scanf("%d",&val2);
		res=multiplicar(val1,val2);
		printf ("La multiplicacion de %d con %d resulta %d\n",val1,val2,res);
	}	
	getchar();
} 


