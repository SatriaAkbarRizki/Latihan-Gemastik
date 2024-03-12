#include <iostream>
#include "classesfile/information.h"
using namespace std;

class MathBasic{
    
    private:
        int numberPrivate = 10;

    
    public:
        int nambah (int value){
            return value + value;
        }

        int accesPrivate(){
            return numberPrivate;
        }

};

int main(int argc, char const *argv[])
{
    Information info;

    cout << info.about() << endl;

    MathBasic mathBasic;
    int input;

    cout << "Masukkin value: ";
    cin >> input;
    int value = mathBasic.nambah(input);
    cout << value << endl;
    cout << "Number Private: " << mathBasic.accesPrivate() << endl;
    return 0;
}
