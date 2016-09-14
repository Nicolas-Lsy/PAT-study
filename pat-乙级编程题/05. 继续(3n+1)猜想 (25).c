#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(void){
	int k,i,j=0,x=0,now,temp,n,c,s[100]={0},all[9999]={0},out[100] ={0};
	scanf("%d", &k);
	for(i=0; i<k; i++){
		scanf("%d", &n);
		s[i] = n;
		for(now=n; now!=1;){ //保存运算过程 
			if(now%2==0) 
				now = now/2;
			else 
				now = (now*3+1)/2;
			all[j] = now;
			j++;
		}
	}
	
	for(i=0; s[i]!=0; i++){
		for(j=0;all[j]!=0;j++){
			if(s[i]==all[j]) break;
		}
		if(all[j]==0){
			out[x] = s[i];
			x++;
		}
	}
	
	do{
		c = 0;
		for(i=0; out[i]!=0; i++){
			if(out[i]<out[i+1]){
				temp = out[i];
				out[i] = out[i+1];
				out[i+1] = temp;
				c = 1;
			}
		}
	}while(c==1);
	
	for(i=0; out[i]!=0; i++){
		printf("%d", out[i]);
		if(out[i+1]!=0)
			printf(" ");
	}
	
	return 0;
	
}
