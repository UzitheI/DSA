#include<iostream>
using namespace std;
/*
note:
//i can either make it using array or make it using linked list

i must have an index where i want to push ie i must have an array

check if space available
if yes:
insert(push) by incrementing the top, start top with -1

if no:
stack overflow and cannot happen

for pop operation 

decrease the top with 1
check whether there is element present or not in stack
top>=0 means theere is element in the stack
then we can remove 1 element from the array

top operation 

just check whether there is element or not and then just print index[0]  if the element exists




*/
class Stack{
    //properties
    public:
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push ( int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty "<<endl;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
     



    //behavior
};

int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<"The top of the stack is"<<st.peek()<<endl;

    st.pop();
    cout<<"Top is "<<st.peek()<<endl;
    //another pop
    st.pop();
    cout<<"Top is "<<st.peek()<<endl;st.pop();
    cout<<"Top is "<<st.peek()<<endl;

    if (st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack aint empty "<<endl;
    }

}