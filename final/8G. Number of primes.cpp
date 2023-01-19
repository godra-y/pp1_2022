#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPrime(int n){
    if(n==1)
    return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int n, k, cnt=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>k;
    for(int i=0; i<n; i++){
        if(v[i]>k && isPrime(v[i]))
        cnt++;
    }
    cout<<cnt;
    return 0;
}