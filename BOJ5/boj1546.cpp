#include <iostream>
using namespace std;

int main(){
    int n;
    double max=0;

    cin>>n;
    double *arr=new double[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }

    double s=0;
    for(int i=0; i<n; i++){
        // cout<<arr[i]/max*100<<"\n";
        s+=(arr[i]/max*100);
    }
    cout<<s/n<<"\n";
}