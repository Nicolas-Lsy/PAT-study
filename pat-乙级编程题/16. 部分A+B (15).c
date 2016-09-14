//思路
#include <stdio.h>

int cnt(int X, int DX);
int P(int DX, int cnt);
int main(void){
	
//输入两个数 A B和两个标记数 DA DB
	int A,B,DA,DB;
	scanf("%d %d %d %d", &A, &DA, &B, &DB);
	
//计算DA DB 个数 
	int cnt_A, cnt_B;
	cnt_A = cnt(A,DA);
	cnt_B = cnt(B,DB);
// 计算PA PB 
	int sum;
	sum = P(DA,cnt_A) + P(DB, cnt_B);
	
//输出 PA+PB
printf("%d", sum);

return 0;
	
}

int cnt(int X, int DX){
	int count = 0;
	while(X){
		if(X%10 == DX)
			count++;
		X /= 10;
	}
	
	return count;
}

int P(int DX, int cnt){
	int n, sum = 0;
	for(n=0; n<cnt; n++){
		sum = sum*10+DX;
	}
	return sum;
}
 
