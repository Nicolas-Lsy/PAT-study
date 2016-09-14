#include <stdio.h>

int main(void){
	
	int i,j,count = 0;
	int A,B,Sum = 0;
	
	scanf("%d%d", &A,&B );

	
	for(i=A; i<=B; i++){
		
		printf("%5d", i);
		Sum += i;
		count++;
		if(count%5==0) printf("\n");
	}
	if (count % 5 != 0)
		putchar('\n');
	printf("Sum = %d\n", Sum);
	return 0;
}
