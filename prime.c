#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){
	int in;
	int count=1;
	float prime(int input){
		int i=2;
		for(i;i<input;i++){
			if(input%i==0){
				count=0;
				break;
			}
			if(count==1)
			{
				return sqrt(input);
			}
			else 
				{
					return -1.0;
				}
		}

	}

	scanf("%d",&in);
	float a=prime(in);
	printf("%0.2f\n", a);
}