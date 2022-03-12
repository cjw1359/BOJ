#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    int arr[10]={0,};
    cin>>a>>b>>c;
    int k=a*b*c;
    int t;
    while(k>0){
        t=k%10;
        for(int i=0; i<10; i++){
            if(t==i){
                arr[i]++;
                break;
            }
        }
        k/=10;
    }
    for(int i=0; i<10; i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}