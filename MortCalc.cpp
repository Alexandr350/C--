
#include <vector>
#include <stdio.h>
#include <ctime>
#include <chrono>
#include <string>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;




class Credit{
	


private:
	
	double procent;
	int credit_term;
	
protected:
	long double begginer_summ_credit;
public:
	
	
	void setBegginer_summ_credit(long double bscr){
		if(bscr > 0){
			
			begginer_summ_credit = bscr;
				
		}else{
			cout << "Initial loan amount cannot be negative" << endl;
		}
	}
		
	void setCredit_term(int crtr){
		this -> credit_term = crtr;		
	}
	
	
	void setProcent(double proc){
		this -> procent = proc;	
	}
		
	long double getBegginer_summ_credit(){
		return begginer_summ_credit;
	}
	
	int getCredit_term(){
		return credit_term;		
	}
	
	double getProcent(){
		return procent;
	}
	
};

class UserVvod{
	
public:
	
		bool check(string str){
			return !str.empty() && str.find_first_not_of("0123456789.") == std::string::npos;
			
		}
		
		void user_vvod(Credit &credit){
			
			for(int i = 0; i <3; i++){
				string user_v;
				if(i == 0){
					cout << "Amount of credit  " << endl;
					cout << "Summa:  ";
					getline(cin,user_v);
					if (check(user_v) == true){
						credit.setBegginer_summ_credit(stod(user_v));
				}
				else{
						cout << "Incorrect data. Write the loan amount" << endl << endl;
						user_v = "";
						i--;
					}
				}
				if(i == 1){
					cout << endl << "Interest rate " << endl;
					cout << "Procent: ";
					getline(cin,user_v);
					if (check(user_v) == true){
						credit.setProcent(stod(user_v));
					}
				else{
						cout << "Incorrect data. Write the procent" << endl << endl;
						user_v = "";
						i--;
					}
				}
				if(i == 2){
					cout << endl << "Write the period of years " << endl;
					cout << "Period: ";
					getline(cin,user_v);
					if (check(user_v) == true){
						credit.setCredit_term(stoi(user_v));

						
					}
				else{
						cout << "Incorrect data. Write the period of years" << endl << endl;
						user_v = "";
						i--;
				}
			}
		}
	}
};

class Calc: Credit , UserVvod{
	
private:

	long double installment; //платеж
	double proccent;		//процент
	long double ostatoc;
	double total_amount; //обща€€ сумма
	
	
public:
	//ƒосрочное погашение 
	void early_repayment(){
		
		string early_repayment_user_v;
	
		cout << "Early_repayment " << endl;
		cout << "Summa:  ";
		while(true){
			getline(cin,early_repayment_user_v);
			if (check(early_repayment_user_v) == true){
				ostatoc = ostatoc - stod(early_repayment_user_v);
				break;
			}
			else{
				cout << "Incorrect data. Write the loan amount" << endl;
				cout << "Summa:  ";
			}
		}
	}
	
	void ost(long double cr){
		this -> ostatoc = cr;
	}
	
	long double getInstallment(){
		ostatoc = ostatoc - installment;
		return ostatoc;	
	}
	
	long double monthly_installment(int many , int month){
		return installment = (double)many / month;
	}
	
	double monthly_procent(double procent, double remainderm, int day_month, int day_year ){
		proccent = (remainderm * (procent /100) * day_month)/day_year;
		return proccent;
	}
	
	long double total_amount_metod(){
		return installment + proccent;
	}
	
	long double getOst(){
		return ostatoc;
	}
	
};

class Payment_calendar{
	
private: 
	
	int numberFirstMonth;
	int numberMonth;
	int years;
	int days_of_years;
	vector <string> time_split;
	vector <string> vecMonth = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	
public:
	
	void setYears(int y){
		this -> years = y;
	}
	
	int getYears(){
		return years;
	}
	
	string getVecMonth(int FirstMonth) const{
		return vecMonth.at(FirstMonth);
	}
	
