#include<iostream>
#include<cmath>

using namespace std;
int main(){
	
	float x=5;
	float y=5;
	float teta=0;
	float r=0;
	
	teta=atan(y/x);
	r=sqrt((x*x)+(y*y));
	
	cout<<"("<<r<<","<<teta<<")";
	
	
	}
