#include <stdio.h>
#include <stdlib.h>


int main(){

	struct NODE {
		int data;
		struct NODE *ptr;
	} ;
	typedef struct NODE node;

	node *head ,*last,*temp;
	  head = (struct NODE*)malloc(sizeof(struct NODE)); 
     last = (struct NODE*)malloc(sizeof(struct NODE));
	int a,b,n;
	scanf("%d %d %d",&a,&b,&n);

	head->data=a;
	head->ptr=NULL;
	temp=head;
	while(temp->ptr!=NULL){
		temp=temp->ptr;
	}
		last->data=a;
		last->ptr=NULL;
		temp->ptr=last;
		

	


}
