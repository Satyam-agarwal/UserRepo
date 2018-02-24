#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main()
{
	struct NODE
	{
		int num;
		struct NODE *ptr;/* num */
	};

	int n;
	scanf("%d",&n);


	typedef struct NODE node;
	node *head,*temp,*last;

    head=NULL;
	node addnode(int data){
		temp=(node*)malloc(sizeof(node));
		temp->num=data;
		temp->ptr=NULL;
		if(head==NULL)
		{
         head=temp;
		}  
 struct NODE* temp2 = head;
    for(int i=0;i<n-2;i++)
    {
        temp2 = temp2->ptr;
    }
 
    temp->ptr = temp2->ptr;
    temp2->ptr = temp;

	}
}