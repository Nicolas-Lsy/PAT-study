#include <stdio.h>
#define MAX 1000
int main(void){
	//��ʽ λ��ͳ�� ������ 
	char num[MAX];
	//����1000λ������
	char n;
	int i,count[10] = {0};
	while((n = getchar())!= '\n'){
		//num[i++] = n;
		i = n - '0';
		//�������λ���ֳ��ִ���
		count[i]++;
	}
	for(i=0; i<10; i++){
		if(count[i]!=0)
			printf("%d:%d\n", i,count[i]);
	}
	
	return 0;
} 

















 
