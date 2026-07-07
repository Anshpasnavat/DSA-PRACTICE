#include <iostream>
#include <algorithm>
using namespace std;

int maxArea(int arr[],int n)
{
    int left = 0;
    int right = n- 1;
    int maxArea = 0;

    while(left < right){
        int width = right -left;
        int smaller = min(arr[left], arr[right]);
        int currArea = width*smaller;
        maxArea = max(maxArea,currArea);
        if(arr[left]<=arr[right]){
            left++;
        }else{
            right--;
        }
    
    }
    return maxArea;
}
int main() {

    int arr[] = {2,5,6,7,8,9,7};
    int n = sizeof(arr) / sizeof(int);
    cout << maxArea(arr, n);

}