#include<stdio.h>
typedef struct
{
	char name[11], date[11], guhua[17], shouji[17], x;
} Info;
int main()
{
	Info f[10];
	int n,i, nn, t;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%s%s %c%s%s", f[i].name, f[i].date, &f[i].x, f[i].guhua, f[i].shouji);
	scanf("%d", &nn);
	while (nn--) {
		scanf("%d", &t);
		if (t < n&&t>=0)
			printf("%s %s %s %c %s\n", f[t].name, f[t].guhua, f[t].shouji,f[t].x,f[t].date);
		else
			printf("Not Found\n");
	}
	return 0;
}


