#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%3==0 || n%3==2 &&n!=2 )
	cout<<"yes";
	else if(n%5==0 ||n%5==3 && n!=3)
	cout<<"yes";
	else cout<<"no";
	return 0;
}
	

