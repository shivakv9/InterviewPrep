#include <iostream>
#include <stack>
using namespace std;

stack<int> st,tmpstack;
string ns;
void insert_at_bottom(int y){

        if(tmpstack.size() == 0) {
         tmpstack.push(y); 
        } else{     
            int a = tmpstack.top(); 
            tmpstack.pop(); 
            insert_at_bottom(y);  
            tmpstack.push(a);
        }
}

void reverse_stack(){
    
    if(tmpstack.size()>0){

        int x = tmpstack.top();
        tmpstack.pop();
        reverse_stack();

        insert_at_bottom(x);
    }   
}
stack<int> sortStack(stack<int> &input){
    stack <int> tmpstack;

    while(!input.empty()){
         int temp = input.top();
         input.pop();

        while(!tmpstack.empty() && tmpstack.top() > temp){
            input.push(tmpstack.top());
            tmpstack.pop(); 
         }
        
        tmpstack.push(temp);
    }

    return tmpstack;
}

int main(){

    st.push(100);
    st.push(9);
    st.push(-1);
    st.push(4);
    st.push(50);
    st.push(600);
/*
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
*/
    tmpstack = sortStack(st);
    
    while(!tmpstack.empty()){
        cout<< tmpstack.top()<<" ";
        tmpstack.pop();
    }
    cout<<endl;

    reverse_stack();

    while(!tmpstack.empty()){
        char b = tmpstack.top();
        tmpstack.pop();
        ns+=b;
    }

    cout<<ns[3]<<" "<<ns[2]<<" "
        <<ns[1]<<" "<<ns[0]<<endl; 
/*
    cout<<"Size of stack is : "<<s.size()<<endl;
    cout<<"Top element of stack is: "<<s.top()<<endl;
    
    //s.swap(s1);

    cout<<"The Stack s = "<<endl;
    while(!s.empty()){
        cout<<s.top()<<"\t";
        s.pop();
    }
    cout<<endl;
*/
/*
    cout<<"The Stack s1 = "<<endl;
    while(!s1.empty()){
        cout<<s1.top()<<"\t";
        s1.pop();
    }
*/
   
    return 0;
}