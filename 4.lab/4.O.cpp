#include <iostream>
using namespace std;
int main(){
    int n, max=-1e9, p1, p2;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(i==j){
                if(a[i][j]>max){
                    max=a[i][j];
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(max==a[i][j]){
                p1=i+1;
                p2=j+1;
            }
        }
    }
    cout<<"Maximum element is: "<<max<<" "<<"with coordinates: "<<p1<<";"<<p2;
    return 0;
}