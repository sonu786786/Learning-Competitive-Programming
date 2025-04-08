// Lower Bound : returns the smallest index whose value is greater than or equal to the given target
#include<bits/stdc++.h>
using namespace std;
int Lower_Bound(int n, vector<int> arr, int target){
    int l = 0; int r = n-1;
    int ans = n;
    while(l<=r){
     int mid = (l+r)/2; // mid = l+(r-l)/2
     if(arr[mid] >= target){
        ans = min(mid,ans);
        r = mid-1;
     }
     else{
        l = mid+1;
     }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<"no. should present at index: "<< Lower_Bound(n,arr,target);
    return 0;
}
//TC : O(log n with base 2)
//array should be sorted