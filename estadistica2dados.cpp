//ejercicio practico
/*
estadistica sobre tirada de dado


7 ->  33% de veces
8 ->  21% de veces
5 ->  19% de veces
ordenado de mayor a menor los resultados mas probables
*/

#include <stdio.h>
#include <windows.h>
#include <time.h>
#include "libreria.cpp"
#define N 1000
int main(){
	float porcent;
	bool debug=false;
	bool ordenado;
    srand(time(NULL));
 int numTiradas=N;
 float numFTiradas=N;
 int totalTirada=0;
 int old=0;
 int aux=0;
 float auxf=0;
 int nbucle=0;
 float v[11]={0,0,0,0,0,0,0,0,0,0,0};//desde 0 a 10 para los posibles resultados de 2 al 12
 int vc[11]={2,3,4,5,6,7,8,9,10,11,12};
 int dado1,dado2;
 int len;
 len=11;
 for(int i=1;i<=numTiradas;i++){
		dado1=aleatorio(1,6);
		dado2=aleatorio(1,6);
		totalTirada=dado1+dado2;
		if (debug){
			printf("la tirada es %3d  ",totalTirada);
			printf("de ese resultado habia %.f \r\n",v[totalTirada-2]);
		}
			v[totalTirada-2]++;
		}
	if (debug){
	/*mostramos el vector*/
		printf("%.f",v[0]);
		for(int i=1;i<len;i++){
			printf(",%.f",v[i]);
		}
		printf(" \r\n");
		/*fin mostrar vector*/
	}
	

		do{
			/*checkeamos si esta ordenado*/
		ordenado=true;
		for(int i=1;i<len;i++){//recorre el vector
				if(v[i-1]>v[i]){//si el anterior es mayor que el actual
					ordenado=false;
				}
		}
			/*fin checkeo*/

		if(!ordenado)
		{
			/*metodo burbuja*/
			for(int i=1;i<len;i++)
			{//recorre el vector
					if(v[i-1]>v[i])//si el anterior mayor
					{ //intercambio posicion
						auxf=v[i];
						v[i]=v[i-1];
						v[i-1]=auxf;
						/*intercambia el marcado de tirada*/
						aux=vc[i];
						vc[i]=vc[i-1];
						vc[i-1]=aux;
					}
			}
		}
		if(debug){
			if(!ordenado){

				/*mostramos el vector*/
				nbucle++;
				printf("bucle num %d: ",nbucle);
				printf("%.f",v[0]);
				for(int i=1;i<len;i++){
					printf(",%.f",v[i]);
				}
				printf(" \r\n");
				/*fin mostrar vector*/
			}
		}
	}while (!ordenado);//bucle pral
		/*algoritmo ordenacion burbuja*/
	if(debug){
		printf("%3d",vc[0]);
				for(int i=1;i<len;i++){
					printf(",%3d",vc[i]);
				}
				printf(" \r\n");
			printf("%.f",v[0]);
				for(int i=1;i<len;i++){
					printf(",%.f",v[i]);
				}
				printf(" \r\n");
			}

	for(int i=len-1;i>-1;i--){
		printf(" %3d --> %3.2f %%  \r\n",vc[i],(v[i]*100)/numFTiradas);
		}
		
getchar();
		return 0;
}
