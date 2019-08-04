#include<bits/stdc++.h>
using namespace std;
int main() {

	int cur_sum,n,target;
    cin >> n >> target;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int sum = 0,fsum;
    for(int i = 0; i < n; i++){ 
        cur_sum = arr[i];
        for(int j = i+1; j <= n ; j++){
            if(cur_sum == target){
                cout<<"true"<<endl;
                for(int k = i;k < j; k++){
                    cout<<arr[k]<<" ";
                }
                fsum = true;
            }
            if(cur_sum > target || j > n){
                break;
            }
            cur_sum += arr[j];
        }
        if(fsum){
            break;
        }
    }
}