#include<bits/stdc++.h>
using namespace std;
//method 1:
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
//method 2:
int nCr(int n, int r){
    if(r>n) return 0;
    if(r==0 || r==n) return 1;
    return nCr(n-1,r-1) + nCr(n-1,r);
}
int main(){
    int n,r;
    cin>>n>>r;
    // if(n<r) cout<<0;
    // cout<<fact(n)/(fact(r)*fact(n-r));
    cout<<nCr(n,r);
    return 0;
}
// use case: ways to choose r items from n options (nCr)
// nCr = (n-1)C(r-1) + (n-1)Cr
