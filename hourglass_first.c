#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
   int large=-100;
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    for(int i=0;i<4;i++)
    {   for(int j=0;j<3;j++)
    { //   printf("normal:%d\n",arr[i][j]);
        
                    
                      int sum=0;
                        for(int k=0;k<3;k++){
                    //        printf("%d\t",arr[i][k+j]);
                            sum=sum+arr[i][k+j];
                                            }
                         sum=sum+arr[i+1][j+1];
                //   printf("middle%d\tsum%d\t",arr[i+1][j+1],sum);
                         for(int k=0;k<3;k++){
                        //    printf("%d\t",arr[i+2][k+j]);
                            sum=sum+arr[i+2][k+j];
                         }
                      //  printf("sum%d\n",sum);
                             if(large<sum) { large=sum;  }
                        
                      //   printf("%d\n",large);
                    
      
    }
    
    }
    printf("%d",large);
    return 0;
}
