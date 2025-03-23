#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool func(int n) {
    if(n==0 || n==1) return false;
    for(int i=2;i<=n-1;i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if(func(n)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}