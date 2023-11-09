//Given an array rotate it by one element in left direction.
//Input: N = 5    arr[] = {1, 2, 3, 4, 5}
//Output: 2 3 4 5 1

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    return arr;
}
