#include <stdio.h>

int GYS(int a, int b);
int main(void){
	 int a1,b1,a2,b2,a,b;
	 
	 scanf("%d/%d %d/%d", &a1,&b1,&a2,&b2);
	 
	 
	 	b = b1*b2;
	 	a = a1*b2 + a2*b1;
	 	int num;
	 	
	 	if(a>b){
	 		num = GYS(a,b);
	 		a = a/num;
	 		b = b/num;
	 		if(b==1)
				printf("%d",a);
			else
				printf("%d/%d\n", a,b);
	 		
		 }	 	
	 	else if(a<b){
	 		num = GYS(b,a);
	 		a = a/num;
	 		b = b/num;
	 		if(a==1)
				printf("1/%d",b);
			else
				printf("%d/%d\n", a,b);
		 }
	 	else if(a==b){
	 		printf("1\n");
		 }



	 return 0;
	 
}

int GYS(int a, int b){
	
	int temp;
	while(b>0){
		temp = a%b;
		a = b;
		b = temp;
	}
	
	return a;
}

