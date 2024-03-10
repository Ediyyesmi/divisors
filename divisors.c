#include <stdio.h>

int a(int x, int y){

	if(x<y){
		return;
	}
	if(x%y==0){
		printf("%d " ,y);
	}
	a(x, y+1);	
}
int main(){
	
	int x=30, y=1;
	printf("divisors: ");
	a(x,y);
	printf("\n ");
	return 0;
}
