/*#include <stdio.h>

int main(void){
	
	int N,flag,count=0,max = -1;
	scanf("%d", &N);
	int i,num[N],A[6] = {0};
	for(i=0; i<N; i++){
		scanf("%d",&num[i]);
		flag = num[i]%5;
			switch (flag){
		
				case 0: if(num[i]%2==0){
							A[1] += num[i];	
						}
						break;
				case 1: 
						if(i%2 == 1) num[i] = -num[i];
						A[2] += num[i];
						break;
				case 2: 
						A[3]++;
						break;
				case 3: 
						count++;
						A[4] += num[i];
				case 4:	
						if(max<num[i]){
							max = num[i];
							A[5] = max;
						}
						break;
				} 
	}
	double a4;
	a4 = (double)(A[4])/count;
	
	int j;
	for(j=1; j<=5; j++){
		if(j!=4)
			printf("%d", A[j]);
		else
			printf("%.1lf",a4);
		if(j!=5)
			printf(" ");
	}

	return 0;
}*/



#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  int A1,A2,A3,A4,A5,tag,numA4,max=-1,A2tag=0;
  A1=A2=A3=A4=A5=tag=numA4=0;
  scanf("%d",&n);
  for(int t=0 ; t<n ; ++t)
  {
    int tmp;
    scanf("%d",&tmp);
    if(tmp%5==0 && tmp%2==0)
      A1+=tmp;
    if(tmp%5==1)
    {
      A2tag=1;
      if(tag==0)        //判断交错加减的标志
      {
        A2+=tmp;
        tag=1;
      }
      else
      {
        A2-=tmp;
        tag=0;
      }
    }
    if(tmp%5==2)
      ++A3;
    if(tmp%5==3)
    {
      A4+=tmp;
      ++numA4;
    }
    if(tmp%5==4 && tmp>max)
      max=tmp;
  }
  //输出
  if(A1==0)
    printf("N ");
  else
    printf("%d ",A1);

  if(A2tag==0)        //加减完之后可能会等于0.所以判断不能用A2是否为0，用标记
    printf("N ");
  else
    printf("%d ",A2);

  if(A3==0)
    printf("N ");
  else
    printf("%d ",A3);

  if(numA4==0)
    printf("N ");
  else
    printf("%.1lf ",(double)A4/numA4);

  if(max==-1)
    printf("N\n");
  else
    printf("%d\n",max);

  //system("pause");
  return 0;
}

