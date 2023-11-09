//Sort the array using selection sort
//Input: N=5   arr[] = {4,1,3,9,7}
//Output: 1 3 4 7 9
void selectionSort(vector<int>&arr){
    for (int i=0; i<=arr.size()-1; i++){
        int min_index = i;
        for (int j=i+1; j<arr.size(); j++){
            if (arr[j]< arr[min_index] )
            min_index = j;
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}