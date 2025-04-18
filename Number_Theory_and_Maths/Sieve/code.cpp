#include<bits/stdc++.h>
using namespace std;
vector<bool> seive(int n){
    vector<bool> prime(n+1,true);
    prime[0] = false; prime[1] = false;
    for (int i = 2; i*i<=n; i++){
        if(prime[i] == true){
            for(int j=i*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }
    return prime;
}
int main(){
    int n;
    cin>>n;
    vector<bool> prime = seive(n);
    for(int i=0;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}
// TC of Seive of Eratosthenes : o(n log log n) (base 2)