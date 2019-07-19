#include <bits/stdc++.h>
#include <iostream>
using namespace std;

char *uniqueChar(char *str)
{
    // Write your code here
    set<char> s;
    vector<char> v;
    cout << " str : " << str << endl;
    cout << "sizeof(str) : " << sizeof(&str) << endl;
    int len = (sizeof(str) / sizeof(str[0]));
    cout << "len = " << len << endl;
    char *res = new char[len];

    while (*str != '\0')
    {
        if (s.find(*str) == s.end())
        {
            cout << *str << endl;
            s.insert(*str);
            v.push_back(*str);
        }
        str++;
    }
    /* 
    for(int i = 0; i < len ; i++){
        if(s.find(str[i]) == s.end()){
            cout << str[i] << endl;
            s.insert(str[i]);
            v.push_back(str[i]);
        }
    }
    */
    for (int i = 0; i < v.size(); i++)
    {
        res[i] = v[i];
    }
    return res;
}

int main()
{

    char input[1000000];
    cin >> input;
    cout << uniqueChar(input) << endl;
}