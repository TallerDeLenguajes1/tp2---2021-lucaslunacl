#include <stdio.h>
#include <stdlib.h>
const int filas = 15;

int main(){
    int columnas = rand() % 5 + 15;
    int num = rand() %(999 +1-100) + 100;
    int ** matriz = (int**) malloc(sizeof(int) * filas);
    for (int i = i; i < filas; i++)
    {
        matriz[i] = (int *) malloc(sizeof(int) * columnas); // apunto al puntero simple con el puntero doble
        for (int j = 0; j < columnas; j++){
            matriz [i][j] = j;
            printf("%4d", matriz[i][columnas]);

        }
        printf("\n");
        
    }
    free(matriz);
    
    return 0;
}