#include <iostream>
using namespace std;
int main(){
    int n;
    int c=0;
    int arr[42]={0,};
    for(int i=0; i<10; i++){
        cin>>n;
        arr[n%42]++;
    }
    for(int i=0; i<42; i++){
        if(arr[i]!=0){
            c++;
        }
    }
    cout<<c<<"\n";

    return 0;
}