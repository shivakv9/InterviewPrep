#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int i = 0;i < n;i++){
        arr[i] = new int[n];
        for(int j = 0;j < n;j++){
            cin>>arr[i][j];
        }
    }

    int sum1 = 0,sum2=0,sum3=0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            //for boundary elements
            if(i == 0 || j == 0 || i == n-1 || j == n-1){
                sum1 += arr[i][j];
            }
        }
    }
    
    for(int i = 1;i < n-1;i++){
        for(int j = 1;j < n-1;j++){
             
            //diagnol 1
            if(i == j){
                sum2 += arr[i][j];
            }
        }
    }
    for(int i = 1;i < n-1;i++){
        for(int j = 1;j < n-1;j++){
             
            //diagnol 2
            if((i+j == n-1) && (i != j)){
                sum3 += arr[i][j];
            }
            
        }
    }
    cout<<sum1+sum2+sum3<<" "<<endl;
 }