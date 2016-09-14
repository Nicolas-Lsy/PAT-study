/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	int xs[1001],zs[1001],dx[1001],dz[1001];
	char n;
	int flag = 0,i = 0;
	while((n=getchar())!='\n'){
		xs[i++] = n;
		if(flag){
			n = zs[i++];
			flag = 0;
		}
	}
	
	int count = i;
	for(i=0; i<count; i++){
		dx[i] = xs[i]*zs[i];
		dz[i] = zs[i]-1;
		printf("%d ", dx[i]);
		printf("%d", dz[i]);
		if(i!=count-1)
			printf(" ");
		
	}
	
	return 0;
}*/

#include<stdio.h>
int main()
{
	int a,b,d,count=0,num=0;
	while(scanf("%d %d",&a,&b)!=EOF)  //¶¨Ê½  
		{
			if(num==0&&b==0)
				{
					printf("0 0");
				}
			else{
					if(b==0)
						{
							break;
						}
			if(count==0)
				printf("%d %d",a*b,b-1);
			else 
				printf(" %d %d",a*b,b-1);
			count++;
			num++;
				}
		} 
		return 0;
}













