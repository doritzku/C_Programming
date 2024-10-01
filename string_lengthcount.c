#include<stdio.h>

int main(){
	char variable[] = "Cprogramming\0";
	int count=0;
	printf("%s\n",variable);
	for (int i =0;i<50;i++){
		if( variable[i] != '\0'){
			count+=1;
		
		}
		else{
			break;
		}
	
	}
	printf("%d\n",count);

}
