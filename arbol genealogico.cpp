# include <stdio.h>
# include <stdlib.h>

int main ()

{
	int num;

	do{
		
	system("cls");
	
	printf( "\n\n   Arbol Genealogico:\n\n");
    printf( "\n   1-) Bisabeulos Paternos");
    printf( "\n   2-) Bisabuelos Maternos");
    printf( "\n   3-) Abuelos Paternos");
    printf( "\n   4-) Abuelos Maternos");
    printf( "\n   5-) Padres");
    printf( "\n   6-) Hijos");
    printf( "\n   7-) Sobrinos");
    printf( "\n   8-) Salir");
   
    
	printf( "\n\n  Introduzca el numero de la opcion deseada:\n");
    scanf( "%d", &num);
    
    
    switch(num)
			{
				case 1:
					printf( "\n\n  Leocadio Fijeroa\t  Carmen Garcia\t");
					printf( "\n\n");
				
					break;
					
				case 2:
					printf( "\n\n  Salvador Alvino\t  Elena Martinez\t");
					printf( "\n\n");
					
				    break;
				    
				case 3:
					printf( "\n\n  Juan Reyes\t  Carmen Fijeroa\t");
				    printf( "\n\n");
				    
					break;
					
				case 4:
					printf( "\n\n  Raul Garcia\t  Rutila Martinez\t");
					printf( "\n\n");
				
					break;
				
				case 5:
					printf( "\n\n  Manuel Reyes\t  Teresa Garcia\t");
					printf( "\n\n");
				
					break;	
				
				case 6:
					printf( "\n\n  Anayansi Reyes\t Araceli Reyes\t  Roberto Reyes\t");
					printf( "\n\n");
				
					break;
				
				case 7:
					printf( "\n\n  Axel Sampedro\t  leonardo Sampedro\t");
					printf( "\n\n");
				
					break;	
				
				case 8:
				printf("SALIR:)");
				break;
				
					default:
					printf("\nOpcion invalida!! 'intente de nuevo'\n");
					break;				
			}
			
		system("pause");		
		}while(num!=8);
					
    
    return 0;
}
