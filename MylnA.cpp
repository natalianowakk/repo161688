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
        double lnx = double log(mA);
        for (int i=0; i<10; i++){
            lnx+=pow(-1,i)/(pow(mA,i+1))*pow((mX-mA),i+1)/(i+1);
        }
        return lnx;

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
