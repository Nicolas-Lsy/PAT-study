#include<iostream>
#include<iomanip>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
//要注意当输入是 0001 、0000 、0022、0333情况。

//把数据各位都分离出来存在数组里
void yuan(int *s,int N){
	int app=0,i=0;
	app = N;
	if(app/10 == 0){
		s[0]=0;
		s[1]=0;
		s[2]=0;
		i=3;
	}else if(app/100 ==0){
		s[0]=0;
		s[1]=0;
		i=2;
	}else if(app/1000==0){
		s[0]=0;
		i=1;
	}
	for(;app>0;i++){
		s[i] = app%10;
		app = app/10;
	}
//	cout<<s[0]<<s[1]<<s[2]<<s[3];

}
//降序
void jiangxu(int *s){
	int temp=0,m,n;
	for(m=0;m<4;m++){
		for(n=m+1;n<4;n++){
			if(s[n]>s[m]){
				temp = s[m];
				s[m] = s[n];
				s[n] = temp;
			}
		}
	}	
}
//升序
void shenxu(int *s){
	int temp=0,m,n;
	for(m=0;m<4;m++)
		for(n=m+1;n<4;n++){
			if(s[n] < s[m]){
				temp = s[m];
				s[m] = s[n];
				s[n] = temp;
			}
		}
}
//组装
int zuzhuang(int *s){
	return s[0]*1000+s[1]*100+s[2]*10+s[3];
}
int main()
{
	int N,s[4],A,B,*p,sum=0;
	
	cin>>N;
	if(N ==0){
		cout<<"0000"<<" - "<<"0000"<<" = "<<"0000";
			return 0;
	}
	while(1){
		p=s;
		yuan(s,N);
		//降序
		jiangxu(s);
		//组装
		A = zuzhuang(s);

		//升序
		shenxu(p);
		B = zuzhuang(p);
		if(A==B){
			cout<<A<<" - "<<B<<" = "<<"0000";
			return 0;
		}
		sum = A-B;
		if(p[0]==0&&p[1]==0&&p[2]==0){
			if(sum/1000 == 0){
				cout<<A<<" - "<<"000"<<B<<" = "<<"0"<<sum<<endl;
			}else{
				cout<<A<<" - "<<"000"<<B<<" = "<<sum<<endl;
			}
		}else if(p[0]==0&&p[1]==0){
			cout<<A<<" - "<<"00"<<B<<" = "<<sum<<endl;
		}else if(p[0]==0){
			cout<<A<<" - "<<"0"<<B<<" = "<<sum<<endl;
		}else{
			cout<<A<<" - "<<B<<" = "<<sum<<endl;
		}
		if(sum == 6174){
			return 0;
		}

		N = sum;
	}
	return 0;
}
