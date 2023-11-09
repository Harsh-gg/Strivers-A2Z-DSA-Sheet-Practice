//Sort the array using bubble sort
//Input: N=5   arr[] = {4,1,3,9,7}
// Output: 1 3 4 7 9

/*
    Time Complexity : O(n ^ 2)
    Space Complexity : O(1)
*/

void bubbleSort(vector<int>& arr, int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			// If jth element is greater than 'j + 1' th element
			// swap them
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}