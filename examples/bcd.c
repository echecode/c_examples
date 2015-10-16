#include<stdio.h>					
/*
* Transforma [dos digitos] de decimal a bcd 
*/
unsigned char dec2bcd(unsigned char dec){ 
    unsigned char retval; 
    retval = dec / 10;                  //toma las decenas, parte entera de dividir por 10 .
    retval<<= 4;                        //las dispone en el digito hex de la izquierda 4 bits
    retval+= dec % 10;                  //suma las unidades, el resto de la división.
    return retval; 
} 

/*
* Transforma [dos digitos] de bcd a decimal
*/
unsigned char bcd2dec(unsigned char bcd){ 
    unsigned char unidad, decena;
    unidad = bcd & 0x0F;                //Toma como cifra unidad a los 4 bits de la derecha
    decena = ((bcd & 0xF0) >> 4)*10;    //Toma como decena (x 10) los 4 bits a la izquierda
    return ( decena + unidad );         //Sumando compone el número decimal
} 

/*
*  Main test 
*/
int main(void){	
    printf("\r\n decimal a bcd. Ejemplo 42 = %X", dec2bcd(42));
    printf("\r\n bcd a decimal. Ejemplo 0x42 = %d", bcd2dec(0x42));
    return 0;
}
