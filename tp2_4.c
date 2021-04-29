#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
typedef struct PC
{
    int GHz ; 
	int anio ;
	int cantNucleos;
	char tipoProcesador;
}compu;

int main(){
	srand(time(NULL));
	//MIN + (rand() % MAX - MIN + 1);
	compu carac;
	for (int i = 0; i < 5; i++)
	{
		carac.GHz = 1 + (rand()%(3-1+1));
		carac.anio = 2000 +(rand()%(2017-2000+1));
		carac.cantNucleos = 1+(rand()%(4-1+1));

		printf("GHZ = %d - Anio = %d - Nucleos = %d - Procesador = %s\n", carac.GHz, carac.anio, carac.cantNucleos, carac.tipoProcesador);
	}
	
	
	getchar();
	return 0;
}
