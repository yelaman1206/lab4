#include<iostream>

using namespace std; 

int main(){
	double a,b;
	cin>>a>>b;
    if (a==0 && b!=0)
	cout<<"no";
	else if (a==0 && b==0)
	cout<<"INF";
	else cout<<" "<<-b/a;
	return 0;
	
}
