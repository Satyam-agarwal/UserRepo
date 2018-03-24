#include <stdio.h>
#include <stdlib.h>
 #include <time.h>
struct node
{
    int info;
    char naam[20];
    struct node *ptr;
}*front,*rear,*temp,*front1,*song,*f2;
 
int frontelement();
void enq();
void deq();
void empty();
void display();
void create();
void queuesize();
void shuffle();
 void songs();
void create()
{
    front = rear = NULL;
}


int count = 0;
 
int main()
{ 
    int no, ch, e,data;
char name;
 int i, n;
   time_t t;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 50 */
   
     printf("%d\n", rand() % 50);
   
    printf("\n 1 - Enque");
    printf("\n 2 - Deque");
    printf("\n 3 - Front element");
    printf("\n 4 - Empty");
    printf("\n 5 - Exit");
    printf("\n 6 - Display");
    printf("\n 7 - Queue size");
    printf("\n 8 - Shuffle");
    create();
	

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            
            
            enq();
	
            break;
        case 2:
            deq();
            break;
        case 3:
            e = frontelement();
            if (e != 0)
                printf("Front element : %d", e);
            else
                printf("\n No front element in Queue as queue is empty");
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            queuesize();
            break;
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
	case 8:
		if(count==0)
		{printf("empty list what to shuffle?");
		}
		if(count==1)
		{printf("one element only so no need to shuffle");
		}
		else
		{songs();
		}
		break;
        }
    }
}
 
void shuffle()
{if(front->ptr!=NULL)
	{
	    songs();
	}

}

 

void queuesize()
{
    printf("\n Queue size : %d", count);
}
 

void enq()
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
	
        printf("enter song:");
        scanf("%s",rear->naam);
        front = rear;
	song=rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        
        printf("enter song:");
	scanf("%s",temp->naam);
        temp->ptr = NULL;
 
        rear = temp;
    }
    count++;
}
  void songs()
{

song=(struct node *)malloc(1*sizeof(struct node));


song=front;   
int l,m;
l=rand()%count;
for(m=0;m<l;m++)
{song=song->ptr;
}

printf("%s",song->naam);
}
void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%s ", front1->naam);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%s", front1->naam);
}
 


void deq()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Song deleted : %s", front->naam);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Song deleted : %s", front->naam);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
 

int frontelement() 
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}
 

void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");

}