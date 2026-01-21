#include <bits/stdc++.h>
using namespace std;
 int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int maxSum = INT_MIN;

    for(int i = 0; i<n; i++){
        for(int j =i;j<n;j++){
            int currSum = 0;
            for (int k = i; k <= j; k++){
                currSum  += arr[k];
            }
            maxSum = max(maxSum, currSum);
            
        }
         
    }
    cout << maxSum ; 
}