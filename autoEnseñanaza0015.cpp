
#include <stdio.h>

class myclass{
int a;
public: 
void set_a(int num);
int get_a();

};
void myclass::set_a(int num){
	a=num;
}
int myclass::get_a(){
return a;
}


main(){
	myclass ob1,ob2;
	ob1.set_a(10);
	ob2.set_a(99);	
	printf("objeto1: %d \r\n",ob1.get_a());
	printf("objeto2:%d \r\n",ob2.get_a());
//getchar();
return 0;
}




