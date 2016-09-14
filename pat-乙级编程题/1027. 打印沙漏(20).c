#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 1,left;
    char c;
    scanf("%d %c",&n,&c);
    int i = 1,max = 0;
    for (;1+(i+3)*(i-1)/2 <= n; i = i+2);
    max = i-2;
    i = i-2;
    left=n-1-(max+3)*(max-1)/2;
    for (; i >= -max; i = i-2) {
        for (int k = 0; k < (max - abs(i))/2; k++) printf(" ");
        for (int k = 0; k < abs(i); k++) printf("%c",c);
//不要再输出空格了，会报“格式错误”
        printf("\n");
        if (i == 1) i = -1;
    }
    printf("%d\n",left);
    return 0;
}
