
#include <stdio.h>
int main(void){
	//���� N������ KֵΪ��K����
	int N, K; 
	scanf("%d %d" ,&N,&K);
	//�ڶ����������������
	int n,num[N];
	for(n = 0; n < N; n++){
		scanf("%d", &num[n]);
	}
	//ð������
	int i,j,temp;
	for(i=1; i<N; i++){//�ⲿѭ�� i�� 
		for(j=0; j<N-i; j++){ //�ڲ�ѭ������ 
			if(num[j]>num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
		//K����ʾ
		if(i == K) break;
	}
	//������
	for(i=0; i<N-1; i++){
		printf("%d ", num[i]);
	}
	printf("%d\n", num[N-1]);
	return 0;
}




















