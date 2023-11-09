//Given an array rotate it by K elements in left direction.
//Input: N = 5    arr[] = {1, 2, 3, 4, 5}    K=2
//Output: 3 4 5 1 2

vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
    k=k%n;

    int temp[k];

    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }

    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }

    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }
    return arr;
}
