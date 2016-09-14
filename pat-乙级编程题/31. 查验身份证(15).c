#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void){
	int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char M[15] = {'1','0','X','9','8','7','6','5','4','3','2'};
	int n;
	bool TAG = true;  //�Ƿ�ȫ��ͨ��
	scanf("%d", &n);
	int t;
	for(t=0; t<n; t++){
		char str[20];
		scanf("%s",str);
		int len=strlen(str);
		int sum = 0;
		bool tag = true; //ÿһ���Ƿ��������־
		int i;
		for(i=0; i<len-1; i++){
			int tmp = str[i]-'0';
			if(tmp>=0&&tmp<=9) //�ж��Ƿ�������
				sum+=tmp*weight[i];
			else{
				tag = false;
				break;
			}
		}
		
		int Z = sum%11;  //�ж����һλ�Ƿ���ȷ
		if(M[Z] != str[len-1])
			tag =false;
		if(tag==false){
			TAG = false;
			puts(str);
		}
	}
	//ȫ��û����
	if(TAG == true){
		printf("All passed");
	} 
	
	return 0;
	
	
}




