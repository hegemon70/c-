//#include <stdio.h>
#include <iostream> 

using namespace std; 
#define SIZE 10
class stack{
	char stck[SIZE];
	int tos; //Indice cabeza pila
	public:
		void init();//inicializa pila
		void push(char ch);//mete caracter en pila
		char pop();//saca caracter en pila
};

void stack::init(){
	tos=0;
}
void stack::push(char ch){
	if (tos==SIZE){
		printf("pila llena \r\n");
	}
	else{
		stck[tos]= ch;
		tos++;
	}
}

char stack::pop(){
	if(tos==0){
		printf("pila vacia \r\n");
	}else{
		tos--;
		return stck[tos];
		
	}
}
main(){
	
printf("hola mundo");
}

