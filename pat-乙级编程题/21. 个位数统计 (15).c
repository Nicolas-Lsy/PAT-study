#include <stdio.h>
#define MAX 1000
int main(void){
	//定式 位数统计 数组解决 
	char num[MAX];
	//输入1000位正整数
	char n;
	int i,count[10] = {0};
	while((n = getchar())!= '\n'){
		//num[i++] = n;
		i = n - '0';
		//计算各个位数字出现次数
		count[i]++;
	}
	for(i=0; i<10; i++){
		if(count[i]!=0)
			printf("%d:%d\n", i,count[i]);
	}
	
	return 0;
} 

















 
