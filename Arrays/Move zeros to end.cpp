//Given an array move all zeros to the end.
//Input: N = 5    arr[] = {1, 2, 0, 4, 3}
//Output: 1 2 4 3 0

vector<int> moveZeros(int n, vector<int> a) {
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return a;
    else{
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
    }
}
