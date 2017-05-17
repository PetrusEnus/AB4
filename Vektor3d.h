#ifndef VEKTOR3D_H
#define VEKTOR3D_H

class Vektor3d{
    float x, y, z;
    unsigned int i, j; 
public:
    Vektor3d(float a, float b, float c);
    Vektor3d();
    ~Vektor3d();
    
    void get();
    
    friend bool operator + (const Vektor3d& op)const;
};

#endif /* VEKTOR3D_H */

