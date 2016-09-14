/*#include <stdio.h>
#define MAX 500000

int main(void){
	
	char s;
	char t[MAX];
	int i = 0, count = 0, flag = 0;
	while((s = getchar())!= '\n'){
		if(s != ' '){
			flag = 1;
			t[i++] = s;
			count = 0;
		}
		else if(count>0){
			continue;
		}
		else if(flag){
			t[i++] = s;
			count++;
		}
//////////////////////////////////////		
		count = 0;
		int j;
		for(i-=1; i>=0; i--){
			if(t[i] != ' '){
				count++;
			}
			else if(t[i] == ' '&& count > 0){
				for(j = i+1; j<=i+count; j++){  //每个单词倒序处理 
					printf("%c", t[j]);
					
				}
				printf(" ");
				count = 0;
			}
		}
		
		for(j = i+1; j<=i+count ;j++){
			printf("%c", t[j]);
		}
		
		return 0;
		
	}
	
}*/


