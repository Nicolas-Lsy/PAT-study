#include <stdio.h>
#include <string.h>

int main(void){
	
	char *num[] = { "ling", "yi","er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	int N;
	
	scanf("%d", &N);
	if(N<0){
		printf("fu ");
		N = -N;
	}

	int count = 1;
	int x = N;
	
	while(x){
			count++;
			x = x / 10;
		}
		
		
	int num2[count-1];
	int i,j;
	for(i=count-1; i>=0; i--){
			num2[i] = N % 10;
			N = N / 10;

		}
	char voice[10][5]={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for(j=1; j<count; ++j){
        printf("%s", voice[num2[j]]);
        if(j != count-1) printf(" ");
    }
    printf("\n");
	
	return 0;
	
}
