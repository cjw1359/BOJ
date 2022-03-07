#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            cout<<" ";
        }
        for(int p=1; p<=i+1; p++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}