#include<bits/stdc++.h>
using namespace std;
int Binary_Search(int n, vector<int> arr, int target){
    int l = 0; int r = n-1;
    while(l<=r){
     int mid = (l+r)/2; // mid = l+(r-l)/2
     if(target == arr[mid]) return mid;
     else if(target>arr[mid]){
        l = mid+1;
     }
     else{
        r = mid-1;
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
    cout<<"target present at index: "<< Binary_Search(n,arr,target);
    return 0;
}
//TC : O(log n with base 2)
//array should be sorted