#include <iostream>
using namespace std;

class MylnA
{
private:
    double mX;
    double mA;
public:
    MylnA(double a=0){
    mA=a;
    }
    MylnA(double x, double a=0){
    mX=x;
    mA=a;
    };
    MylnA(const mylna &obj){
    mX=obj.mX;
    mA=obj.mA;

    }

    ~MylnA(){
        mX=0;
        mA=0;

    }
    double value(){
        

    }
    void setX(double){
    mX=x;
    }
    double getX(){
        return mX;

    };
    void setA(double a){
    mA=a;
    };
    double getA(){
return mA;
    }
    

}
