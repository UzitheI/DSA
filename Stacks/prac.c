#include<stdio.h>
#include<stdlib.h>
#define size 5

struct stack{
    int top;
    int s[size];

}st;

int isFull(){
    if(st.top>=size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int item){
    st.top++;
    st.s[st.top]=item;
}

int isEmpty(){
    if(st.top<0){
        return 1;
    }
    else{
        return 0;
    }
}

int pop(){
    int item;
    item=st.s[st.top];
    st.top--;
    return (item);
}

int main(){
    int choice,item;
    char ans;
    do{

    printf("Enter the choice that you want to pick, 1 is for pop,2 is for push,3 is to know if the stack is empty and 4 is to exit");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    printf("Enter the number you want to push:");
    scanf("%d",&item);
    if(isfull()){
        printf("Stack is full");
    }
    else{
        push(item);
    }
        break;
    case 2:
    if(isEmpty()){
        printf("there is no items present in the stack");
        
    }
    else{

    item=pop();
    printf("The number that has popped from the stack is %d",item);
    }
    break;
    
    case 3:
    if(isEmpty()){
        printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }
    case 4:
    exit 0;

    default:
        break;
    }
    }while(ans=="Y"||ans=='y');

    return 0;

}