#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector <int> A = {20,45,9,59,90,100};

    cout<<A[1]<<endl;
     
    sort(A.begin(),A.end()); // O(NlogN)
    
    bool present = binary_search(A.begin(),A.end(),9);//True
    
    present = binary_search(A.begin(),A.end(),2);//False

    A.push_back(300);

    for(int it : A){
        cout<<it<<" ";
    }
    cout<<endl;



}