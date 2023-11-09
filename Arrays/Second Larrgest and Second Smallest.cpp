// For a given array of N integers, find the second largest and second smallest elements.
// Example 1: 4     5 2 13 4
// Output: 5 4

int SecondLargest(int n,vector<int> a){
    
    int largest=a[0];
    int second=-1;

    for(int i=1;i<n;i++){
        if(a[i]>largest){
            second=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>second){
            second=a[i];
        }
    }
    return second;
}

int SecondSmallest(int n,vector<int> a){

    int Smallest=a[0];
    int second=INT_MAX;

    for(int i=1;i<n;i++){
        if(a[i]<Smallest){
            second=Smallest;
            Smallest=a[i];
        }
        else if(a[i]!=Smallest && a[i]<second){
            second=a[i];
        }
    }
    return second;
}
vector<int> getSecondOrderElements(int n, vector<int> a){
    int sdlargest=SecondLargest(n,a);
    int sdsmallest=SecondSmallest(n,a);
    return {sdlargest,sdsmallest};
}
