#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n; 
    cin>>n;
    string s;
    queue<string> q;
    for(int i=0; i<n; i++){
        int x; 
        cin>>x;
        if(x==1){
            cin>>s;
            q.push(s);
        }
        else q.pop();
        if(q.empty()) 
        cout<<"queue is empty"<<endl;
        else 
        cout<<q.front()<<endl;
    }
    return 0;
}