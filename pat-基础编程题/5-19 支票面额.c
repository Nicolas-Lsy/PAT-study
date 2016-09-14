#include <stdio.h>

int main(void){
	int n,y,f,flag = 0;
	scanf("%d", &n);
	
	for(f=0;f<=100; f++){
		for(y=0;y<=100; y++){
		if(98*f-199*y == n) {
			flag = 1;
			printf("%d.%d", y,f);
			break;
			}
		}
	}
	if(!flag)
		printf("No Solution");
	
	return 0;
}
