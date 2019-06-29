#include <iostream>
#include <vector>
using namespace std;

int pivotIndex2(vector<int>& nums) {
        
        int sum = 0,leftsum = 0;
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];
        }
        
        for(int i = 0; i < nums.size();i++){
            
            sum -= nums[i];
            if(leftsum == sum){
                return i;
            }
            leftsum += nums[i];
            
        }
        
        return -1; 
    }

int pivotIndex(vector<int>& nums) {
    
    int n = nums.size() - 1;
    int leftsum,rightsum;
    int i,j;

    for(int i = 0 ; i <= n ; i++){

        // for left sum
        leftsum = 0;
        for(j = 0; j < i; j++){
            leftsum += nums[j];
        }
        //for right sum
        rightsum = 0;
        for(j = i+1; j <= n ; j++){
            rightsum += nums[j];
        }

        if(leftsum == rightsum)
            return i;
    }
    return -1;     
}
int main(){

    vector<int> v = {-1,-1,0,1,1,0};
    int p;
    cout<<pivotIndex(v);
    cout<<endl;
    return 0;
}