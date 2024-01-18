#include<iostream>
using namespace std;

class Stacki{
    public:
    int top1;
    int top2;
    int *arr;
    int size;

    Stacki(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr=new int[s];
    }

    void push1(int num){
        //first we have to check whether there is any space in stack 1, for this if we decrement the top of the first stack with the top of the second we get the total number of spaces present
        if(top2-top1>1){
            //at least 1 empty space 

            top1++;
            arr[top1]=num;

        }
        else{
            cout<<"Stack overflow "<<endl;
        }
    }

    void push2(int num){
        if(top2-top1>1){
            //similar to push 1 if the space is present between top2 and top1 we can pushit 
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"Stack overflow "<<endl;
        }
    }
    int pop1(){
        //for poping we must see if there is an element, for the first stack if top1 is greater than or equal to 0, it means there is an element inside index 0
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            cout<<"STack is not stacking";
        }
    }
    int pop2(){
        //to pop in the second stack we check whether top2 is smaller than size because if the top2 is smalled than size, an element is present in the end of the array which means that there is an element in the top of the second stack
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            cout<<"void mentioned";
        }
    }
    
};

int main(){
    Stacki s(10);
    s.push1(23);
    cout << "The element at the top of stack 1 is " << s.pop1()<<endl;

    s.push2(32);
    s.push2(22);
    s.pop2();
    cout<<"The top of the second stack is "<<s.pop2();




    
    
}