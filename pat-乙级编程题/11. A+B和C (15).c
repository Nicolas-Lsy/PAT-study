
//˼·�� �������ͷ�Χ 
#include <stdio.h>

int A_B_C(long long int a, long long int b, long long int c);
int main(void){
	//��������������T
	int T, i;
	scanf("%d", &T);
	
	//�����������
	long long int A[T],B[T],C[T];
	int flag[T];
	for(i=0; i<T; i++){
		scanf("%lld %lld %lld", &A[i], &B[i], &C[i]);
		flag[i+1] = A_B_C(A[i], B[i], C[i]);
	}
	

	
	//������+������ʾ flag?true:false
	for(i=1; i<=T; i++){
		if(flag[i])
			printf("Case #%d: true\n", i);
		else
			printf("Case #%d: false\n", i);
	}
	 
	 return 0;
}
	//A+B>C��
int A_B_C(long long int a, long long int b, long long int c){
	if(a+b>c){
		return 1;
	}else{
		return 0;
	}
}













