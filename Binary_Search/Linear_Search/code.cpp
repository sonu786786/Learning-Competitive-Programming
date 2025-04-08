#include<bits/stdc++.h>
using namespace std;
int Linear_Search(int n, vector<int> arr, int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target) return i;
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
    cout<<"target present at index: "<< Linear_Search(n,arr,target);
    return 0;
}