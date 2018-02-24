#include <stdio.h>

int main(void) {
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	if((a==b)&&(a%2!=0))
	{
	    for(i=1;i<=a;i++)
	    {
	        for(j=1;j<=b;j++)
	        {
	            if((i==(a/2)+1)||(j==(b/2)+1)||((j==1)&&(i<=a/2))||((j==a)&&(i>a/2))||((i==1)&&(j>a/2))||((i==a)&&(j<=a/2)))
	                printf("*");
	            else
	                printf(" ");
	        }
	        printf("\n");
	    }
	}
	return 0;
}