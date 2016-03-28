#include<stdio.h>
#include<windows.h>

int inflador (int sp, int pr, int tiempo){
    int res;
    if ((tiempo<=0) || (sp==pr)){
          res=0;          
    }else if(sp<pr){
          res=-1;
    }else if(sp>pr){
          res=1;
    }
    
    return res;
}
          
           
int main (){
    int setPoint, presion, tiempo;
    do{
        printf("Ingrese set point:\n");
        scanf ("\n %d", &setPoint);
    }while(setPoint<0);
    do{
        printf("\nIngrese presion actual:\n");
        scanf ("\n %d", &presion);        
    }while(presion<0);
    do{    
        printf("\nIngrese tiempo:\n");
        scanf ("\n %d", &tiempo);
    }while(tiempo<0);

    do{
		Sleep(1000);
		tiempo=tiempo-1;
		int opcion=inflador(setPoint, presion, tiempo);


        switch(opcion){
                   case 0:
                        printf("DETIENE  p:%d t:%d           \r",presion, tiempo);
                        goto salir;
                   break;
                   case -1:
                        printf(" DESINFLAR  p:%d t:%d         \r",presion, tiempo);
                        presion=presion-1;
                   break;
                   case 1:
                        printf(" INFLAR  p:%d t:%d             \r",presion, tiempo);
                        presion=presion+1;
                   break;                   
    	}
    }while(1);
    
    salir:

    getch ();
}
