#include<iostream>

using namespace std;
 int main(){
 	int a,b,c,d;
 	cin>>a>>b>>c>>d;
 	if(a==c-1&&b==d)
 	cout<<"yes";
 	else if (a=c&&b==d-1)
 	cout<<"yes";
 	else if (a=c+1&&b==d)
 	cout<<"yes";
 	else if (a=c&&b==d+1)
 	cout<<"yes";
 	else if (a=c-1&&b==d-1)
 	cout<<"yes";
 	else if (a=c-1&&b==d+1)
 	cout<<"yes";
 	else if (a=c+1&&b==d-1)
 	cout<<"yes";
 	else if (a=c+1&&b==d+1)
 	cout<<"yes";
    else cout<<"no";
 	return 0;
 }
