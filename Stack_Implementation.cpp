#include<iostream>
using namespace std;



    class Stack
    {
        int* arr;
        int top;
        int size;

    public:

    Stack(int s)
    {

        size =s;
        top = -1;
        arr = new int[s];
    }

    // Push
    void push (int value)
    {
        if( top==size-1){
            cout<<"Stack Overflow\n";
            return;
        }
        else{
            top++;
            arr[top]= value;
            cout<<"Pushed  "<<value<<"into  the stack\n";
        }

    }
    void pop()
    {   
        if(top==-1){
            cout<<"Stack Underflow\n";
            return;
        }
        else{
            top--;
            cout<<"Poped  "<<arr[top+1]<<"from the stack\n";
        }

    }

    int peek (){

        if(top==-1){

            cout<<"stack is empty\n";
            return -1;
        }

        else{
            return arr[top];
        }
    }

    bool isEmpty(){

        if(top==-1){
            return false;
        }
        else
         return true;
    }

    int Issize(){

        return top+1;


    }

    





};

int main (){

    Stack S(5);
    S.push(5);
    S.push(5);
    S.push(5);
    
    S.push(5);
    S.push(5);
    S.push(5);
    S.push(5);
    
    

}












