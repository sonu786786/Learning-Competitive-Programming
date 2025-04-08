// 1389A - LCM Problem
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//         long long l,r;
//         cin>>l>>r;
//         if(2*l>r){
//             cout<<"-1 -1\n";
//         }
//         else{
//             cout<<l<<" "<<2*l<<"\n";
//         }
//     }
//     return 0;
// }

// 1665A - GCD vs LCM
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//        long long n;
//        cin>>n;
//        cout<<n-3<<" 1 1 1\n";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
       int n;
       cin>>n;
       cout<<n+2*(n/2)+(2*(n/3))<<endl;
    }
    return 0;
}