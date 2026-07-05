#include <iostream>
#include <algorithm>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int i = 0;

    for(int j = 1; j < n; j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }

    return i+1;
}
int main() {

    int arr[] = {1,1,2,2,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    int newLength = removeDuplicates(arr, n);
    for(int j = 0; j < ; j++) {
        cout << arr[j] << " ";
    }
}