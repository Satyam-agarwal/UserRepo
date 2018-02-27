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
	typedef struct NODE NODE ;
    NODE *head,*temp1,*temp ;
    int pos;

    head = (struct NODE*)malloc(sizeof(struct NODE)); 
  
  
  
   int choice,input;
   printf("Enter your choice 0:add 1:quit\n");
   

          head->ptr=NULL;
           

               void createnode(int data){

                if(head->ptr==NULL)
                  {temp = (struct NODE*)malloc(sizeof(struct NODE));   /* every time this malloc need to be created no only once */
                    temp->num=data;
                  
                  head->ptr=temp;
                  temp->ptr=NULL;

                 
                 } else
                  {
                    temp1 = (struct NODE*)malloc(sizeof(struct NODE));    /* every time this malloc need to be created no only once */
                    temp1->num=data;
                    
                    temp->ptr=temp1;
                    temp1->ptr=NULL;
                    temp=temp1;
                    
                  }

               printf("%p",head->ptr);
               }
               void addnode(int pos,int data)
               {
                temp1=head;
                temp = (struct NODE*)malloc(sizeof(struct NODE));
                for(int i=0;i<pos;i++){
                  temp1=temp1->ptr;

                }
                temp->num=data;
                temp->ptr=temp1->ptr;
                temp1->ptr=temp;
                temp=temp1;
               }
  
                             
           void diplay()
                      { temp=head->ptr;
                        while((temp->ptr)!=NULL)
                        {
                          printf("%d\n", temp->num);
                          temp=temp->ptr;
                        }
                        printf("%d\n", temp->num);
                      }

          while(1){ 
                      printf("enter choice\n");
                      scanf("%d",&choice);
        switch(choice) {
          
        
                  case 0: printf("enter\n");
                          scanf("%d",&input);
                          createnode(input);
                          
                          break;
                  case 1: diplay();
                          break;
                          
                  case 3:  scanf("%d",&input);
                           scanf("%d",&pos);    
                           addnode(pos,input)  ;
  
                
                        }
        
                  }


}
       

      
          
