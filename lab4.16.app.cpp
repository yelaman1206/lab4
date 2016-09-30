#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double D=b*b-4*a*c;
	if (D>0)
	cout<<"x1="<<((-b)+sqrt(D))/(2*a)<<"x2="<<(-b-sqrt(D))/(2*a);
	else if( D==0 )
	cout<<"x="<<-b/(2*a);
	else cout<<" no";
	return 0;
	
	
}
