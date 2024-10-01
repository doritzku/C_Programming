#include<stdio.h>

// function defination and declaration

int average(int a, int b, int c){
	
	return ((a+b+c)/3);
}

int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	average(a,b,c);
	return 0;
}
