#include <cstdlib>
#include <iostream>
#include "Vektor3d.h"

using namespace std;

Vektor3d::Vektor3d(float a, float b, float c){
    x = 0;
    y = 0;
    z = 0;
    x = a;
    y = b;
    z = c;
}

Vektor3d::~Vektor3d() {
}

