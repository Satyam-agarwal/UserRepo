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
    NODE *head,*temp2,*temp =0;

    head = (struct NODE*)malloc(sizeof(struct NODE)); 
  temp2 = (struct NODE*)malloc(sizeof(struct NODE));
  temp = (struct NODE*)malloc(sizeof(struct NODE));
  
   int choice,input;
   printf("Enter your choice 0:add 1:quit\n");
   

   NODE* create(int num,NODE* ptr)
   

   {NODE* new_node = (NODE*)malloc(sizeof(NODE));
    if(new_node == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }
    new_node->num = num;
    new_node->ptr = ptr;
 
    return new_node;
  }
                                        NODE* append(NODE* head, int num)
                                        {
                                            if(head == NULL)
                                                return NULL;
                                            /* go to the last node */
                                            NODE *cursor = head;
                                            while(cursor->ptr != NULL)
                                                cursor = cursor->ptr;
                                         
                                            /* create a new node */
                                            NODE* new_node =  create(num,NULL);
                                            cursor->ptr = new_node;
                                         
                                            return head;
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
                          
                          break;
                  case 1: diplay();
                          return 0;
  
                
                        }
        
                  }


}
       

      
          
