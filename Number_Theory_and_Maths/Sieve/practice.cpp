//https://codeforces.com/problemset/gymProblem/102267/B
// #include<bits/stdc++.h>
// using namespace std;
// bool checkPrime(int n){
//     if(n==0 || n==1) return false;
//     for(int i=2;i*i<=n;i++){
//         if(n%i == 0) return false;
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(checkPrime(n-2)){
//         cout<<"2 "<<n-2;
//     }
//     else{
//         cout<<"-1";
//     }
//     return 0;
// }

//1149A - Prefix Sum Primes
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int twos = 0;
//     int ones = 0;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i] == 2) twos++;
//         else ones++;
//     }
//     vector<int> ans;
//     if(twos>0 && ones>0){
//         ans.push_back(2);
//         ans.push_back(1);
//         twos--; ones--;
//     }
//     while(twos--){
//         ans.push_back(2);
//     }
//     while(ones--){
//         ans.push_back(1);
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

//1740A - Factorise N+M
// odd + odd = even
// odd + even = odd
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n == 2) cout<<"7\n";
//         else cout<<"3\n";
//     }
//     return 0;
// }

//1861A - Prime Deletion
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         for(int i=0;i<s.size();i++){
//             if(s[i] == '1'){
//                 cout<<"13\n";
//                 break;
//             }
//             else if(s[i] == '3'){
//                 cout<<"31\n";
//                 break;
//             }
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long diff = x-y;
        if(diff>1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

