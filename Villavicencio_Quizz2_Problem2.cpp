#include <iostream>
#include <string>
using namespace std;

/*
Declare an Integer array of size 10
Define and call function to load the array with values of 5 to 50 by 5 passing the array and any additional parameter needed.
Define and call a Function to print all values of the array passing the array anf any additional parameters needed.
*/

const int Size = 10;

void loadArray(int *a, int size){
    for (int i = 0; i < size; i++){
        a[i] = i * 5 + 5;
    }
}

void print(int *a, int size) 
{
    for(int i=0; i<size; ++i) {                         
        std::cout << a[i] << " ";                       
    }
    std::cout << "\n";
}

int main() {
    int numbers[Size] = {5,10,15,20,25,30,35,40,45,50};

    loadArray(numbers, Size);

    print(numbers,Size);
}

