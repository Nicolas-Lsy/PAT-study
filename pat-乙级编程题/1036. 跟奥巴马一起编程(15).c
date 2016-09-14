#include <stdio.h>

int main(void){
	int N;
	char C;
	scanf("%d %c", &N, &C);
	
	int n;
	if(N%2)
		n = N/2+1;
	else
		n = N/2;
	
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<N; j++){
			if(i==0||j==0 || i==N/2-1 || j==N-1)
				printf("%c", C);
			else
				printf(" ");
		}
			
		printf("\n");
	}
	
	return 0;
}

/*
#include<stdio.h>
int main(){
    int n,i,j,m;
    char ch;
    scanf("%d %c",&n,&ch);
    if(n%2)m=n/2+1;
    else m=n/2;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==0||i==m-1){printf("%c",ch);}
            else {
                if(j==0||j==n-1)printf("%c",ch);
                else printf(" ");
            }
        }
        printf("\n");
    }
}
*/
