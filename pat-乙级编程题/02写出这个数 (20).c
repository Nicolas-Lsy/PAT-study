#include <stdio.h>
#define MAX 100


int main(void){
	
	//����һ������Χ����num[] 	
	char num[MAX];
	int i = 0;
	while((num[i] = getchar()) != '\n'){
		i++;
	}
	
	//������������λ�ĺ�sum 
	int sum = 0;
	for(i-=1; i>=0; i--){
		sum += num[i] - '0';
	}
	//printf("%d", sum);
	if(sum == 0){
		printf("ling");
		return 0;
	}
	//��������
	int new_sum = 0;
	while(sum){
		new_sum = new_sum * 10;
		new_sum += (sum%10);
		sum /= 10;
	} 
	//printf("%d", new_sum);
	
	//��ƴ����ʾ�����
	char py[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	
	while(new_sum){
	//���
		printf("%s", py[new_sum%10]);
		new_sum /= 10;
		if(new_sum==0)
			printf("\n");
		else
			printf(" ");
		//ƴ�����һ��û�пո�		
	}
	
	return 0;	
}
