#include<bits/stdc++.h>
using namespace std;
// int findPow(int a, int b){
//     int p = 1;
//     for(int i=0;i<b;i++){
//         p *= a;
//     }
//     return p;
// }

// Binary Exponentiation:
// int findPow(int a, int b){
//     if(b == 0) return 1;
//     int x = findPow(a,b/2);
//     int ans = 0;
//     if(b%2 == 1){
//         ans = x*x*a;
//     }
//     else{
//         ans = x*x;
//     }
//     return ans;
// }
//TC: O(log b)

//Modular Exponentiation:
int findPow(int a, int b, int m){
    if(b == 0) return 1;
    int x = findPow(a,b/2,m)%m;
    int ans = 0;
    if(b%2 == 1){
        ans = (x%m * x%m)%m;
        ans = (ans%m * a%m)%m;
    }
    else{
        ans = (x%m * x%m)%m;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<findPow(a,b,100);
    return 0;
}