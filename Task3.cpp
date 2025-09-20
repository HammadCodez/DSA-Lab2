#include <iostream>
using namespace std;

// Part 1
void analyze_pointer(int* ptr) {
    cout << "Memory Location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {

    int iValue = 42;  
    cout << "Analyzing stack variable:" << endl;
    analyze_pointer(&iValue);  

    cout << endl;

    // ----- Heap Allocation -----
    int* hValue = new int;      
    *hValue = 99;               
    cout << "Analyzing heap variable:" << endl;
    analyze_pointer(hValue);    

    delete hValue;

    return 0;
}
