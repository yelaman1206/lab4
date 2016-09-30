#include<iostream>
using namespace std; 

int main(){
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	double x1=-d/c;
	if (x1==0)
	cout<<"no";
	else if (a==0 &&b==0)
	cout<<"INF";
	else cout<<" "<<-b/a;
	return 0;
	
}
