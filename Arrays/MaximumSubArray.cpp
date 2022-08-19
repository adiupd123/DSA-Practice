#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums){
    int maxSum = INT16_MIN, sum;

    // O(n^3) Time Complexity

    // for(int i=0;i<nums.size();i++){
    //     for(int j=i;j<nums.size();j++){
    //         sum = 0;
    //         for(int k=i;k<=j;k++)
    //             sum+=nums[k];
    //         if(sum>maxSum)
    //             maxSum=sum;
    //     }
    // }
    
    // O(n^2) Time Complexity 
    
    // for(int i=0;i<nums.size();i++){
    //     sum = 0;
    //     for(int j=i;j<nums.size();j++){
    //         sum+=nums[j];
    //         if(sum>maxSum)
    //             maxSum=sum;
    //     }
    // }

    // Kadane's Algorithm O(n) Time Complexity
    maxSum = nums[0];    
    sum = 0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(maxSum<sum)
            maxSum = sum;
        if(sum<0)
            sum = 0;
    }
    return maxSum;
}
int main(){
    vector<int> nums;
    int N;
    cout<<"Enter the size of Array:\n";
    cin>>N;
    int element;
    for(int i=0;i<N;i++){
        cin>>element;
        nums.push_back(element);
    }
    cout<<maxSubArray(nums);
}