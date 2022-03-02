/*
Copy Constructor
A copy constructor is a member function that initializes an object using another object of the same class.
*/

#include<iostream>
using namespace std;

class Add
{
private:
	int a, b;
public:
	Add(int x, int y) { 
    	a = x; 
    	b = y; 
	}

	// Copy constructor
	Add(const Add &s1) {
    	a = s1.a;
    	b = s1.b;
	}

	int getSum(){
	    return a + b; 
	    
	}
};

int main()
{
	Add s1=Add(10, 15); // Normal constructor
	Add s2 = s1; // Copy constructor

	cout << "Normal constructor sum= " << s1.getSum() << endl;
	cout << "Copy constructor sum = " << s2.getSum() << endl;

	return 0;
}