	string getTime_split(int ind){
		return time_split.at(ind);
	}
	
	
	// генерирует дату
	static string time(){
		auto now = chrono::system_clock::now();
	    time_t end_time = chrono::system_clock::to_time_t(now);
	    string now_time = ctime(&end_time);
	    return now_time;
	}
	// метод разбивает дату на слова
	vector<string> split(string now_time){								
			
		for(int i = now_time.size() , j = 0, u = 0; i >= 0; i--){
		
			if(now_time[i] == ' ' || i == 0){
				time_split.push_back(now_time.substr(i , u));
				j = i;
				now_time.erase(j);
			}
			u++;	
		}
		
		for(int r = 0; r < time_split.size()-1; r++){	
			time_split.at(r).erase(0,1);
		}
		return time_split;
	}
	
	
	// количество дней в мес€це
	int getNumberOfDays(int month, int year){
		
		if(month == 2){
			if((year%400==0) || (year%4==0 && year%100!=0))	{
				return 29;
			}
			else{
				return 28;
			}	
		}
		
		else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||month == 10 || month==12){
			return 31;
		}
		else {	
			return 30;
		}
	} 
	
	void getNumberOfDays(int year){
		
		if((year%400==0) || (year%4==0 && year%100!=0))	{
			days_of_years = 366;
		}
		else{
			days_of_years = 365;
				
		}
	}
	
	
	// номер  мес€ца оформлени€ ипотеки
	int number_month(string month){
		
		for(int i = 0; i < vecMonth.size(); i++){
			string test = vecMonth.at(i);
			if(month == test.substr(0 , 3)){
				numberFirstMonth = i+1;
			}
		}
		return numberFirstMonth;
	}
	
	
	
	// календарь
	void calendar(Credit &creditCalc, Calc &calculator){
		int octatoc = creditCalc.getBegginer_summ_credit();
		int count_days; 
		int time = creditCalc.getCredit_term();
		int numb = number_month(time_split.at(3));
		calculator.ost(creditCalc.getBegginer_summ_credit());

		
		
		cout << endl << endl << endl << setw(3) << "Period " << setw(2) << creditCalc.getCredit_term() << " years" << endl << endl
		<< setw(13) << "Data" << setw(5) << getTime_split(2) << " " << getTime_split(3) << " " << getTime_split(0) << endl
		<< setw(33) << "Summa" << setw(7) << creditCalc.getBegginer_summ_credit() << endl << endl;
		
		
		for(int j = 0; j <= time; j++){
			cout << setw(35) << stoi(time_split.at(0)) + j << endl << endl; 
			cout <<"Mounth" << setw(15) << "Payment" << setw(15) << "Remainder" << setw(15) <<"Procent" << setw(17) << "Payment month" << endl << endl;
			getNumberOfDays(time + j);
			
			
			while(true){
				if(calculator.getOst() <= 0){
					break;
				}
				count_days = getNumberOfDays(numb + 1 , time + j);
				cout << setiosflags(ios::left) << setw(10) << vecMonth.at(numb++) 
				<< resetiosflags(ios::left) << setw(10) 
				<< fixed << setprecision(2)
				<< calculator.monthly_installment(creditCalc.getBegginer_summ_credit() , creditCalc.getCredit_term()*12) 
				<< resetiosflags(ios::left) << setw(15)
				<< fixed << setprecision(2)
				<< calculator.getInstallment()  
				<< resetiosflags(ios::left) << setw(15)
				<< fixed << setprecision(2)
				<< calculator.monthly_procent(creditCalc.getProcent(), calculator.getOst(), count_days ,days_of_years) 
				<< resetiosflags(ios::left) << setw(15)
				<< fixed << setprecision(2) 
				<< calculator.total_amount_metod() <<endl;
				
				if(j == time){
					if (numb == number_month(time_split.at(3))){
						break;
					}
				}
				
				if (numb == 12 && j != time){
					numb = 0;
					break;
				}
				
				
				
			}
			cout << "     " << endl;
			
			calculator.early_repayment();
			if(calculator.getOst() <= 0){
				cout << endl << "Loan paid off";
				break;
				
			}	
				
		}
	}
	
	
};

int main(){
	Payment_calendar calendar;
	Calc calc_user;
	UserVvod input_user;
	Credit credit_user;
	vector<string>vec = calendar.split(calendar.time());
	input_user.user_vvod(credit_user);
	calendar.calendar(credit_user , calc_user);
	
	return EXIT_SUCCESS;
}
