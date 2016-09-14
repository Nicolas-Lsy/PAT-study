#include<stdio.h>  
#include<string.h>  
int main()  
{  
    char a[4][61];  
    int i,j;  
    int b[4]={0};  
    for(i=0;i<4;i++)  
    {  
        for(j=0;j<61;j++)  
        {  
            scanf("%c",&a[i][j]);  
            if(a[i][j]!='\n')  
            {  
                b[i]=b[i]+1;  
            }  
            else  
            break;    
        }  
    }  
    int t=b[0];  
    if(b[1]<b[0])  
    {  
        t=b[1];//找出前两个中较短的   
    }  
    char c[14]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N'};  
    char d[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};  
    int m=0;  
    for(i=0;i<t;i++)//以短的长度为范围查找   
    {  
        if(a[0][i]==a[1][i])  
        {  
            if(m==0)//第一个相同的字符   
            {  
                for(j=0;j<7;j++)  
                {  
                    if(c[j]==a[0][i])  
                    {  
                        printf("%s ",d[j]);  
                        m++;      
                        break;  
                    }  
                }  
            }  
            else//第二个相同的字符   
            {  
                if(a[0][i]>'9')  
                {  
                    for(j=0;j<14;j++)  
                    {  
                        if(a[0][i]==c[j])  
                        {  
                            printf("%d:",c[j]-55);  
                            break;  
                        }  
                    }  
                }  
                if(a[0][i]>='0'&&a[0][i]<='9')  
                {  
                    printf("%02d:",a[0][i]-48);  
                    break;  
                }  
            }  
        }  
    }  
    t=b[2];  
    if(b[3]<b[2])  
    {  
        t=b[3];//找出前两个中较短的   
    }  
    for(i=0;i<t;i++)  
    {  
        if(a[2][i]==a[3][i]&&((a[2][i]>='a'&&a[2][i]<='z')||(a[2][i]>='A'&&a[2][i]<='Z')))  
        {  
            printf("%02d\n",i);  
            break;  
        }  
    }  
    return 0;  
}  
