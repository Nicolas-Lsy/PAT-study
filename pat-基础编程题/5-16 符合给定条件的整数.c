#include <stdio.h>

int main(void){
	
	int num[4];
	int i,j,k,n,count=0;
	
	scanf("%d", &n);
	for(i=0; i<4; i++){
		num[i] = n + i;
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			for(k=0; k<4; k++){
				if(i!=j && i!=k && j!=k)
					{
					printf("%d%d%d",num[i],num[j],num[k]);
					count++;
					if(count!=6) 
						printf(" ");
					}
			}
		}
		printf("\n");
		count=0;
	}
	return 0;
} 
