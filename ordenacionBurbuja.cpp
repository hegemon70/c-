#include <stdio.h>

/**/
int main(){
 
/*printf ("Dame el : \r\n");
    scanf("%f",&precio);
    fflush(stdin);*/
    bool debug=false;
    printf("ordenamos este  vector \r\n");
    int v[]={26,126,31,2,56,78,99,4,8};
	int nbucle=0;
	/*mostramos el vector*/
		printf("%3d",v[0]);
		for(int i=1;i<9;i++){
			printf(",%3d",v[i]);
		}
		printf(" \r\n");
		/*fin mostrar vector*/
  /*algoritmo ordenacion burbuja*/ 
  	int len= sizeof(v) /sizeof(v[0]);
	bool ordenado=false;
	int aux=0;
	
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
						aux=v[i];
						v[i]=v[i-1];
						v[i-1]=aux;
					}
			}
		}
		if(debug){
			if(!ordenado){
			
				/*mostramos el vector*/
				nbucle++;
				printf("bucle num %d: ",nbucle);
				printf("%3d",v[0]);
				for(int i=1;i<len;i++){
					printf(",%3d",v[i]);
				}
				printf(" \r\n");
				/*fin mostrar vector*/
			}
		}	
	}while (!ordenado);//bucle pral	
		/*algoritmo ordenacion burbuja*/ 
		/*mostramos el vector*/
		printf("%3d",v[0]);
		for(int i=1;i<len;i++){
			printf(",%3d",v[i]);
		}
		printf(" \r\n");
		/*fin mostrar vector*/
	if(debug)printf("en %d bucles \r\n",nbucle);
	
		

  
    getchar();
    return 0;
}
