#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){

    int a[] = {1,2,3,4,5};
    int N = sizeof(a)/sizeof(a[0]);

    for(int i = 0;i < N; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int j = N-1 ;j >= 0; j--){
        cout<<a[j]<<" ";
    }
    cout<<endl;    
    vector<int> v{30,56,73,5,90,12};
    vector<int> v1(v);

    vector<int>::iterator it;

    sort(v1.begin(),v1.end());

    for(it = v1.begin(); it != v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}