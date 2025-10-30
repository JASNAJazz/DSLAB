#include <stdio.h>
int main (){
	int size;
	printf("Enter the size of the stack:");
	scanf("%d",&size);
	int stack[size];
	int top=-1,ch,vl;
	while(1){
		printf("\n ------stack menu -----\n");
		printf("1.push \n");
		printf("2.pop\n");
                printf("3.display\n");
		printf("4.Exit\n");
	printf("Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
 case 1:if(top==size-1)
	      printf("overflow");
      else
      {
	      printf("Enter value to push");
	      scanf("%d",&vl);
	      top++;
	      stack[top]=vl;
	      printf("%d pushed",vl);
      }
     break;
case 2:if(top==-1)
	      printf("underflow");
      else
      {
	      printf("%d popped",stack[top]);
              top--;
      }
      break;
case 3:if(top==-1)
	      printf("stock is empty");
      else
	      printf("stack elements:");
      for(int i=top; i>=0; i--)
      {
	      printf("%d\t",stack[i]);
      }
	      printf("\n");
      break;
case4:
      printf("Exiting");
      return 0;
default:
      printf("invalid choice");
		}
	}
}


