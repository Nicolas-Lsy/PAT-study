#include <stdio.h>

int main(void){
	
	int n, count = 0;
 	scanf("%d", &n);
 	
 		if(n == 1){
			printf("0");
			return 0;
		}
		//ѭ������
		while(n!=1){
			//ֹͣ����n=1,������ 
			//ż������  ��һ����
		if(n%2 == 0){
			n = n / 2;
			count++;
			continue;
		}
			//�������� ��һ����
 		if(n%2 == 1){
 			n = (3*n+1) / 2;
			count++;
			continue;
		 }
			
		}
		//���������� count  
		printf("%d", count);
		
		return 0;			
} 
