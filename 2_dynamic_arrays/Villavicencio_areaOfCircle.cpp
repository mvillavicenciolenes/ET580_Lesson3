// S. Trowbridge 2024
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    std::cout << std::endl;
    const float PI = 3.1458;
    int numOfElements = 0;

    cout << "Enter number of elements > " << endl;
    cin >> numOfElements;

    float *farray = new float[numOfElements]; // corrected dynamic array creation

    for(int i = 0; i < numOfElements; i++)
    {
        farray[i] = pow((i + 1), 2) * PI;
    }
    
    for (int i = 0; i < numOfElements; i++)
    {
        cout << "Radius = " << i + 1 << ", Area = " << farray[i] << endl; // corrected printing
    }

    delete [] farray; // don't forget to free the memory!

    return 0;
}