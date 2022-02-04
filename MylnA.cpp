#include <iostream>
using namespace std;
// Dokumentacja klasy MylnA
class MylnA
{
private: /**Deklaracja metod prywatnych*/ 
    double mX; /*!< definicja zmiennych prywatnych *///zmienna double mX//
    double mA; /*!< definicje zmiennych prywatnych */ //zmienna double mX//
public: /**Deklaracja metod publicznych*/ 
    MylnA(double a=0){/** Definicja publicznej metody double*/
    mA=a;
    }
    MylnA(double x, double a=0){// *metoda z 2 paramterami*//
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
    double value(){/** Metoda value **/

    }
    void setX(double){ /** Metoda set x **/
    mX=x;
    }
    double getX(){ /** Metoda get x **//
        return mX;

    };
    void setA(double a){ /** Metoda set a **/
    mA=a;
    };
    double getA(){ /*metoda get a */
return mA;
    }
    

}
