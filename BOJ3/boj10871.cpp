#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin>>n>>x;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a<x){
            cout<<a<<" ";
        }
    }
    cout<<"\n";

    return 0;
}