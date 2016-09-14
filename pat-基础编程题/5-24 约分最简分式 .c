#include <stdio.h>

/*int main(void){
	int fz,fm,i=0;
	
	scanf("%d/%d", &fz,&fm);
	while(i<=fm){
		i++;
		if(fz>fm){
			if(fz%fm==0){
				fz /= fm;
				fm = 1;
			}
			else if(fz%i==0 && fm%i==0 && fm!=1){
				fz /= i;
				fm /= i;
			}
		}
		else if(fz<fm){
			if(fm%fz==0){
				fm /= fz;
				fz = 1;
			}
			else if(fz%i==0 && fm%i==0 && fz!=1){
				fz /= i;
				fm /= i;
			}
			
		}
		else if(fz == fm){
			fz = 1;
			fm = 1;
		}
		
	}
	
	printf("%d/%d", fz, fm);
	
	return 0;
}*/

/*#include<stdio.h>  //辗转相除法  

int main ()
{
    int numerator, denominator;
    scanf("%d/%d", &numerator, &denominator);
    int a = numerator, b = denominator;
    
    int temp;
    while (b) {
        temp = a % b;
        a = b;        //a为最大公约数 
        b = temp;
    }
    
    printf("%d/%d\n", numerator/a, denominator/a);
    
    return 0; 
}*/





























