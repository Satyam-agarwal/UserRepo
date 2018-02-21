#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main()
{
	struct NODE
	{
		int num;
		struct NODE *ptr;/* data */
	};
	typedef struct NODE NODE ;
    NODE *head,*second,*temp =0;

    head = (struct NODE*)malloc(sizeof(struct NODE)); 
  second = (struct NODE*)malloc(sizeof(struct NODE));
  temp = (struct NODE*)malloc(sizeof(struct NODE));

    int a,b;
    printf("Enter value for a\n" );
    scanf("%d",&a);
    printf("Enter value for b\n");
    scanf("%d",&b);


			head->num=a;
			head->ptr=second;
			second->num=b;
			

     
      void addnode(int x)

      {
      	second->ptr=temp;
      	temp->num=x;

      }
      addnode(785);
       for(int i=0;i<3;i++)
      {
      	temp=head;
        printf("%d\n", temp->num);
        temp=head->ptr;
        head=temp;
      }
   
   
}