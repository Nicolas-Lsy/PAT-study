/*#include <stdio.h>
#include <string.h>

int main(void){
	int N;
	char c[100];
	scanf("%s", c);
	
	scanf("%d", N);
	
	char temp[100];
	int i;
	for(i=0; i<N; i++){
		temp[i] = c[i];
	}
	
	char a[100], b[100];
	strcpy(a , strchr(c,temp[N-1]));
	strcpy(b , strcat(a,temp));
	
	printf("%s", b);
	
	return 0;
}*/

#include <stdio.h>
#include <string.h>

int main(void){
	
	char s[101];
	gets(s);
	
	int N;
	scanf("%d", &N);
	
	int s_length = strlen(s);
	int i = N%s_length;
	char target[101];
	
	if(i!=0){
		strcpy(target,s+i); //÷∏’Î∫Û“∆ 
		s[i] = '\0';
		strcat(target,s);
		puts(target);
	}
	else{
		puts(s);
	}
	
	return 0;
}























