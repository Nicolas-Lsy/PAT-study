#include <stdio.h>
#define f(x) (a3*(x)*(x)*(x)+a2*(x)*(x)+a1*(x)+a0)

int main(void){
	float a3,a2,a1,a0,left,right,mid;
	
	scanf("%f%f%f%f%f%f",&a3,&a2,&a1,&a0,&left,&right);
	
	while(left<=right-0.001 && f(left)*f(right)<=0){
		
		if(f(left)==0){
			mid = left;
			break;
		}
			
		if(f(right)==0){
			mid = right;
			break;
		}
		
		mid = (left + right) / 2;	
		if( f(mid) * f(left) > 0 ){
			left = mid;
		}
		else{
			right = mid;
		}
		
	}
	
	printf("%.2f", mid);


return 0;

}

