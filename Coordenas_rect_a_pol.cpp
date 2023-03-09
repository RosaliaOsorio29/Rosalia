#include <iostream>
#include<cmath>

using namespace std;

int main (){
	
    float x=1;
    float y=-2;
    float teta=0;
    float r=0;
    
    teta=atan(x/y);
    r=sqrt((x*x)+(y*y));
    
    cout<<"("<<r<<","<<teta<<")"<<endl;
    
    return 0;
}
