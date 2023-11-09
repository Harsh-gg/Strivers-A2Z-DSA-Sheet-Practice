// You have been given a sorted integer array 'a' of size 'n'. You have to remove all the duplicate elements from the array.Return length of updated array.
//n=5, a = {1,1,2,2,3}
//Output: 3
//O(1)

int removeDuplicates(vector<int> &arr, int n) {
	int i=0;
        for (int j = 1; j < n; j++) {
			if(arr[j]!=arr[i]){
				arr[i+1]=arr[j];
				i++;
			}
		}
		return i+1;
}