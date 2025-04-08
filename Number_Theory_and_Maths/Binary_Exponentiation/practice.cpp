#include<bits/stdc++.h>
using namespace std;
long long findPow(long long a, long long b){
    if(b==0) return 1;
    long long x = findPow(a,b/2);
    long long ans;
    if(b%2 == 1){
     ans = x*x*a;
    }
    else ans = x*x;
    return ans;
}
int main(){
    long long n,m;
    cin>>n>>m;
    if(n>30){
        cout<<m<<"\n";
    }
    else{
        long long x = findPow(2,n);
        cout<<m%x<<"\n";
    }
    return 0;
}
//2^30 = 10^8 (approx)