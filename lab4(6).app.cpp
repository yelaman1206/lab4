#include <iostream>
using namespace std;
int main(){
    int m,n,k;
    cin>>n>>m>>k;
    if(n==k || m==k || k%min(n,m)==0)
        cout<<"yes";
    else cout<<"no";
return 0;
}

