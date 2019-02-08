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
    stack(int x){
        top = -1;
    };
    ~stack();

    void push(int x){
        if(top == MAX_SIZE - 1){
            cout<<"Error : Overflow Occurs";
        }
        A[++top] = x;
    }
    void pop(){
        top--;
    }
    void print(){
        int i;
        cout<<"stack :";
        for(i = 0;i <= top; i++){

            cout<<" "<<A[i];
        }
    }
};

int main(){
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.print();


}