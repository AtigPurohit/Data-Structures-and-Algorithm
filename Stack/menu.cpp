/*Stack Program
 **/
   
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define sz 10
struct stk
{
  char arr[sz];
  int top;
};
typedef struct stk Stack;

void initialize(Stack *p);
int isFull(Stack *p);
int isEmpty(Stack *p);
void push(Stack *p,char v);
char pop(Stack *p);
void dispstack(Stack *p);
char peek(Stack *p);

int main()
{
  Stack *s;
  char r,v;
  int choice,val;
  
  s=(Stack *)malloc(sizeof(Stack));
  do
   {
    system("cls");
    printf("\n----Menu----");
    printf("\n1:Initialize stack");
    printf("\n2:Disp stack");
    printf("\n3:Push an elelement");
    printf("\n4:Pop an element");
    printf("\n5:Peek element");
    printf("\n9:Exit");
    printf("\nEnter you choice:");
    scanf("%d",&choice);
    switch(choice)
     {
        case 1:
            system("cls");
            initialize(s);
            break;
		case 2:
			system("cls");
			dispstack(s);
			getch();
			break;
		case 3:
			system("cls");
			fflush(stdin); // 
			printf("\nEnter value:");
			scanf("%c",&v);
			push(s,v);
			break;
		case 4:
			system("cls");
			r=pop(s);
			printf("\n%c is popped",r);
			getch();
			break;
		case 5:
			system("cls");
			r=peek(s);
			printf("\n%c is at top of thestack",r);
			getch();
			break;
		case 9:
			printf("Good bye");
			break;
	 }
	}while(choice!=9);
	return(1);
}

void initialize(Stack *p)
{
	if(p!=NULL)
		p->top=-1;
	else
		exit(0);
}

void dispstack(Stack *p)
{
	int i,n;
	system("cls");
	printf("\n");
	if(!isEmpty(p))
	{
		for(i=p->top;i>=0;i--)
			printf("\n%c",p->arr[i]);
	}
	else
		printf("Stack is empty");
}

int isFull(Stack *p)
{
	return(p->top==sz-1 ? 1:0);
}

int isEmpty(Stack *p)
{
	return(p->top==-1 ? 1:0);
}

void push(Stack *p, char v)
{
	if(!isFull(p))
	{
		p->top++;
		p->arr[p->top]=v;
	}
	else
	{
		printf("Stack overflows.");
	}
}

char pop(Stack *p)
{
	char t;
	if(!isEmpty(p))
	{
		t=p->arr[p->top];
		p->top--;
		return(t);
	}
	else
	{
		printf("\nStack underflows");
		return '\0';
	}
}

char peek(Stack *p)
{
	if(!isEmpty(p))
		return(p->arr[p->top]); //returns the top value of the stack
	else
		return '\0';
}

