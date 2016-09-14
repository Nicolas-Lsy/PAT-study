/*#include <stdio.h>

int main(void){
	
	int count = 0, count_0 = 0;
	char n;
	
	while((n = getchar()) != '.'){
		if(n != ' '){
			if(count > 0 && count_0 > 0){
				printf("%d ", count);
				count = 0;
			}
			count++;
			count_0 = 0;
			continue;
		}
		if(n == ' '){
			count_0++;
		}
		
	}
	if(count > 0)
		printf("%d", count);
	else 
		printf("\n");

	
	return 0;
} 
#include <stdio.h>

int main(void){
	char word;
	int len = 0,count = 0;
	
	while((word = getchar()) != '.'){

		if(word != ' '){
			
			if(len > 0 && count > 0){  
				printf("%d ", len);
				len = 0;
			}
			len++;
			count = 0;
			continue;
		}
		
		if(word == ' '){
			count++;
		}
		
	
	}
	if(len > 0)
		printf("%d", len);
	else 
		printf("\n");
	
	
	return 0;
}*/

#include <stdio.h>
int main(void) 
{
	char word;
	int  word_len = 0, space_num = 0;
//.结束语句
while((word = getchar()) != '.'){

	//计算输出单词长度
	if(word != ' '){
		
		if(word_len>0 && space_num>0){
			printf("%d", word_len);	
			word_len = 0;
		}
		word_len++;
		space_num = 0;
		continue;	
	}
	//空格结束单词//连续空格的情况，不计单词长度
	if(word == ' '){
		space_num++;
	}	
}
if(word_len > 0)
	printf("%d", word_len);
else 
	printf("\n");
return 0;
}





























