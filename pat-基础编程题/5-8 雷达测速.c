/*模拟交通警察的雷达测速仪。输入汽车速度，如果速度超出60 mph，则显示“Speeding”，否则显示“OK”。
输入格式：

输入在一行中给出1个不超过500的非负整数，即雷达测到的车速。
输出格式：

在一行中输出测速仪显示结果，格式为：Speed: V - S，其中V是车速，S或者是Speeding、或者是OK*/

#include <stdio.h>

int main(void){
	//input
	int V;
	
	scanf("%d", &V);
	//判断
	//output 
	if(V>=0&&V<=60)
		printf("Speed: %d - OK", V);
	else
		printf("Speed: %d - Speeding", V);
	
	return 0;
}
