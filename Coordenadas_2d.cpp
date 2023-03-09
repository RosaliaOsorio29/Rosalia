#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	float x1=3; 
	float x2=-7; 
	float y1=-5; 
	float y2=6; 
	float z1=2;
	float z2=-4;
	float P1P2=0;
	
	P1P2= sqrt (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)));
	
	cout<<P1P2;
	
	return 0;
	
	}
