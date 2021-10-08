#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct{
    int data[MAX];
    int top;
}Stack;

typedef struct{
    int *data;
    int top;
}Stack1;

void initialisation (Stack*);
int is_empty (Stack);
int is_full (Stack);
void push (Stack*, int );
int pop (Stack* );
int peak(Stack*);
void initialisation (Stack *p){
    p->top=-1;
}

int is_empty (Stack p){
    return (p.top==-1); 
}

int is_full (Stack p) {
     return (p.top==MAX-1);
}

void push (Stack *p, int n){
    if (p->top!=MAX-1)
       p->data[++(p->top)]=n;
    else
       printf ("\n Stack OverFlow…"); 
}

int pop (Stack *p){
    return( p->data[(p->top)--]);
}

int peek(Stack *p){
    return( p->data[(p->top)]);
}

void initialisation1 (Stack1*);
int is_empty1 (Stack1);
int is_full1 (Stack1);
void push1 (Stack1*, int );
int pop1 (Stack1* );
int peak1(Stack1*);

void initialisation1 (Stack1 *p){
    p->data=(int *) malloc(sizeof(int)*MAX); 
    p->top= -1;
}

int is_empty1 (Stack1 p){
    return (p.top==-1); 
}

int is_full1 (Stack1 p) {
    return (p.top==MAX-1);
}

void push1 (Stack1 *p, int n){
    if (p->top!=MAX-1)
        p->data[++(p->top)]=n;
    else
        printf ("\n Stack OverFlow"); 
} 

int pop1 (Stack1 *p){
    return( p->data[(p->top)--]);
    
}

int peek1(Stack1 *p){
    return( p->data[(p->top)]);
    

}

void main(){
    int m;
    printf("Enter the number: 0: Dynamic Stack 1: Static Stack\n");
    scanf("%d",&m);
    if (m==0)
    {
        Stack1 s;
        int q,x=1,p;
        initialisation1(&s);
      while (x){
        printf("Press the number: 0: push  1: pop  2: peak\n");
        scanf("%d",&q);
        if (q==0){
            printf("Enter the number you want to push:\n");
            scanf("%d",&p);
            push1(&s,p);
        }
        else if (q==1){
            if (is_empty1(s))
               printf("Empty Stack\n");
            else
               printf("The Element Popped: %d\n",pop1(&s));
        }
        else{
            if (is_empty1(s))
               printf("Empty Stack\n");
            else
               printf("%d\n",peek1(&s));
        }
        printf("Continue? press 1: yes  0: no\n");
        scanf("%d",&x);
        }
    }

    else {
       Stack s;
       int x=1,q,p;
       initialisation(&s);
       while (x){
          printf("Press the number: 0: push  1: pop  2: peak\n");
          scanf("%d",&q);
          if (q==0){
            printf("Enter the number you want to push:\n");
            scanf("%d",&p);
            push(&s,p);
          }
          else if (q==1){
              if (is_empty(s))
                printf("Empty Stack\n");
              else
                printf("The Element Popped: %d\n",pop(&s));
          }
          else{
              if (is_empty(s))
                printf("Empty Stack\n");
              else
                printf("%d\n",peek(&s));
          }
        printf("Continue? press 1: yes  0: no\n");
        scanf("%d",&x);
        }   
    }
}
