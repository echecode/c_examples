#include<stdio.h>
#include<windows.h>



int procesoInflador (int sp, int presionActual, int tiempo){
    int res;
    if ( (tiempo<=0) || (sp==presionActual)){ //si el tiempo termina, o set point = presion actual
          res=0;          
    }else if(sp<presionActual){
          res=-1;
    }else if(sp>presionActual){
          res=1;
    }
    return res;
}
          

           
int main (){
	
    int setPoint, presion, tiempo;
    
    do{    
        printf("\nTiempo total [segundos]\n");
        scanf ("%d", &tiempo);
    }while(tiempo<=0);//si el valor no es permitido, repite ingreso

    do{
        printf("\nSet point\n");
        scanf ("%d", &setPoint);
    }while(setPoint<0);//si el valor no es permitido, repite ingreso
    
    do{
        printf("\nPresion actual\n",162);
        scanf ("%d", &presion);        
    }while(presion<0);//si el valor no es permitido, repite ingreso
    
    printf("\n\n");
    
    do{
		Sleep(1000);	//espera 1000ms = 1 s
		
		tiempo--;	//resta 1 a la variable tiempo
		
		int accion;
		
		accion = procesoInflador(setPoint, presion, tiempo);

		//Muestra proceso
        	switch(accion){
        		   
                   case 0:                   		
                        printf("=DETIENE  p:%d t:%d              \r",presion, tiempo);
                        goto salir;
                   break;
                   case -1:
                        printf("-DESINFLA  p:%d t:%d            \r",presion, tiempo);
                        presion--;
                   break;
                   case 1:
                        printf("+INFLA  p:%d t:%d               \r",presion, tiempo);
                        presion++;
                   break;                   
                   default:
                   		printf("Error");
                   		goto salir;
                   break;
    		}
    	
    }while(1);
    
    salir:

    getchar();
}
