#include<bits/stdc++.h>
using namespace std;
void leftRotateByD(int arr[], int n, int d){
    /**
     * @brief Approach 1: Naive Approach
     * Time Complexity: O(n*d)
     * Space Complexity: O(1)
     */
    // while(d--){
    //     int temp = arr[0];
    //     for(int i=0;i<n-1;i++)
    //         arr[i] = arr[i+1];
    //     arr[n-1] = temp;
    // }

    /**
     * @brief Approach 2: First Optimisation
     * Time Complexity: O(n+d)
     * Space Complexity: O(d)
     */
    // int t[d];
    // for(int i=0;i<d;i++)
    //     t[i] = arr[i];
    // for(int i=d;i<n;i++)
    //     arr[i-d] = arr[i];
    // for(int i=n-d;i<n;i++)
    //     arr[i] = t[i-(n-d)];
    /**
     * @brief Approach 3: Second Optimisation(Reversal Algorithm / Block swap Algorithm)
     * Time Complexity: O(n)
     * Space Complexity: O(1) 
     */

    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}
int main()
{
    int n, d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    leftRotateByD(arr, n, d);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}