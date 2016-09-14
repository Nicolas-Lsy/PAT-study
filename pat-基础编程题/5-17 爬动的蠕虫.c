#include <stdio.h>

int main(void){
	int N,U,D,head = 1;
	int i = 0;
	
	scanf("%d %d %d", &N,&U,&D);
	while(1){
		head += U;
		i++;
		
		if(head>N) break;
		head -= D;
		i++;

	}
	
	printf("%d", i);
	
	return 0;
	
} 
