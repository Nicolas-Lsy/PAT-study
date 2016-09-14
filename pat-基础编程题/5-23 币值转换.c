#include <stdio.h>
#include <string.h>

int main(void){
	
	char a[10];
	char *s[] = { "Y","Q", "B", "S", "W", "Q", "B", "S", ""};
	
	scanf("%s", a);

	return 0;
	
}

/*#include<stdio.h>
#include<string.h>

int main()
{
	char a[10];
	char *s[] = { "Y","Q","B","S","W","Q","B","S","" };
	scanf("%s", a);
	if (strcmp(a, "0") == 0)
		printf("a");
	else
		for (int i = 0; i < strlen(a); ++i) {
			if (a[i] == '0') {
				int j = i - 1;
				do {
					++i;
				} while (i != strlen(a) && a[i] == '0');
				if (strlen(a) - j > 5 && strlen(a) - i < 5)//´íÎóÒÑÐÞ¸Ä
					printf("W");
				if (i != strlen(a))
					printf("a");
				else
					break;
			}
			printf("%c%s", a[i] - 48 + 'a', s[8 - strlen(a) + i + 1]);
		}
	return 0;
}*/
