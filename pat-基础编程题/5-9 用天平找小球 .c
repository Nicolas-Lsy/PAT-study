/*三个球A、B、C，大小形状相同且其中有一个球与其他球重量不同。要求找出这个不一样的球。
输入格式：

输入在一行中给出3个正整数，顺序对应球A、B、C的重量。
输出格式：

在一行中输出唯一的那个不一样的球。
输入样例：

1 1 2
输出样例：

C

#include <stdio.h>

int main(void){
	int a,b,c;
	
	scanf("%d %d %d", &a,&b,&c);
	if(a-b==0)
		printf("C");
	else if(a-c==0)
		printf("B");
	else if(b-c==0)
		printf("A");
	
	return 0;
}*/

#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<time.h>

#define M 4

int N = 2048; int END = 0; int SCORE = 0;

void draw(int Arr[M][M]);

void play(int Arr[M][M]);

char playValue();

void randLocate(int Arr[M][M]);

int gameover(int Arr[M][M]);

int main(){

printf("\n\n\n\n\n\n\n\n\n\n\n                     欢迎来到2048，在此确定您想玩的游戏难度\n");
printf("                     PS:如果安全程序显示有“全局消息钩子注入”警报，请不要担心\n\n\n"); 
system("pause");
system("CLS");
printf("\n\n\n\n\n\n\n\n\n\n\n                      请确定您希望的通关分数(例如2048或4096)\n");
system("pause");
system("CLS");
printf("\n\n\n\n\n\n\n\n\n\n\n                      当然您亦可以选择低难度的32or64or128...\n");
system("pause");
system("CLS");
printf("\n\n\n\n\n\n\n\n\n\n\n                               我不会鄙视你的╮(╯▽╰)╭ \n"); 
system("pause");
system("CLS");
printf("\n\n\n\n\n\n\n\n\n\n\n                                    请输入难度数值:");



scanf("%d",&N);
system("CLS");
printf("\n\n\n\n\n\n\n\n\n                                      您选定的难度为%d",N);
printf("\n\n\n                                      现在开始游戏吧(。?`ω′?)  \n"); 
system("pause");
system("CLS");

int Arr[M][M]={0};

draw(Arr);

while(1){

play(Arr);
randLocate(Arr);
system("CLS");
draw(Arr);

int flag = gameover(Arr);
if(flag==1){
    printf("\n\n                          您取得胜利\n");
    while(1){
    }
    return 0;

}

if(END==1){
    printf("\n\n                          您输了\n");
    while(1){
    }
    return 0;
}


}


return 0;
}

void draw(int Arr[M][M]){

int i=0;
printf("您目前分数为%d\n",SCORE);
for(int k=0;k<8;k++){
    if(k%2==0){
        printf("—————————————");
    }else{            
        printf("| ");
        for(int j=0;j<4;j++){
            printf("%4d",Arr[i][j]);
            printf(" |");
        }
        i++;                        
    }

    printf("\n");
}    
printf("—————————————\n");
}

char playValue(){ printf("输入操作(w,a,s,d):"); char x='\0';
while(x=='\0'){ //操作数判定，不是wasd则重新输入 x=getch(); if((x!='w')&&(x!='a')&&(x!='s')&&(x!='d')){ x='\0'; printf("\n操作数错误,输入操作:"); }
}
printf("%c\n",x);
return x;
}

void play(int Arr[M][M]){

int v = playValue();

if(v == 'd'){                //操作数为d，即右移时 

    for(int x=0;x<M;x++){
        for(int z=0;z<M;z++){        //    每行最多操作三次 
            for(int y=M-2;y>=0;){

                if(Arr[x][y+1]==0){
                    Arr[x][y+1]=Arr[x][y];
                    Arr[x][y]=0;
                    y--;
                }else if(Arr[x][y+1]==Arr[x][y]){

                        Arr[x][y+1] *= 2;
                        Arr[x][y] = 0;
                        y--;
                    }else if(Arr[x][y+1]!=Arr[x][y]){
                        y--;
                    }

            }
        }
    }

}

if(v == 'a'){

    for(int x=0;x<M;x++){
        for(int z=0;z<M;z++){        //    每行最多操作三次 
            for(int y=1;y<M;){

                if(Arr[x][y-1]==0){
                    Arr[x][y-1]=Arr[x][y];
                    Arr[x][y]=0;
                    y++;
                }else if(Arr[x][y-1]==Arr[x][y]){

                        Arr[x][y-1] *= 2;
                        Arr[x][y] = 0;
                        y++;
                    }else if(Arr[x][y-1]!=Arr[x][y]){
                        y++;
                    }

            }
        }
    }

}


if(v == 'w'){

    for(int y=0;y<M;y++){
        for(int z=0;z<M;z++){
            for(int x=1;x<M;){

                if(Arr[x-1][y]==0){
                    Arr[x-1][y]=Arr[x][y];
                    Arr[x][y]=0;
                    x++;
                }else if(Arr[x-1][y]==Arr[x][y]){

                        Arr[x-1][y] *= 2;
                        Arr[x][y] = 0;
                        x++;
                    }else if(Arr[x-1][y]!=Arr[x][y]){
                        x++;
                    }

            }
        }
    }

}

if(v == 's'){

    for(int y=0;y<M;y++){
        for(int z=0;z<M;z++){
            for(int x=M-2;x>=0;){

                if(Arr[x+1][y]==0){
                    Arr[x+1][y]=Arr[x][y];
                    Arr[x][y]=0;
                    x--;
                }else if(Arr[x+1][y]==Arr[x][y]){

                        Arr[x+1][y] *= 2;
                        Arr[x][y] = 0;
                        x--;
                    }else if(Arr[x+1][y]!=Arr[x][y]){
                        x--;
                    }

            }
        }
    }

}

printf("移动完成");
}

void randLocate(int Arr[M][M]){ int flag = 0; for(int i=0;i<M;i++){ for(int j=0;j<M;j++){ if(Arr[i][j]==0){

            flag++;                
        }

    }
}
if(flag==0){
    END = 1;
    return;        
}

srand(time(NULL));    
int t = rand()%flag+1;

int temp = 0;
for(int i=0;i<M;i++){
    for(int j=0;j<M;j++){
        if(Arr[i][j]==0){

            temp++;                
        }
        if(temp==t){
            printf("\n随机数生成位置%d  %d\n",i,j); 

            Arr[i][j] = 2;
            SCORE += 2;
            return;

        }

    }
}    
}

int gameover(int Arr[M][M]){

for(int i=0;i<M;i++){
    for(int j=0;j<M;j++){

        if(Arr[i][j]==N){
            return 1;                
        }
    }        
}

return 0;
}
