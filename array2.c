#include<stdio.h>
#include<string.h>
/*Escribir un programa que utilice el método de búsqueda binaria para
localizar un valor dentro de un vector de enteros. Para probar el programa,
consideraremos el vector: {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, en el que se buscarán
los valores 3 y 4.*/
//Autor Jesus Raso
int busqueda_binaria(int array[], int buscar1);

int main(){
	int *array = NULL;
	
	array = (int *) malloc (10 * sizeof(int));

	if(array != NULL){
		int array[10]={2,4,6,8,10,12,14,16,18,20};
		int buscar1 = 3;
		int buscar2 = 4;
	
		busqueda_binaria(array, buscar1);
		busqueda_binaria(array, buscar2);
	}else {
		printf("Error al reservar memoria\n");

	}
	free(array);
}

int busqueda_binaria(int array[], int buscar1){

	int contador1=0;
	int contador2=0;
	int min =0 , max=10;
	int i, mitad;

	while(min<=max){

		contador1++;
		mitad = (min+max)/2;
		
		if(buscar1==array[mitad]){
			
			printf("\nNúmero %d encontado en la posición %d\n",array[mitad], mitad);
			break;
		}else if(buscar1<array[mitad]){
		
			max=mitad-1;

		}else min = mitad+1;
		contador2++;


	}
	if(contador1==contador2) printf("Número %d no encontrado\n", buscar1);
	return 0;

}
