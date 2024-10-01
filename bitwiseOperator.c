#include<stdio.h>
int main(){
	short int a;
	int b;
	unsigned int c;
	unsigned short int d;
	printf("size of the variable [short int]---> %ld bytes\n",sizeof(a));
	printf("Size of the Variable [int]---> %ld bytes\n",sizeof(b));
	printf("Size of the Variable [unsigned int]---> %ld bytes\n",sizeof(c));
	printf("Size of the Variable [unsigned short int]---> %ld bytes\n",sizeof(d));

	//printf("Enter the two integer numbers:");
	//scanf("%d%d",&a,&b);
	//printf("Entered numbers are %d %d\n",a,b);
	//printf("1- bitwise-OR (|) operator [a|b] : %d\n",a|b);
	//printf("2- bitwise-AND (&) operator [a & b]: %d\n ",a&b);
	//
	////printf("3- bitwise-compl (~) operator [~a,~b]: %d%d\n",~a,~b);

}
