#include <string>
#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
        struct 
        {
            string name;
            int number;
            vector<int> nilai;
        } Data;
        
        Data.name = "Bagas";
        Data.number = 1;
        Data.nilai = {1,6,3};   
    
    for (int i : Data.nilai){
        cout << i;
    }

    return 0;
}
