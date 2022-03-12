#include <iostream>
using namespace std;
int main(){
    int c;
    cin>>c;
    for(int i=0; i<c; i++){
        int n;
        int s=0;
        cin>>n;
        int *arr=new int[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
            s+=arr[j];
        }
        int avg=s/n;
        int c=0;
        for(int p=0; p<n; p++){
            if(arr[p]>avg){
                c++;
            }
        }
        double k=(double)c/n*100;
        cout<<fixed;
        cout.precision(3);
        cout<<k<<"%\n";
    }


    return 0;
}