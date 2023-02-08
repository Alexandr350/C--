#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>


using namespace std;


void divide(int del);
void readFile();
int main(){
	int del;
	scanf("%i", &del);
	divide(del);
	
	try{
		readFile();
	}catch(const std :: exception){
		
		printf("Fial not open");
	}
	
	
}

void divide(int del){
	try{
		if(del == 0)
			throw "Division by zero!";
		int result = 1024 / del;
		printf("%d\n", result);
	}
	catch(const char * ex) {		
		printf("Divide by zero\n");
	}
}
class FileWasNotOpenedException : public exception{
	
public:
    FileWasNotOpenedException(int Error) : exception(){
        this->Error=Error;
    }
    int GetError() {return this->Error;}
  
private:
    int Error;
	
};


void readFile(){
	
	ifstream in;      
	in.open("D:\\text.txt");
	if (!in.is_open())
	{
		throw FileWasNotOpenedException(1);
		
		
	}
	in.close();
}


