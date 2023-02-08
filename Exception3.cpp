#include <stdio.h>
#include <string>
#include <vector>
#include <string.h>
#include <sstream>
#include <iostream>
using namespace std;
void split(string str, int size, char ch, char &operant, int &A, int &B);
int calc(int A, int B, char operant);
string input_vvod();

int main(){
	
	string user_vvod = input_vvod();
	int size = user_vvod.size();
	int A = 0, B = 0, result=0;
	char operant, ch;

	try{
		split(user_vvod, size, ch, operant, A, B);
	}catch(char const * ){
		cout <<  "incorrect input" << endl;
	}
	
	result = calc(A, B, operant);
	
	cout << result << endl;
	
	return 0;
}

string input_vvod(){
	string str;
	getline(cin,str);
	return str;
}

void split(string str, int size, char ch, char &operant, int &A, int &B){
	
	if(size == 3){

		for(int i = 0; i < size; i++){
			ch = str.at(i);
			if(isdigit(ch) && i == 0){
				A = ch-'0';
			}else if ((ch == '*' || ch == '/'|| ch == '+' || ch == '-') && i == 1){
				operant = ch;
			}else if(isdigit(ch) && i == 2){
				B = ch-'0';
			}else{
				throw "";
			}
		}
	}else{
		throw "";
	}
	
	
}

int calc(int A, int B, char operant){
	int result = 0;
	char s ='*';
	
	if(operant == s){
		result = A*B;
	}
	if(operant == '/'){
		result = A/B;
	}
	if(operant == '-'){
		result = A-B;
	}
	if(operant == '+'){
		result = A+B;
	}
	return result;
	

}


