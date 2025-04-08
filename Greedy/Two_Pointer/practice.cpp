// Subsequence vs Substring
// A substring is a contiguous sequence of characters within a string, where the order of characters matters. For example, in the string "hello", "ell" is a substring. On the other hand, a subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements. For example, in the string "hello", "hlo" is a subsequence but not a substring because the characters are not contiguous. All substrings are subsequences, but not all subsequences are substrings.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         string a,b;
//         cin>>a>>b;
//         int i=0;
//         for(int j=0;j<m && i<n;j++){
//           if(a[i] == b[j]){
//              i++;
//           }
//         }
//         cout<<i<<"\n";
//     }
//     return 0;
// }

//1462A - Favorite Sequence
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l=0; int r=n-1;
        while(l<=r){
          cout<<arr[l];
          if(l!=r){
            cout<<" "<<arr[r];
          }
          if(l<r-1) cout<<" ";
          l++;
          r--;
        }
        cout<<endl;
    }
    return 0;
}