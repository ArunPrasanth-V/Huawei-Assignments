/*
why local class cannot contain static data members in c++
static variables need be defined only once, generally outside of the class.
It may contain static functions though. 
*/


/*
Operator Overloading
In C++, we can make operators to work for user defined classes. 
This means C++ has the ability to provide the operators with a special meaning for a data type, 
this ability is known as operator overloading
*/


#include <iostream>
using namespace std;

class Num {
   private:
    int value;

   public:

    // Constructor to initialize Num to 5
    Num() : value(50) {}

    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Num num;

    // Call the "void operator ++ ()" function
    ++num;

    num.display();
    return 0;
}
