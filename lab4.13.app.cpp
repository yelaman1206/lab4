#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>0&&b>0&&c>0&&d>0 || a>0&&b<0&&c>0&&d<0 || a<0&&b<0&&c<0&&d<0||a<0&&b>0&&c<0&&d>0)
	cout<<"yes";
	else cout <<"no";
	return 0;
	
} 
