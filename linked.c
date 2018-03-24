#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main()
{
	struct NODE
	{
		int num;
		struct NODE *ptr;   /* num */
	};
	typedef struct NODE NODE ;
    NODE *head,*temp1,*temp ;
    int pos;

    head = (struct NODE*)malloc(sizeof(struct NODE)); 
  
  int del;
  
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

              
               }
               void addnode(int data,int pos)
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
           void delete(int n){
            temp = (struct NODE*)malloc(sizeof(struct NODE));
              temp=head;
              int count=n;
              while(count!=2){
                temp=temp->ptr;
                printf("%d\t",temp->num);
                count--;

              }
               temp1 = (struct NODE*)malloc(sizeof(struct NODE));
               temp1=temp;
               temp=temp->ptr;
               temp1->ptr=temp->ptr;






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

           void addn(int data,int n){

              temp = (struct NODE*)malloc(sizeof(struct NODE));
              temp=head;
              int count=n;
              while(count!=2){
                temp=temp->ptr;
                printf("%d\t",temp->num);
                count--;

              }
              temp1 = (struct NODE*)malloc(sizeof(struct NODE));
              temp1->num=data;
              temp1->ptr=temp->ptr;
              temp->ptr=temp1;


           }           

          while(1){ 
                      printf("enter choice\n0:Add node\n1:display\n3:add at n position\n:4:Delete at n position\n");
                      scanf("%d",&choice);
        switch(choice) {
          
        
                  case 0: printf("enter\n");
                          scanf("%d",&input);
                          createnode(input);
                          
                          break;
                  case 1: diplay();
                          break;
                          
                  case 3:  printf("Inter the value" );
                           scanf("%d\n",&input);
                           printf("Inter the position" );
                           scanf("%d",&pos);    
                           addn(input,pos)  ;
                           break;
                  case 4:  
                           scanf("%d",&del);
                           delete(del);
                           break;         

  
                
                        }
          
                  }


}
       

      
          
