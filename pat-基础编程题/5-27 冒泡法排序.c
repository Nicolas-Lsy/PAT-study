
#include <stdio.h>
int main(void){
	//输入 N个数， K值为第K遍结果
	int N, K; 
	scanf("%d %d" ,&N,&K);
	//第二行输入待排序整数
	int n,num[N];
	for(n = 0; n < N; n++){
		scanf("%d", &num[n]);
	}
	//冒泡排序
	int i,j,temp;
	for(i=1; i<N; i++){//外部循环 i轮 
		for(j=0; j<N-i; j++){ //内部循环交换 
			if(num[j]>num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
		//K遍显示
		if(i == K) break;
	}
	//输出结果
	for(i=0; i<N-1; i++){
		printf("%d ", num[i]);
	}
	printf("%d\n", num[N-1]);
	return 0;
}




















