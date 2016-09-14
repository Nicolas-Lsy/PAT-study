/*#include <stdio.h>

int main(void){
	int M,N;
	scanf("%d %d", &N, &M);
	int num[N+M],i;
	
	for(i=M; i<N+M; i++){
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<M; i++){
		num[i] = num[N+i];
	}
	
	for(i=0; i<N; i++){
		printf("%d", num[i]);
		if(i!=N-1)
			printf(" ");
	}
	
	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(void){
	int i,n,m,move,temp,x,s[100];
	scanf("%d %d", &n,&m);
	for(i=0; i<n; i++){
		scanf("%d", &x);
		s[i] = x;
	}
	
	move = m%n;
	
	for(i=n-move; i<n; i++){
		printf("%d ", s[i]);
	}
	for(i=0; i<n-move; i++){
		printf("%d", s[i]);
		if(i<n-move-1)
			printf(" ");
	}
	return 0;
}















