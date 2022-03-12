#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0, sum=0;
    char arr[81];
    for(int i=0; i<n; i++){
        cin>>arr;
        for(int j=0; arr[j]!=' '; j++){
            if(arr[j]=='O'){
                c+=1;
            }
            else if(arr[j]=='X'){
                c=0;
            }
            else
            {
                break;
            }
            sum+=c;
        }
        cout<<sum<<"\n";
        c=0;
        sum=0;

    }
    return 0;
}