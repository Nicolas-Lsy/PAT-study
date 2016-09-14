#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
				
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/*  */
int IsTheNumber( const int N ){
	
	//处理完全平方
	int m = (int)sqrt(N) ;
	//处理两个数字相同 
	int a[10] = {0};
	int n = N,i;
	if(m*m == N){
	
	while(n){
		i = n%10;
		a[i]++;
		
		n = n/10;
		if(a[i]>=2){
			return 1;
		}
	}
		return 0;
	}
	return 0;
}

/*int IsTheNumber ( const int N )
{
	int n,m;
	n=(int)sqrt(N);
	m=n*n;
	if(m==N)
	{
		int num[10]={0};
		int i;
		while(m>0)
		{
			for(i=0;i<=9;i++)
			{
				if(m%10==i)
				{
					num[i]+=1; 
					if(num[i]==2)
					{
						return 1;
					}
				} 
			}
			m=m/10;
		}
		return 0;
	}
	return 0;
}*/









