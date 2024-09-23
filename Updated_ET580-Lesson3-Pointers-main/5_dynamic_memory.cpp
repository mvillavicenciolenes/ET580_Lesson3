#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // Allocating memory for a single integer with value 5
    int *p = new int(5); 

    // Print the dereferenced value and address
    cout << "Dereferenced value: " << *p << " - Address Value in p: " << p << " - Address of p: " << &p << endl; 

    // Correct deallocation of single dynamic integer
    delete p;

    cout << endl;

    // Allocate memory for an array of 5 integers
    int* intarr = new int[5]; 
    intarr[0] = 1234;
    intarr[1] = 12345;
    intarr[2] = 123456;
    intarr[3] = 1234567;
    intarr[4] = 12345678;

    // Print the array values
    cout << intarr[0] << endl;
    cout << intarr[1] << endl;
    cout << intarr[2] << endl;
    cout << intarr[3] << endl;
    cout << intarr[4] << endl;

    // Correct deallocation of the dynamic array
    delete[] intarr;

    // Now allocate memory for another array of 5 integers
    p = new int[5]; // Correctly allocate an array of 5 integers

    // Assign values 1 through 5 to the array
    for (int i = 0; i < 5; i++) {
        p[i] = i + 1; // Store values 1 to 5 in the array
    }

    // Print the values and their memory addresses using a loop
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << ": Value " << p[i] << " - Memory Address: " << &p[i] << endl;
    }

    // Correctly deallocate the dynamic array
    delete[] p;  

    cout << endl;
    return 0;
}
