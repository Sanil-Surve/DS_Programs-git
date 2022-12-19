#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define n 5

int main()
{
	int queue[n], ch=1, front=-1, rear=-1, i, num;
	
	// clrscr();
	printf("Queue using Array ");
	printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
	
	while(ch)
	{
		printf("\nEnter the choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				if(rear == n - 1)
				{
					printf("\n Queue is Full");
				}
				else 
				{
					if(front == -1)
					front = 0;
					printf("\nEnter No: ");
					scanf("\nEnter No: ");
					rear = rear + 1;
					queue[rear] = num;
				}
				break;
			case 2:
				if(front == -1)
				{
					printf("\nQueue is empty ");
				}
				else
				{
					printf("\n Deleted Element is %d", queue[front++]);
					// x ++
				}
				break;
			case 3:
				printf("\n Queue Elements are:\n");
				if(front == -1)
				{
					printf("\n Queue is Empty");
				}
				else
				{
					for(i = front; i <= rear; i++)
					{
						printf("%d", queue[i]);
						printf("\n");
					}
					break;
				
			case 4:
				exit(0);
		  	default:
				printf("Wrong Choice: please see the options");
	       	}
		}
	}
	return 0;
}
