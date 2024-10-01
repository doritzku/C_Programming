#include<stdio.h>
#define MAX 100
int count=0;


int stringlength(char str[]){
	int count=0;
	for(int i=0;i<=MAX;i++){
		if(str[i] != '\0'){
			count+=1;
		
		}
		else{
			break;
		}
	
	}

	return count;
	
}

void reverse(char str[],int count){
	printf("this is a reverse function");
	printf("%d\n",count);
	for (int i=count;i>=0;i--){
		printf("%c",str[i]);
		
	}

	return;
}
void removevowels(char str[],int count){
	for (int i=0;i<=count;i++){

		if (str[i] == 'a' || str[i] == 'i' || str[i] =='e' || str[i] =='u' || str[i] == 'o' ) {
			continue;
		
		}
		else{
			printf("%c",str[i]);
		}
	
	}
	
}

int main(){
	char str[100];
	
	scanf("%s",str);
	//printf("%s",str);
//	printf("%d\n",stringlength(str));
//	reverse(str,stringlength(str));
	removevowels(str,stringlength(str));

return 0;
}


