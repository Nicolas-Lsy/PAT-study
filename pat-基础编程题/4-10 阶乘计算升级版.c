#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
	int N;
	
	scanf("%d", &N);
	Print_Factorial(N);
	return 0;
}
/*����Ҫ��ʵ��һ����ӡ�Ǹ������׳˵ĺ�����
����N���û�����Ĳ�������ֵ������1000��
���N�ǷǸ���������ú���������һ���д�ӡ��N!��ֵ��
�����ӡ��Invalid input����*/

void Print_Factorial ( const int N ){


	if(N>0&&N<=12){
		int i;
		long int sum=1;
		for(i=2; i<=12; i++){
			sum *= i;
		}
		printf("%ld", sum);
	}
	else if(N==0)
	{
	printf("1\n");
	}
	else if(N>12&&N<=1000){
		int num[3000] = {1},n,temp,i,j,k=1;
			for(i=2; i<=N; i++){
				
				for(j=0; j<k; j++){	
				temp = i*num[j] + n;
				num[j] = temp%10;
				n = temp/10;
			}
			while(n!=0){  //��k������λ��  j��ÿ��ѭ��ʱ��ԭ�� 
				num[k] = n%10;
				k++;
				n /= 10;
			}
			}
			for(j=k-1; j>=0; j--){
				printf("%d", num[j]);
			}
	}else	
	printf("Invalid input\n");
	
}
/*
void Print_Factorial(const int N)
{   

	if(N>0&&N<=12)
	{
		int i;
		long int sum=1;
		for(i=1; i<=N; i++){
			sum *= i;
		}
		printf("%ld", sum);
	}
    else if(N==0)
    {
    	printf("1\n");
	}
	else if(N>12&&N<=1000)
    {
    	int n=0,i=2,j=0,k=1,temp,num[1000]={0}; //��λ 
        num[0] = 1;
    	
    	for(i=2; i<=N;i++){ //�׳˹��� 

    		for(j=0;j<k;j++){ //���ÿһλ��˽�� 
    			temp = i*num[j] + n;
    			num[j]=temp%10;//mÿһλ���и��� 
    			n = temp/10;
			}
			while(n!=0){//����λ������ֵ 
				num[k] = n%10;
				k++;
				n = n /10;
			}
		}
        for(i=k-1;i>=0;i--)
        { 
            printf("%d",num[i]);
        }
	}
	else
    	printf("Invalid input\n"); 
}






