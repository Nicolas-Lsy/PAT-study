/*ģ�⽻ͨ������״�����ǡ����������ٶȣ�����ٶȳ���60 mph������ʾ��Speeding����������ʾ��OK����
�����ʽ��

������һ���и���1��������500�ķǸ����������״�⵽�ĳ��١�
�����ʽ��

��һ���������������ʾ�������ʽΪ��Speed: V - S������V�ǳ��٣�S������Speeding��������OK*/

#include <stdio.h>

int main(void){
	//input
	int V;
	
	scanf("%d", &V);
	//�ж�
	//output 
	if(V>=0&&V<=60)
		printf("Speed: %d - OK", V);
	else
		printf("Speed: %d - Speeding", V);
	
	return 0;
}
