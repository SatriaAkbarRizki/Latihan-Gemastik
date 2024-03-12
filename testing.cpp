#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number[] = {1,5,7,2};   
    cout << "Jumlah elemen: " << sizeof(number) / sizeof(int) << endl;
    cout << "For loop" << endl;

    for (int i = 0; i < sizeof(number) / sizeof(int) ;i++ ){
        cout << number[i] << " "  ;
    } 

    cout << "\nFor Each" << endl;
    for (int element : number){
        cout << element << " ";
    }

    cout<< endl;

    int twodimensiion [2][3] = {
        {2,5,1},    
        {2,5,7}
    };

    for (int elementOne = 0; elementOne <2;elementOne++){
        for (int elementTwo = 0; elementTwo < 3; elementTwo++){
            cout << twodimensiion[elementOne] [elementTwo] ;
        }
        cout << endl;
    }
    return 0;
}
