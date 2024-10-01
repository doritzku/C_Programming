#include<stdio.h>

int main(){
	int array2d[2][2];  //declaration of 2d array;
	int value1,value2;
	// Repeat code
	//array2d[0][0]=0;
	//array2d[0][1]=1;
	//array2d[1][0]=2;
	//array2d[1][1]=3;
	for(int a=0;a<2;a++){
		scanf("%d%d",&value1,&value2);
		array2d[a][0]=value1;
		array2d[a][1]=value2;
		.
		.
		array2d[a][10000]=value10000;
	}
	printf("Colum1   column2\n");
	for (int i=0;i<2;i++){
		
		printf("%d\t\t%d\n",array2d[i][0],array2d[i][1]);
	
	}
	//printf("%d\n",array2d[0][0]);


return 0;
}
