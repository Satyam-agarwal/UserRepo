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
    NODE *head,*temp2,*temp =0;

    head = (struct NODE*)malloc(sizeof(struct NODE)); 
  temp2 = (struct NODE*)malloc(sizeof(struct NODE));
  temp = (struct NODE*)malloc(sizeof(struct NODE));
  
   int choice,input;
   printf("Enter your choice 0:add 1:quit\n");
  
                       head->ptr=NULL;
                       int addnode(int value){
                                        if(head->ptr==NULL)
                                        {
                                          temp->num=value;
                                          temp->ptr=NULL;
                                          head->ptr=temp;
                                          printf("%p\n", head->ptr);
                                        }
                                        else{ temp2->num=value;
                                              temp2->ptr=NULL;
                                              temp->ptr=temp2;
                                              temp=temp2;
                                             
                                              printf("else %p\n", head->ptr);
                                          }

                             }
           void diplay()
                      { temp2=head->ptr;
                        for(int i=0;i<3;i++)
                        {
                          printf("%d\n",temp2->num );
                          temp2=temp2->ptr;
                        }
                      }

          while(1){
                      printf("enter choice\n");
                      scanf("%d",&choice);
        switch(choice) {
          
        
                  case 0: printf("enter\n");
                          scanf("%d",&input);
                          addnode(input);
                          break;
                  case 1: diplay();
                          return 0;
  
                
                        }
        
                  }


}
       

      
          
