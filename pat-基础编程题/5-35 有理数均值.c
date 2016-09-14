#include <stdio.h>

int GYS(int b1, int b2){
	
	int temp;
	while(b2>0){
		temp = b1%b2;
		b1 = b2;
		b2 = temp;
	}
	
	return b1;
}

int main(void){
	
	
	
	return 0;	
}
