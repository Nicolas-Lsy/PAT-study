/*#include <stdio.h>

int isPrime(int n);
int main(void){
	int N,M,i,count=0;
	scanf("%d %d", &M,&N);
	//printf("%d  %d",isPrime(N),isPrime(M));
	for(i=1; count==N; i++){
		if(isPrime(i)){
			count++;
			if(count>M)
				printf("%d",);
		}
			


	}
	return 0;
} 

int isPrime(int n){
	int i;
	for(i=2; i<n; i++){
		if(n%i==0){
			return 0;
		}		
	}
	
	return1;
}*/

#include<stdio.h>
#include<math.h>

int isprime(int num)
{
  int sqr=(int)sqrt(num*1.0);    //��skill���ж�����ֻҪ�жϵ���ƽ���Ϳ�����
  for(int i=2 ; i<sqr+1 ; ++i)
    if(num%i==0)
      return 0;
  return 1;
}

int main() 
{
  int l,r;
  scanf("%d%d",&l,&r);
  int num=2,cnt=1,pcnt=0;      //num�ǲ������֣�cnt��ʾ����������pcnt��ʾ����Ҫ���ӡ������������
  while(1)
  {
    if(isprime(num))
    {
      if( cnt>=l && cnt<= r)
      {
        printf("%d",num);
        ++pcnt;
        if(pcnt!=10 && cnt!=r)
        {
          printf(" ");
        }
        else
        {
          printf("\n");
          pcnt=0;
        }
        if(cnt>=r)
          break;
        
      }
      ++cnt;
    }
    ++num;
  }
  return 0;
}
