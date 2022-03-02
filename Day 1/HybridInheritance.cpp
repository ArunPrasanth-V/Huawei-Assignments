/*
Hybrid Inheritance
Hybrid Inheritance is implemented by combining more than one type of inheritance
*/

#include<iostream>
using namespace std;

class ClassA {
public:
	int a;
};

class ClassB : public ClassA {
public:
	int b;
};

class ClassC : public ClassA {
public:
	int c;
};

class ClassD : public ClassB, public ClassC {
public:
	int d;
};

int main()
{
	ClassD obj;

	obj.ClassB::a = 10; 
	obj.ClassC::a = 100; 

	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	cout << " a from ClassB : " << obj.ClassB::a<<endl;
	cout << " a from ClassC : " << obj.ClassC::a<<endl;
	
	cout<<"Elements from ClassD"<<endl;
	cout << "b : " << obj.b<<endl;
	cout << "c : " << obj.c<<endl;
	cout << "d : " << obj.d <<endl;
}
