#include <stdio.h>
#include <iostream>
using namespace std;


class Figure{
	
public: 
	virtual void area(int x) = 0;
};

class Parallelogram : Figure{
	
protected:
	int h;

public:
	
	Parallelogram(){
	}
	Parallelogram(int hi){
		h = hi;
		
	}
	
	void area(int x){
		int sqrt = x * h;
		cout << "Parallelogram =  " << sqrt << endl;
	}
	
};

class Circle : Figure{

private:
	float p;
	
public:
	
	Circle(float pi){
		p = pi;

	}
	
	void area(int r){
		float sqrt = p * ((float)r * (float)r);
		cout << "Circle =  " << sqrt << endl;
	}
	
};

class Rectangle : Parallelogram{

private:
	int A;
	
public:
	Rectangle(int a) : Parallelogram(){
		A = a;
		
	}
	
	void area(int x){
		int sqrt = x * A;
		cout << "Rectangle =  " << sqrt << endl;
	}
	
};

class Rhombus : Parallelogram{
private:
	int height;
public:
	Rhombus(int  h) : Parallelogram(){
		height = h;
	}
	
	void area(int x){
		int sqrt = x * height;
		cout << "Rhombus =  " << sqrt << endl;
	}
};

class Square : Parallelogram{


public:
	Square() : Parallelogram(){	};
	
	void area(int x){
		int sqrt = x * x;
		cout << "Square =  " << sqrt << endl;
	}
};


int main(){
	
	Circle circle(3.14);
	Parallelogram parallelogram(4);
	Rectangle rectangle(6);
	Rhombus rhombus(7);
	Square square;
	
	circle.area(3);
	parallelogram.area(5);
	rectangle.area(4);
	rhombus.area(4);
	square.area(4);
	
	
	
	

	return 0;
}

