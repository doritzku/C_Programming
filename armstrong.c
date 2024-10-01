#include<stdio.h>

int main() {
	int sum=0;x;
	for (int i=1;i<=500;i++){
		while(x>0){
			x=i;
			sum =sum + (i%10)*(i%10)*(i%10);
			i=i/10;
			if (x==sum){
			printf("%d\n",x);
			}
		}
	}
}
