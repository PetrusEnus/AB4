#include <cstdlib>
#include <iostream>
#include "Vektor3d.h"

using namespace std;

i = 0;
j = 0;

Vektor3d::Vektor3d(float a, float b, float c):x(a),y(b),z(c){

}

Vektor3d::Vektor3d(){
    x=0;
    y= 0;
    z=0;
}

Vektor3d::~Vektor3d() {
}

friend bool Vektor3d::operator + (const Vektor3d& op)const{
    Vektor3d tmp(*this);
    tmp.i += op.i;
    
}

void Vektor3d::get(){
    cout << "x: " << x << "| y: " << y << "| z: " << z;
}
