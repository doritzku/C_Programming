#include<stdio.h>
#define pi 3.14
int myfunction1();  // function declaration
// float pi =3.14;


int main(){
	printf(" pi value from main function : %f\n",pi);
	//printf("Hello from main function \n");
	//pi = 312333;
	myfunction1(); // function call

return 0;
}

// function defination
int myfunction1(){
	pi =321111;
	printf("pi value from myfunction :%f",pi);
	//printf("Hello from main1 func\n");
	return 0;
}


