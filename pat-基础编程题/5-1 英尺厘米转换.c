/*
�����֪Ӣ�Ƴ��ȵ�Ӣ��foot��Ӣ��inch��ֵ��
��ô��Ӧ������cm = (foot+inch/12)��30.48�� 
���ڣ�����û������������������ô��ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ���Ƕ����أ�
������1Ӣ�ߵ���12Ӣ�硣

�����ʽ��
������һ���и���1������������λ�����ס�

�����ʽ��
��һ������������������ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ�������ֵ���м��ÿո�ֿ���

����������
170

���������
5 6
*/
#include <stdio.h>

void foot_and_inch(double cm);

int main(void){
	double cm;
	scanf("%lf", &cm);
	foot_and_inch(cm);
	
	return 0;	
} 

void foot_and_inch(double cm){
	double result = cm / 30.48;
	
	printf("%d %d", (int)result, (int)(12*(result-(int)result)));

}










