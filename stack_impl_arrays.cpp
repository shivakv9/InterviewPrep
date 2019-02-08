#include <iostream>

using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void  push(int x){
    
    if(top == MAX_SIZE - 1){
        cout<<"Error: Overflow occurs";
        return;
    }
    top++;
    A[top] = x;
    //A[++top] = x;
}
void pop(){
    if(top == -1){
        cout<<"Error: Underflow occurs ";
    }
    top--;
}
void print(){
    int i;
    cout<<"stack : ";
    for(i = 0;i <= top;i++){ 
        cout<<" "<<A[i];
    }
    cout<<endl;
}

int main(){

    push(5);
    push(10);
    push(15);
    push(20);
    pop();
    push(100);
    print();

    return 0;
}