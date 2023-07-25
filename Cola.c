#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int TAMANIOCOLA = 10;
	
	int cola[TAMANIOCOLA];
    int indiceInicial = 0;
    int indiceFinal = 0;
    int seleccionUsuario;
    int datoIngresado;
    int i;
    
    while(seleccionUsuario != 5){
    	printf("Seleccione una opcion: \n");
        printf("1. Ingresa un dato.\n");
        printf("2. Eliminar el primer dato ingresado.\n");
        printf("3. Eliminar todos los datos.\n");
        printf("4. Ver los datos guardados\n");
        printf("5. Salir.\n");
        scanf("%i", &seleccionUsuario);
        
        system("cls");
        
        switch(seleccionUsuario){
        	
            case 1:
                if(indiceFinal == TAMANIOCOLA){
                    printf("La cola esta llena.\n");
                    printf("Los datos guardados son:\n");
    				for(i = indiceInicial; i < indiceFinal; i++){
        				printf("%i\n", cola[i]);
        			}
                }else{
                    printf("Ingrese un numero: ");
                    scanf("%i", &datoIngresado);
                    cola[indiceFinal] = datoIngresado;
                    indiceFinal++;
                    printf("%i ", indiceInicial);
                    printf("%i", indiceFinal);
                }
                break;
                
            case 2:
                if(indiceInicial == indiceFinal){
                    printf("La cola esta vacia\n");
                }else{
                	printf("Dato eliminado.\n");
                    for(i = indiceInicial; i < indiceFinal - 1; i++){
                    	cola[i] = cola[i+1];
        				printf("%i\n", cola[i]);
    				}
    				indiceFinal--;
                }
                break;
                
            case 3:
            	printf("Reiniciando...\n");
                indiceInicial = 0;
                indiceFinal = 0;
        	
        	case 4:
        		if(indiceInicial == indiceFinal){
                    printf("La cola esta vacia\n");
                }else{
    				printf("Los datos guardados son:\n");
    				for(i = indiceInicial; i < indiceFinal; i++){
        				printf("%i\n", cola[i]);
    				}
    			}
    			break;
                
            case 5:
            	break;
                
            default:
                printf("Opcion invalida\n");
        }
        
    }
    
    /*printf("Reiniciando...");
    for(i = indiceFinal; i == indiceDeReinicio; i--){
    	cola[i] = cola[i--];
	}*/
	
	/*printf("Los datos guardados son:\n");
    	for(i = indiceInicial; i < indiceFinal; i++){
        	printf("%i\n", cola[i]);
    	}*/

    return 0;
}
