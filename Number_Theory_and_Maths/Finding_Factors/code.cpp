#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void func(int n) {
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            cout<<i<<" ";
            if(i != (n/i)){
                cout<< n/i<<" ";
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        func(n);
    }
    return 0;
}