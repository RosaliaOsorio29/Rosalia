#include <iostream>
#include<cmath>
#define PI 3.1416

using namespace std;

int main (){
	
    float teta=0;
    float phy=0;
    float r=10;
    float x=0;
    float y=0;
    float z=0;
    
    
   r=(sqrt((x*x)+(y*y)+(z*z)));
   teta=atan(x/y);
   phy=acos(z/(sqrt((x*x)+(y*y)+(z*z))));
   
    cout<<"("<<r<<","<<teta<<","<<phy<<")";
    
    return 0;
    }
