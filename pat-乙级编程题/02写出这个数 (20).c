#include <stdio.h>
#define MAX 100


int main(void){
	
	//输入一个超范围的数num[] 	
	char num[MAX];
	int i = 0;
	while((num[i] = getchar()) != '\n'){
		i++;
	}
	
	//求出这个数各个位的和sum 
	int sum = 0;
	for(i-=1; i>=0; i--){
		sum += num[i] - '0';
	}
	//printf("%d", sum);
	if(sum == 0){
		printf("ling");
		return 0;
	}
	//倒序数字
	int new_sum = 0;
	while(sum){
		new_sum = new_sum * 10;
		new_sum += (sum%10);
		sum /= 10;
	} 
	//printf("%d", new_sum);
	
	//用拼音表示这个数
	char py[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	
	while(new_sum){
	//输出
		printf("%s", py[new_sum%10]);
		new_sum /= 10;
		if(new_sum==0)
			printf("\n");
		else
			printf(" ");
		//拼音最后一个没有空格		
	}
	
	return 0;	
}
