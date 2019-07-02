#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int** arr = new int*[n];

    for(int row = 0 ; row < n; row++){
        arr[row] = new int[n];
        for(int col = 0; col < n ; col++){
            cin >> arr[row][col];
        }
    }

    for(int row = 0 ; row < n; row++){
        for(int col = 0; col < n ; col++){
            cout << arr[row][col] << " ";
        }
        cout<<endl;
    }
    cout<<endl;

    // ZigZag printing

    for(int col = 0;col < n; col++){

        if(col % 2 == 0){
            for(int row = 0;row < n; row++){
                cout << arr[row][col] << " ";
            }
        }else{
            for(int row = n-1; row >= 0; row--){
                cout << arr[row][col] <<" ";
            }
        }
    }

    return 0;
}