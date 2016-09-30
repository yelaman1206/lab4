#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if (d>b)
	cout<<c-b<<" "<<d-b;
	else if (d<b)
	cout<<c-a-1<<" "<<100+d-b;
	
	
	
	return 0;
}
