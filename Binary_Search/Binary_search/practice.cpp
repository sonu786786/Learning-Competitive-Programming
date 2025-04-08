// 1676E - Eating Queries
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,q;
//         cin>>n>>q;
//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         sort(arr.begin(),arr.end());
//         reverse(arr.begin(),arr.end());
//         for(int i=1;i<n;i++){
//             arr[i] += arr[i-1];
//         }
//         for(int i=0;i<q;i++){
//             long long x;
//             cin>>x;
//             long long lb = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
//             long long ans = lb+1;
//             if(ans>n) cout<<"-1\n";
//             else cout<<ans<<"\n";
//         }
//     }
//     return 0;
// }

// 474B - Worms
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//         int n;
//         cin>>n;
//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=1;i<n;i++){
//             arr[i] += arr[i-1];
//         }
//         int m;
//         cin>>m;
//         while(m--){
//             int x;
//             cin>>x;
//             int lb = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
//             cout<<lb+1<<"\n";
//         }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,q;
//         cin>>n>>q;
//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         while(q--){
//             int x;
//             cin>>x;
//             if(x<arr[0]) cout<<x<<" ";
//             else cout<<arr[0]-1<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//AGGRCOW - Aggressive cows
//#binary-search
// #include<bits/stdc++.h>
// using namespace std;
// bool check(int n, int c, vector<int>&arr, int mid){
//     int cnt = 1;
//     int lastPl = arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]-lastPl>=mid){
//             cnt++;
//             lastPl = arr[i];
//         }
//     }
//     if(cnt<c) return false;
//     else return true;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,c;
//         cin>>n>>c;
//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         sort(arr.begin(),arr.end());
//         int l = arr[0];
//         int r = arr[n-1]-arr[0];
//         int ans = 0;
//         while(l<=r){
//             int mid = l+(r-l)/2;
//             if(check(n,c,arr,mid)){
//                ans = mid;
//                l = mid+1;
//             }
//             else{
//                 r = mid-1;
//             }
//         }
//         cout<<ans<<"\n";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
bool check(int n, int k, vector<int>&arr, vector<int>&have, int mid){
     for(int i=0;i<n;i++){
        int req = arr[i]*mid;
        req -= have[i];
        if(req>0){
            if(req<=k){
                k -= req;
            }
            else{
                return false;
            }
        }
     }
     return true;
}
int main(){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>have(n);
        for(int i=0;i<n;i++){
            cin>>have[i];
        }
        int l = 0;
        int r = 5000;
        int ans = 0;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(check(n,k,arr,have,mid)){
               ans = mid;
               l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout<<ans<<"\n";
    return 0;
}