#include <stdio.h>

int main(void){
	int X,Y,N,flag = 0;
	scanf("%d", &N);

	
	for(X=0; X<Y; X++){
		for(Y=0; Y<100; Y++){
			if(X*X + Y*Y == N && X<Y){
			flag = 1;
			printf("%d %d\n", X,Y);
			}
		}
	}
	
	if(!flag)
		printf("No Solution");
	
	return 0;
}
