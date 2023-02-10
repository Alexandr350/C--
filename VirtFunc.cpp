#include <stdio.h>
#include <iostream>
using namespace std;



class Function{

public:	
	virtual void func(int x) = 0;
};

class Ellipse : public Function{
	
	void func(int x) {
		int otvet = (x^2/25)+(9/9);
		cout << "Ellipse  =  " << otvet << endl;
	}
};

class Parabola : public Function{
	
	void func(int x) {
		int otvet = 2 * x^2 + 3 * x - 5;
		cout << "Parabola  = " << otvet << endl;
	}
};

class Hiperbola : public Function{
	
	void func(int x) {
		int otvet = (x^2 / 3^2) - (9 / 25);
		cout << "Hiperbola = " << otvet << endl;
	}
};

void print(Function &func){

   func.func(3);
}

int main(){
	
	Ellipse e;
	Hiperbola h;
	Parabola p;
	
	Function *f = &e;
	Function *f1 = &h;
	Function *f2 = &p;
	
	f ->func(3);
	f1 ->func(3);
	f2 ->func(3);
	cout << " " << endl << endl << endl;
	print(*f);
	print(*f1);
	print(*f2);

	return 0;
};
