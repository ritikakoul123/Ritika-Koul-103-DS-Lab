//Name:Ritika Koul
//A C program demonstrating stack operations.
#include<stdio.h>
#include<stdlib.h>
void push();//Function for push  Stack operation
void pop();//Function for pop  Stack operation
void show();//Function for display Stack operation
int stack[100],n,top,x,i,c; 
//Main function
int main(){
    top=-1;
    printf("\n Enter the size of stack:\n");
    scanf("%d",&n);
    printf("stack operations using array");
    printf("\n\t 1.push \n\t 2.pop \n\t 3.show \n\t 4.exit\n\t");

    do{
        printf("enter the choice");
        scanf("%d",&c);

        switch(c){

        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;     
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            printf("exit");
            break;
        }

    }
        
}
while(c!=4);
{
    return 0;
}
     
}
void push(){
    if(top>=n-1)
        printf("OVERFLOW!\n");
    else{
        printf("Enter a value to push: ");
        scanf("%d", &x);
        top=top+1;
        stack[top] = x;
    }
}
void pop(){
    if(top<=-1)
        printf("UNDERFLOW!\n");
    else{
    printf("%d item deleted from stack!\n",x);
    top=top-1;
    }

}
void show()
 {
    if(top>=0){
        printf("The elements in stack\n");
        for(i=top;i>=0;i--)
        {
             printf("\n stack[%d]",stack[i]);  
        }
    }   
    else
    {
        printf("\n the stack is empty ");
    } 
 }

               
