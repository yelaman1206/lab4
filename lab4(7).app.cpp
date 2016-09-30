#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    if(k%4==0 && (k/4)%2==1)
        cout<<"YES";
    else cout<<"NO";
return 0;
}
