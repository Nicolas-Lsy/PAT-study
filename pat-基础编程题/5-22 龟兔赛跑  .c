/*#include <stdio.h>

int main(void){
	int T,wg=0,tz=0,time=1;
	scanf("%d",&T);
	
	if(T<=10){
		tz = 9*T;
		wg = 3*T;
	}
	else{
		while(time<=T){
				if(time%10==0 && tz>wg){
					tz-=30*9;
				}
			time++;
			wg+=3;
			tz+=9;		
		}
	}

	if(wg>tz)
		printf("@_@ %d",wg);
	else if(wg<tz)
		printf("^_^ %d",tz);
	else 
		printf("-_- %d",wg);
		
	return 0;	
}*/

#include<stdio.h>  
  
int main()  
{  
    int T, i;  
    int rabbitT=0; //�����ܵ�ʱ��  
  
    scanf("%d",&T);  
    if(T<10)  
    {  
        printf("^_^ %d\n",T*9);  
        return 0;  
    }  
    rabbitT=10;  
    for(i=10;i<=T;i++)  
    {  
        if(i%10==0)   //ÿ10���ӻ�ͷ���Ƚ�  
        {  
                        if(rabbitT*9>i*3 && (T-i)>=30) //���Ӵ����ڹ꣬ʣ��ʱ�䲻С��30����  
                                i=i+29; //����i=i+30, �����i++  
                        else if(rabbitT*9>i*3 && (T-i)<30)  //���Ӵ����ڹ꣬ʣ��ʱ��С��30����  
                        {  
                                i=T;  
                                break;  
                        }  
                        else if(T-i>=10) //����С���ڹ꣬ʣ��ʱ�䲻С��10���ӣ����������ܵ�ʱ��+10  
                        {  
                                rabbitT+=10;  
                                i=i+9;  
                        }  
                        else  //����С���ڹ꣬ʣ��ʱ��С��10����, ���������ܵ�ʱ��+T-i  
                        {  
                                rabbitT+=T-i;  
                                i=T;  
                                break;  
                        }  
  
        }  
    }  
    if(i*3>rabbitT*9)  
                printf("@_@ %d\n",i*3);  
    else if(i*3<rabbitT*9)  
                printf("^_^ %d\n",rabbitT*9);  
    else  
        printf("-_- %d\n",rabbitT*9);  
    return 0;  
}  
