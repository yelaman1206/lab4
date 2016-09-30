#include<iostream>
using namespace std;

int main(){
	int k,m,n;
	cin>>k>>m>>n;
	if(n%k==0)
	cout<<"  "<<(n/k)*m*2;
	else if(n<=k)
	cout<<"  "<<n*m*2;
	else if (n>=4 && n%4!=0)
	cout<<"  "<<8*m*(n%4);
	return 0;
}
