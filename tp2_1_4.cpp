#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 999
#define M 100
#define CM 15
#define CN 5

struct PC{
	int ghz;
	int anio;
	int nucleos;
	char *tipos_p;
};

void cargarComputadoras(struct PC *computadoras_p, int cant, char *tipos_p){
	for(int i = 0; i < cant; i++){
		printf("\nIngrese la cantidad de GHZ, entre 1 y 3: ");scanf("%d", &computadoras_p->ghz);fflush(stdin);
		printf("\nIngrese el anio de fabricacion, entre 2000 y 2017: ");scanf("%d", &computadoras_p->anio);fflush(stdin);
		printf("\nIngrese la cantidad de nucleos, entre 1 y 4: ");scanf("%d", &computadoras_p->nucleos);fflush(stdin);
		computadoras_p++;
		//printf("\nTipo CPU: Intel, AMD, Celeron, Athlon, Core, Pentium");scanf("%d", tipos_p);fflush(stdin);
	}
fflush(stdin);
}
void mostrarComputadoras(struct PC *computadoras_p, int cant){
	for(int i = 0; i < cant; i++){
		printf("\n\nCOMPU Nro: %d", i+1);
		printf("\nGHZ: %d", computadoras_p->ghz);
		printf("\nANIO: %d", computadoras_p->anio);
		printf("\nNUCLEOS: %d", computadoras_p->nucleos);
		computadoras_p++;
		//printf("\nTIPO DE PROCESADOR: %s", )
	}printf("\n-----FIN LISTADO DE TODAS LAS PC------");
}
int masVieja(struct PC *computadoras_p, int cant){
	int vieja;
	vieja = computadoras_p->anio;
	for(int i = 0; i < cant; i++){		
		if(vieja > computadoras_p->anio){
			vieja = computadoras_p->anio;
		}
		computadoras_p++;//printf("\nTIPO DE PROCESADOR: %s", )
	}
	return vieja;
}

void mostrarAntigua(struct PC *computadoras_p, int cant, int vieja){
	for(int i = 0; i < cant; i++){
		
		if(vieja == computadoras_p->anio){
		printf("\n\nCOMPU MAS VIEJA: %d", i+1);
		printf("\nGHZ: %d", computadoras_p->ghz);
		printf("\nANIO: %d", computadoras_p->anio);
		printf("\nNUCLEOS: %d", computadoras_p->nucleos);
		}
		computadoras_p++;
		//printf("\nTIPO DE PROCESADOR: %s", )
	}
}
int masVelocidad(struct PC *computadoras_p, int cant){
	int velocidad;
	velocidad = computadoras_p->ghz;
	for(int i = 0; i < cant; i++){
		if(velocidad < computadoras_p->ghz){
			velocidad = computadoras_p->ghz;
		}
		computadoras_p++;//printf("\nTIPO DE PROCESADOR: %s", )
	}
	return velocidad;
}

void mostrarVelocidad(struct PC *computadoras_p, int cant, int velocidad){
	for(int i = 0; i < cant; i++){
		
		if(velocidad == computadoras_p->ghz){
		printf("\n\nMAS GHZ: %d", i+1);
		printf("\nGHZ: %d", computadoras_p->ghz);
		printf("\nANIO: %d", computadoras_p->anio);
		printf("\nNUCLEOS: %d", computadoras_p->nucleos);
		}
		computadoras_p++;
		//printf("\nTIPO DE PROCESADOR: %s", )
	}
}
int main(){
	char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
	char *tipos_p;
	tipos_p = &tipos[0][0];
	int cant;
	printf("\nIngrese la cantidad de Computadoras a registrar: ");
	scanf("%d", &cant);
	fflush(stdin);
	
	
	struct PC computadoras[cant];
	struct PC *computadoras_p;
	computadoras_p = computadoras;
	
	cargarComputadoras(computadoras_p, cant, tipos_p);
	mostrarComputadoras(computadoras_p, cant);
	
	int vieja = masVieja(computadoras_p, cant);
	//printf("\nMAS VIEJA: %d", vieja);
	mostrarAntigua(computadoras_p, cant, vieja);
	
	int velocidad = masVelocidad(computadoras_p, cant);
	//printf("\nMAS VELOZ: %d", velocidad);
	mostrarVelocidad(computadoras_p, cant, velocidad);
	
	
return 0;
}
