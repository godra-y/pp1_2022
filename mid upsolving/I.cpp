#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        for(int k=0;k<n;k++){
            a[i][k]=max;
            cout<<a[i][k]<<" ";
        }
        max=0;
        cout<<"\n";
    }
    return 0;
}
