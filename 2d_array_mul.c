#include<stdio.h>

int main(){
	int array1[2][2];
	int array2[2][2];
	int value;
	for(int i=0;i<2;i++ ){
		for(int j=0;j<2;j++){
			printf("enter the value of array[%d][%d]: ",i,j);
			scanf("%d",&value);
			array1[i][j]=value;
		}

}

}
