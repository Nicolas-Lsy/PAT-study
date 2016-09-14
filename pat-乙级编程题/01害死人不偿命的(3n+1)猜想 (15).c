#include <stdio.h>

int main(void){
	
	int n, count = 0;
 	scanf("%d", &n);
 	
 		if(n == 1){
			printf("0");
			return 0;
		}
		//循环进行
		while(n!=1){
			//停止条件n=1,趋向极限 
			//偶数处理  （一步）
		if(n%2 == 0){
			n = n / 2;
			count++;
			continue;
		}
			//奇数处理 （一步）
 		if(n%2 == 1){
 			n = (3*n+1) / 2;
			count++;
			continue;
		 }
			
		}
		//输出结果步数 count  
		printf("%d", count);
		
		return 0;			
} 
