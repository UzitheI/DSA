#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creation of stack
    stack<int> s;

    //push operation 
    s.push(2);
    s.push(3);
    
    //pop operation 

    s.pop();

    //to view the top element

    cout<<"The top element in the stack is "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    //we can also view the length of the stack using the length function

    cout<<"The length of the stack is "<<s.size()<<endl;

}