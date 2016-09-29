
	
void dibujaMenu(){
    	system("cls");
		printf ("PROGRAMA CON MENU \r\n");
		printf ("-----------------------\r\n");
		printf ("1.- Muestra par e impar \r\n");
		printf ("2.- Muestra suma de vector \r\n");
		printf ("3.- Cual es el mayor numero del vector \r\n");
	 	printf ("4.- Cual es el menor numero del vector\r\n");
	 	printf ("5.- Rellenar el vector\r\n");
	 	printf ("6.- Mostrar el vector\r\n");
	 	printf ("7.- Juego de bono loto\r\n");
		printf ("0.- Salir de la aplicacion \r\n");
	}
int suma(int a, int b){
	return a+b;
	}

int menu(){
	int opcion=0;
	dibujaMenu();
	printf ("elige una opcion  \r\n");
	scanf("%d",&opcion);
	fflush(stdin);
	printf("la opcion elegida es %d  \r\n",opcion);
	return opcion;
	}


int aleatorio(){
		return rand()%10;
	}
int aleatorio(int min,int max){
	int alea=0;

		alea=(rand()%(max-min+1))+min;

	return alea;
}
void mostrarVector(int *v,int len){
	for(int i=0;i<len;i++){
	printf("%d ",v[i]);
		}
}

void ordenarVector(int *v, int t){
	//ordeno el vector
	int aux=0;
	for(int i=0; i>t;i++){
		for(int j=i;j>t;j++){
				if(v[i]>v[j]){
					aux=v[i];
					v[i]=v[j];
					v[j]=aux;
					}
			}
	}
}
	

