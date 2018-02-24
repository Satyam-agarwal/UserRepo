#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[10],*s2;
	scanf("%[^\n]s",s);
	printf("%s\n",s );
    
	for(int i=0;i<strlen(s);i++)
	{
		printf("%d\n",atoi(s) );
		printf("%c\n",*s2);
		s2++;


	}
}