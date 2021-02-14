#include <iostream>

int main()
{
    using namespace std;
    cout << "Computing the size of some C++ inbuilt variable types" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;

    cout << "The output changes with compiler, hardware and OS" << endl;
    return 0;
}
