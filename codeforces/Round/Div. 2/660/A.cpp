#include <iostream>

using namespace std;

int main(){
    long t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n<=30) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            if(n-30==6||n-30==10||n-30==14) {
                cout<<6<<" "<<10<<" "<<15<<" "<<(n-31)<<endl;
            } else {
                cout<<6<<" "<<10<<" "<<14<<" "<<(n-30)<<endl;
            }
        }
    }
    return 0;
}