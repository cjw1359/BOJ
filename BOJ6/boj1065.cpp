#include <iostream>
using namespace std;

int han();
int main(){
    han();
    return 0;
}
int han(){
    int n;
    int c=0;
    cin>>n;

    if(n<100){
        cout<<n<<"\n";
    }
    else{
        for(int i=100; i<=n; i++){
            if (((i / 100) - ((i % 100) / 10)) == (((i % 100) / 10) - (i % 100) % 10)) {
				c++;
			}
        }
        cout<<c+99<<"\n";
    }

    return 0;
}