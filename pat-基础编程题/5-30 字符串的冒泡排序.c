/*#include <stdio.h>
#include <string.h>

int main(void){
	
	int N,K;
	scanf("%d %d", &N, &K);
	
	char words[11][N];
	int i,j;
	for(i=0; i<N; i++){
		scanf("%s", words[i]);
	}
	
	
	
	
	for(i = 0; i<N; i++){
		for(j = 0; j<N-i; j++){
			if(!strcmp(words[i],words[i+1])){
				char temp[11];
				strcpy(temp,words[i+1]);
				strcpy(words[i+1],words[i]);
				strcpy(words[i], temp);
					}
		
		}
		if(i==K) break;
	}
	 
	for(i=0; i<N; i++){
		printf("%s\n", words[i]);
	}
	 
	 return 0;
} */

#include <stdio.h>
#include <string.h>

int n,k;
char a[101][11];
char b[11];
int i,j,h;
int main(){
	
	scanf("%d %d", &n, &k);
	
	for(i=0; i<n; i++){
		scanf("%s", &a[i]);
	}
	
	for(j=0; j<k; j++){
		for(h=0; h<n-1-j; h++){
			if(strcmp(a[h],a[h+1])>0){
				strcpy(b,a[h]);
				strcpy(a[h],a[h+1]);
				strcpy(a[h+1], b);
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%s\n", a[i]);
	}
	
	return 0;
}





















