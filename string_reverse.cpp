#include <iostream>
using namespace std;

int main() {
    int maxSize = 1000; 
    char* str = new char[maxSize];

    cout << "Enter a string: ";
    cin.getline(str, maxSize);  

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    delete[] str;

    return 0;
}
