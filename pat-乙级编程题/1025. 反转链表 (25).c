#include <stdio.h> 

int node[100000][3];
int list[100000];

int main()
{
    int n, k, start;
    while(scanf("%d%d%d", &start, &n, &k) != EOF)
    {
        for(int i = 0; i < n; i++)
        {
            int addr, data, next;
            scanf("%d%d%d", &addr, &data, &next);
            node[addr][0] = data, node[addr][1] = next;
        }
        list[0] = start;
        int last =start;
        int count = 1;
        for(int i = 1; i < n; i++)
        {
            node[last][2] = last;
            last = list[i] = node[last][1];
            count++;
            if(node[last][1] == -1)
                break;
        }
        int s,e;
        s = 0;
        e = s + k;
        while(e <= count && e > s)
        {
            for(int j = e-1; j >= s; j--)
            {
                if(j == k-1)
                    printf("%05d %d ", list[j], node[list[j]][0]);
                else printf("%05d\n%05d %d ", list[j], list[j], node[list[j]][0]);
            }
            s = e;
            e = s+k;
        }
        for(int j = s; j < count; j++)
        {
            if(j == 0)
                printf("%05d %d ", list[j], node[list[j]][0]);
            else
                printf("%05d\n%05d %d ", list[j], list[j], node[list[j]][0]);
        }
        printf("-1\n");
    }
    return 0;
}
