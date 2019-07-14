#include<bits/stdc++.h>
using namespace std;

void frequencyChar(string s){
    
    map<char,int> m;

    for(int i = 0; i < s.length();i++){ 
        if(s[i] == 'a' || s[i] == 's' || s[i] == 'p' ){
            m[s[i]]++;
        }else{
            m[s[i]] = 0;
        }
    }
    
   cout<< m['a'] <<" "<<m['s'] << " " << m['p']<< endl;

   map<char,int>::iterator it;
   for(it = m.begin(); it != m.end(); it++){
       cout<< it->second << " ";
   }
   cout<<endl;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    frequencyChar(s);
	return 0;
}