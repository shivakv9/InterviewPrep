#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool Arepair(char opening,char closing){

    if(opening == '[' && closing == ']') return true;
    else if(opening == '{' && closing == '}') return true;
    else if(opening == '(' && closing == ')') return true;
    return false;
}

bool balanced(string s){

    stack <char> st;

    for(int i = 0;i < s.length();i++){
        if(s[i] == '[' || s[i] == '(' || s[i] == '{') {
            st.push(s[i]);
            continue;
        }else if(s[i] == ']' || s[i] == ')' || s[i] == '}'){
            if(st.empty() || !Arepair(st.top(),s[i]))
                return false;
            else
                st.pop();
        }
    }
    return st.empty()? true:false;
}    
int main(){

    string s;

    cout<<"Enter an expression: ";
    cin>>s;
    
    if(balanced(s)){
        cout<<"Balanced";
    }else{
        "Not Balanced";
    }
    cout<<endl;
    system("pause");

    return 0;
}