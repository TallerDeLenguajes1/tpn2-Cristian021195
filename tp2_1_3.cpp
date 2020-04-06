#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 999
#define M 100
#define CM 15
#define CN 5

int main(){
srand(time(NULL));
int numerosPares;
int columnas;
columnas = rand () % (CM-CN+1) + CN;
int matriz[CM][columnas];
int matrizPares[CM];


for(int f = 0; f < CM; f++){
	for(int c = 0;c < columnas; c++){
		matriz[f][c] = rand () % (N-M+1) + M;
	}
	//numero = rand () % (N-M+1) + M;
}
for(int f = 0; f < CM; f++){
	for(int c = 0;c < columnas; c++){
		printf("(%d)", matriz[f][c]);
		
		if(matriz[f][c] % 2 == 0){
			numerosPares++;
		}
	}matrizPares[f]=numerosPares;
	printf("\n");
	
	numerosPares = 0;
	//numero = rand () % (N-M+1) + M;
}
printf("\nCOLUMNAS: %d", columnas);
for(int f = 0; f < CM; f++){
	printf("\nPARES F%d: %d", f, matrizPares[f]);
}printf("\nPRIMERA MATRIZ: %d",matrizPares[0]);
return 0;
}
