/*#include<stdio.h>
#include<string.h>
int main()
{
//ע�����ѭ�����ڲ�ѭ����ʹ�õı�����ĸ��Ҫһ��
int s,i,j=0,k=0,l=0,m=0,n=0,d,count=0,sum=0,p,q,coun,count1,count2,count3;
char a[101];
int c[100];
scanf("%d\n",&s);


for(q=0;q<s;q++)
{
	k=0;
	count=0;
	count1=0;
	count2=0;
	count3=0;
	coun=0;
	scanf("%s",a);  //��¼�ַ��������� 
	sum=strlen(a);  
	while(a[k]!='\0')
	{
		if(a[k++]=='P')   //ѭ���ж��Ƿ���P 
		{
			m=k-1;  //����k++ ���������m 
		}
	}
	k=0;
	while(a[k]!='\0')  //ѭ���ж��Ƿ���T 
	{
		if(a[k++]=='T')  
		{
			n=k-1;           
		}
	}
	d=n-m;        //P �� T ֮��ļ�� 
	// printf("%d\n",d);
	if(d<=3&&d>=2)  //�����2��3 
	{
		for(i=0;i<m;i++) //P֮ǰ��A �� �� 
			{
				if(a[i]=='A'||a[i]==' ')
					{
						count++;
						count1++;
					}

			}
		for(i=n+1;i<sum;i++) //T֮���� A��� 
			{
				if(a[i]=='A'||a[i]==' ')
					{
						count++;
						count3++;
					}

			}
		for(i=m+1;i<n;i++)   // P��T֮�� 
			{
				if(a[i]!='A') //����A 
					{
						coun++;
						// count2++;
					}
				if(a[i]=='A') //��A 
					{
						count2++;
						// count2++;
					}
			}
	p=sum-d-1;
// printf("%d\n",d);
// printf("%d\n",count);
	if(count==p&&coun==0&&count1*count2==count3)
		{
			c[l++]=1;

		}else
		{

			c[l++]=0;
		}

	}else{

		c[l++]=0;

		}
}

for(i=0;i<l;i++)
{
	if(c[i]==1)
		{
			printf("YES\n");
		}else
		{
			printf("NO\n");
		}
}

return 0; 
}*/
#include <stdio.h>
int main(void) {
    int n,sum;
    int a,b,c;
    //a:beforeP,b:betweenPandT,c:afterT
    int i,k,j = 0;
    scanf("%d",&n);
    char input[n][101];
    for (k = 0; k<n; k++) scanf("%s",&input[k]);
    for (i = 0; i<n; i++) {
        a = b = c = j = 0;
        while (input[i][j] == 'A') {
            a++;j++;
        }
        if (input[i][j++] != 'P') {
            printf("NO\n");
            continue;
        }
        while (input[i][j] == 'A') {
            b++;j++;
        }
        if (input[i][j++] != 'T') {
            printf("NO\n");
            continue;
        }
        while (input[i][j] == 'A') {
            c++;j++;
        }
        if (input[i][j++] != '\0') {
            printf("NO\n");
            continue;
        }
        if (a*b !=c || b==0) printf("NO\n");
        else printf("YES\n");
    }
}
