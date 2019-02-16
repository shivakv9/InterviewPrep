#include <iostream>
#include <vector>

using namespace std;

void Array_Man(int n,vector<vector<int>> Q){
    int i;
    vector <int>
    for (i=0; i<Q.size(); i++) 
       for (int j = 0; j < Q[i].size(); j++) 
            cout << Q[i][j] << " "; 
        cout << endl; 
   
   
}
int main(){
    
   int n=10;
   vector<vector<int> > Queries{ { 1, 5, 3 }, 
                               { 4, 8, 7 }, 
                               { 6, 9, 1 } }; 
       
    Array_Man(n,Queries);


}