#include<iostream>  
#include<iomanip>  
#include<cmath>  
using namespace std;  
  
int main()  
{  
    void output(long int a,long int b);  
    long int a1,b1,a2,b2;  
    long int c[4]={0},d[4]={0};  
    char sign[]={'+','-','*','/'};  
    scanf("%ld/%ld %ld/%ld",&a1,&b1,&a2,&b2);  
    c[0]=a1*b2+a2*b1;d[0]=b1*b2;  
    c[1]=a1*b2-a2*b1;d[1]=b1*b2;  
    c[2]=a1*a2;d[2]=b1*b2;  
    c[3]=a1*b2;d[3]=b1*a2;  
    if(d[3]<0){c[3]=-c[3];d[3]=-d[3];}  
    for(int i=0;i<4;i++)  
    {  
        if(a1==0){cout<<0;}else{output(a1,b1);}  
        cout<<" "<<sign[i]<<" ";  
        if(a2==0){cout<<0;}else{output(a2,b2);}  
        cout<<" = ";  
        if(i<3)  
        {  
            if(c[i]==0){cout<<0;}  
            else{output(c[i],d[i]);}  
        }else  
        {  
            if(d[3]==0){cout<<"Inf";}  
            else if(c[3]==0){cout<<0;}  
            else{output(c[3],d[3]);}  
        }  
        cout<<endl;  
    }  
    return 0;  
}  
  
void output(long int a,long int b)  
{  
        long int gys(long int x,long int y);  
        bool f=false;  
        if(a<0){cout<<"(-";a=-a;f=true;}  
        long int g=gys(a,b);  
        a=a/g;b=b/g;  
        long int zs=a/b;  
        long int ys=a%b;  
        if(zs!=0)  
        {  
            cout<<zs;  
            if(ys!=0){cout<<" "<<ys<<"/"<<b;}  
        }  
        else{cout<<ys<<"/"<<b;}  
        if(f){cout<<")";}  
}  
  
long int gys(long int x,long int y)  
{  
    long int r;  
    while(y>0)  
    {  
        r=x%y;  
        x=y;  
        y=r;  
    }  
    return x;  
}  
