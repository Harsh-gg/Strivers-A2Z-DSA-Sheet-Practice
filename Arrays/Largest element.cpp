//Given an array of size N, find the largest element in the array.
//Input: N = 5    arr[] = {1, 8, 7, 56, 90}
//Output: 90
#include <bits/stdc++.h> 
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largest=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]>largest)
            largest=arr[i];
    }
    return largest;
}
