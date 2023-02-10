#include <iostream>


using namespace std;

class Fraction{
	int ch, znam;
	
public:
    Fraction(int ch = 9, int znam = 3){
    	
    	try{
    		if(znam == 0){
    			
				throw "Division by zero!"; 
			}
		}catch(const char * ex){
			printf("%s\n", ex);
		}
	    this -> ch = ch;
	    this -> znam = znam;
	    
    }
    
    int get_ch() const
    {
        return ch;
    }
 
    int get_znam() const
    {
        return znam;
    }
	
	Fraction operator+(Fraction b);
	
	Fraction operator-() {
		
		return Fraction(-ch, znam); 
	}
	
	friend Fraction operator-(Fraction a, Fraction b);
	
	void print() {
		
		cout << ch << '/' << znam << endl;
	}

};

Fraction operator*(Fraction a, Fraction b);
Fraction operator/(Fraction a, Fraction b);

Fraction Fraction::operator+(Fraction b) {

	int cd = znam * b.znam; 
	int ns = ch * b.znam + b.ch * znam; 
	Fraction sum(ns, cd); 
	return sum;
}

Fraction operator-(Fraction a, Fraction b) { 
	int cd = a.znam * b.znam; 
	int ns = a.ch * b.znam - b.ch * a.znam; 
	Fraction subtr(ns, cd); 
	return subtr;
}

Fraction operator*(Fraction a, Fraction b){
	int np = a.get_ch() * b.get_ch(); 
	int dp = a.get_znam() * b.get_znam(); 
	return Fraction(np, dp); 
}

Fraction operator/(Fraction a, Fraction b){
	if(b.get_znam() == 0){
		cerr << "The divisor is equal to zero\n";
		exit(1);
	}
	
	return a * Fraction(b.get_znam(), b.get_ch());
}

bool operator <= (Fraction a, Fraction b){
	bool BR = a.get_ch() <= b.get_znam();
		
    return BR;
}
    
    
Fraction operator >= (Fraction a, Fraction b)
    {
        return a.get_ch() >= b.get_znam();
    }
    
    
Fraction operator > (Fraction a, Fraction b)
    {
        return a.get_ch() > b.get_znam();
    }
    
    
Fraction operator < (Fraction a, Fraction b)
    {
        return a.get_ch() < b.get_znam();
    }
    
    
Fraction operator == (Fraction a, Fraction b)
    {
        return a.get_ch() == b.get_znam();
    }
    
    
Fraction operator != (Fraction a, Fraction b)
    {
        return a.get_ch() != b.get_znam();
    }


int main(){
	Fraction f12(1, 7), 
	f13(3, 6), 
	fs, fd, fp, fm, fdiv; 
	
	Fraction B,M,R,BR,MR,NR;
	cout << "f12 = "; f12.print(); cout << endl;
	cout << "f13 = "; f13.print(); cout << endl;
	
	fs = f12.operator+(f13); 
	
	cout << "fs = "; fs.print(); cout << endl;
	
	fd = f12 - f13; 
	
	cout << "fd = "; fd.print(); cout << endl;
	
	fp = operator*(f12, f13); 
	
	cout << "fp = "; fp.print(); cout << endl;
	fm = -f12; 
	
	cout << "fm = "; fm.print(); cout << endl;
	fdiv = f12 / f13;
	
	cout << "fdiv = "; fdiv.print(); cout << endl;
	
	B = f12 < f13;
	cout << "B = "; B.print(); cout << endl;
	
	M = f12 > f13;
	cout << "M = "; M.print(); cout << endl;
	
	R = f12 == f13;
	cout << "R = "; R.print(); cout << endl;
	
	BR = f12 <= f13;
	cout << "BR = "; R.print(); cout << endl;
	
	MR = f12 >= f13;
	cout << "MR = "; R.print(); cout << endl;
	
	NR = f12 != f13;
	cout << "NR = "; R.print(); cout << endl;
	
	
	
	return 0;
	
}
