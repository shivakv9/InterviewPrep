#include <iostream>

using namespace std;
#define MAX_SIZE 101

class stack
{
private:
    /* data */
    int A[MAX_SIZE];
    int top;
public:
    stack(){
        top = -1;
    };
   
    void push(int x){
        if(top == MAX_SIZE - 1){
            cout<<"Error : Overflow Occurs";
            return;
        }
        A[++top] = x;
    }
    void pop(){
        if(top == -1){
            cout<<"Error : Underflow";
            return;
        }
        top--;
    }
    void print(){
        int i;
        cout<<"stack :";
        for(i = 0;i <= top; i++){

            cout<<" "<<A[i];
        }
    }

    int Top(){
        return A[top];
    }

    int IsEmpty(){
        if(top == -1){
            return 1;
        }
        return 0;
    }
};

int main(){
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout<<"Top Element is :"<<s1.Top();
    cout<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
     if(s1.IsEmpty()){
        cout<<"Empty";
    };
    s1.pop();
    s1.print();

}