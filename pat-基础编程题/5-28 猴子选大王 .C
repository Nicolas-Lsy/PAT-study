#include <stdio.h>

int main(void){
	
	int N,i,n,num[1000] = {0};
	scanf("%d", &N);

	

	for(i=0; i<=N; i++){
		num[i] = i+1;	
	}
	

	int number = 1;
	n = N;
	while(n>1){
		for(i=0; i<N; i++){
			if(num[i] == 0)
			continue;
				
			if(number==3){
				number = 0;
				num[i]=0;
				n--;
			}
			number++;
			

		}
	}
	
	for(i=0; i<N; i++){
		if(num[i]!=0)
			printf("%d",num[i]);
	}
	
	return 0;	
}



/*
#include <stdio.h>

int main(void){
	
	int N;
	int a[1000];
	scanf("%d", &N);
	int count = 0, number = N;

	for(int i=0; i<N; i++){
		a[i] = i+1;
	}
	while(number > 1){
		
		for(int i=0; i<N; i++){
			if(a[i] == 0)
				continue;
			count++;
			if(count == 3){
				a[i] = 0;
				count = 0;
				number--;
			}
		}
	}
	for(int i=0; i<N; i++){
		if(a[i] != 0)
			printf("%d", a[i]);
	}
	
	return 0;
}
*/











