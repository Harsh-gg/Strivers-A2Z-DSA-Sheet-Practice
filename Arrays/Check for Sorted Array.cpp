// You have been given an array 'a' of 'n' non-negative integers. You have to check wheather the given array is sorted in non-decreasing order or not.

// Input : n = 5, a = {1,2,3,4,5}
// Output : 1

int isSorted(int n, vector<int> a) {
    int flag=1;
  for (int i = 1; i < n; i++) {
    if (a[i] >= a[i - 1]) {
    } else {
        flag=0;
      return flag;
    }
  }
  return flag;
}
