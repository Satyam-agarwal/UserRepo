#include <stdio.h>
#include <stdlib.h>


void main(){
	int list[10] ;
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)

	{
		scanf("%d",&list[i]);
	}
    int count;
    printf("%d",list[n-1]);
	for(j=n-2;j>=0;j--){  

          for(i=j;i<n;i++){

                if(list[i]>list[j])
                  {
                  	count=0;
                  	break;

                  }
                  else{
                    count=1;
                  }
              }
              if(count==0);
              {
              	printf("%d\n",list[j] );
              }
   
   }
}