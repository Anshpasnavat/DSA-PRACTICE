#include <iostream>
using namespace std;
#include <climits>

int maxProfit(int price[], int n) {
    int minPrice =price[0];
    int maxProfit = 0;
    int currProfit = 0;

    for(int i = 0; i < n; i++) {
        minPrice = min(minPrice , price[i]);
        currProfit = price[i]- minPrice;
        maxProfit = max(maxProfit, currProfit);
    }
    return maxProfit;
        
}

int main() {

    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxProfit(arr, n);

    return 0;
}