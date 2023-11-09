//Perform Linear Search on an array return the index of the element if found else return -1.
//Input: N = 5    arr[] = {1, 2, 3, 4, 5}    K=2
//Output: 1

int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

// Time Complexity: O(n)