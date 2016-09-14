
#include <stdio.h>

int main(void){
	// 输入一个正整数n<1000
	int n;
	scanf("%d", &n);
	//百位B，十位S，对应个数
	int b,s,g;
	g = n%10;
	n /= 10;
	s = n%10;
	n /= 10;
	b = n%10;
	//各位输出数字，对应个数
	char ch_B = 'B', ch_S = 'S';
	char ch_G[10] = {'1','2','3','4','5','6','7','8','9'};
	int i,j,k;
	if(b!=0)
		for(i=0; i<b; i++){
			printf("%c", ch_B);
		}
	if(s!=0)
		for(j=0; j<s; j++){
			printf("%c", ch_S);
		}
	if(g!=0) 
		for(k=0; k<g; k++){
			printf("%c", ch_G[k]);
		}
	//结果输出百位十位各位
	return 0;
}  
  
