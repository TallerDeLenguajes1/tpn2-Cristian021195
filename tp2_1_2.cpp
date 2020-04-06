#include<stdio.h>
#include<stdlib.h>
#define N 4
#define M 5

int main(){
int f=0;int c=0;
double mt[N][M];//matriz
double *puntero;
puntero = &mt[0][0];

for(f = 0;f<N; f++){
	for(c = 0;c<M; c++){
		if(f==0){
			mt[f][c] = c;
		}else if(f==1){
			mt[f][c] = c+5;
		}else if(f==2){
			mt[f][c] = c+10;
		}else if(f==3){
			mt[f][c] = c+15;
		}
	}
}

for(f = 0;f<N; f++){
	for(c = 0;c<M; c++){
		printf("(%.1lf) ", *(puntero++));
	}printf("\n");
}



return 0;
}
