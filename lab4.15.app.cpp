#include<iostream>
using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && a+c>b &&c+b>a)
	cout<<"yes";
	else cout<<"no";
	return 0;
	
}
