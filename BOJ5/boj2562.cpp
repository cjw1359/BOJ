#include <iostream>
using namespace std;
int main(){
    int arr[9];
    for(int i=0; i<9; i++){
        cin>>arr[i];
    }
    int c=1;
    int max=arr[0];
    for(int i=0; i<9; i++){
        if(arr[i]>max){
            c=i+1;
            max=arr[i];
        }
    }
    cout<<max<<"\n"<<c<<"\n";

    return 0;
    
}