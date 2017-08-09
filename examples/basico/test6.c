//Ejercicio 8: Experimentar con el alcance de las variables
#include<stdio.h>
#include<stdint.h>

uint8_t global=10;
uint8_t unaRepetida=2;
uint8_t otraRepetida=2;

int main(){
	
	
	uint8_t local=3;
	uint8_t unaRepetida=100;
	
	{	//bloque de codigo con su propias variables
		uint8_t otraRepetida=200;
		uint8_t invisibleAfuera=8;
	}
		
	printf("global=%d  \n",global);
	printf("local=%d  \n",local);
	printf("una repetida=%d  \n", unaRepetida);
	printf("otra repetida=%d  \n", otraRepetida);
	printf("otra repetida=%d  \n", invisibleAfuera);
	
}

