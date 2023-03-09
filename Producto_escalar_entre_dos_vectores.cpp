#include <iostream>
#include<cmath>
#define PI 3.1416

using namespace std;

int main (){
	
    float u1, u2, u3, v1, v2, v3, w, teta, mu, mv;
    u1=1;
    u2=2;
    u3=3;
    v1=4;
    v2=5;
    v3=6;
    
    w=(u1)*(v1)+(u2)*(v2)+(u3)*(v3);
    cout <<w<<endl;
    
    mu=sqrt((u1*u1)+(u2*u2)+(u3*u3));
    mv=sqrt((v1*v1)+(v2*v2)+(v3*v3));
    teta=acos(w/(mu*mv));
    
    cout<<mu<<endl;
    cout<<mv<<endl;
    cout<<teta<<endl;
    return 0;
}
