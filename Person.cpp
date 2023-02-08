#include <stdio.h>
#include <iostream>
using namespace std;



class Person{

private:
	string name;
	int age;
	string gender;
	int weight;
	int id;
	string pass;
		
protected: 
	int discount;
	
public:
	

	void setName(string valueName){
		this->name = valueName;
	}
	
	void setAge(int valueAge){
		this->age = valueAge;
	} 
	
	void setGender(string valueGender){
		this->gender = valueGender;
	}
	
	void setWeight(int valueWeight){
		this->weight = valueWeight;
	} 
	
	void setId(int valueId){
			this -> id = valueId;
		
	}
	
	void setPass(string valuePass){
			this -> pass = valuePass;
		
	}
	

	string getName(){
		return name;
	}
	
	int getAge(){
		return age;
	} 
	
	string getGender(){
		return gender;
	}
	
	int getWeight(){
		return weight;
	} 
	
	int getId(){
		return id;
	}
	
	string getPass(){
		return pass;
	}
	 
};

class Student : public  Person{

private:	
	string faculty;
	int group;
	int final_course;
	int scholarship;
	
	
public:
	
	void setFinal_course(int valueFinal_course){
			this -> final_course = valueFinal_course;
		
	}
	
	void setFaculty(string valueFaculty){
		if(final_course >= 1){
			this -> faculty = valueFaculty;
		}
	}
	
	void setGroup(int valueGroup){
		if(final_course >= 1){
			this -> group = valueGroup;
		}
	}
	
	int getGroup(){
		if(final_course >= 1){
			return group;
		}	
	}
	
	int getDiscount(){
		if(final_course >= 1){
			discount = 5;
			return discount;
		}	
	}
	
	int getScholarship(){
		if(final_course >= 1){
			scholarship = 1500;
			return scholarship;
		}	
	}
	
	string getFaculty(){
		if(final_course >= 1){
			return faculty;
		}
	}
	
	int getFinal_course(){
		return final_course;
	}
	
	
};

class Worker : public Person{

private:
	
	string department;
	int experience;
	string job_title;

protected:
	int salary;
	
public:
	
	
	void setDepartment(string valueDepartment){
		this -> department = valueDepartment;
	}
	
	void setJob_title(string valueJob_title){
		this -> job_title = valueJob_title;
	}
	
	void setExperience(int valueExperience){
		this -> experience = valueExperience;
	}
	
	int getExperience(){
		return experience;
	}
	
	string getDepartment(){
		return department;
	}
	
	string getJob_title(){
		return job_title;
	}
};	

class Professor : public Worker{

public:
	int getSalary(){
		salary = 30000;
		return salary;
	}
	
	int getDiscount(){
		
		discount = 25;
		return discount;
			
	}
};

class Laboratory_assistant : public Worker{
	
public:
	int getSalary(){
		salary = 10000;
		return salary;
	}
	
	int getDiscount(){
		
		discount = 20;
		return discount;
			
	}
	
};

class Director : public Worker{
	
public:
	
	int getSalary(){
		salary = 100000;
		return salary;
	}
	
	int getDiscount(){
		
		discount = 50;
		return discount;
			
	}
};

class Administrator : public Worker{
	
public:
	
	int getSalary(){
		salary = 15000;
		return salary;
	}
	
	int getDiscount(){
		
		discount = 10;
		return discount;
			
	}
};

class Psychologist : public Worker{
	
public:
	
	int getSalary(){
		salary = 40000;
		return salary;
	}
	
	int getDiscount(){
		
		discount = 13;
		return discount;
			
	}
};

class Cook : public Worker{
	
public:
	
	int getSalary(){
		salary = 45000;
		return salary;
	}
	
	int getDiscount(){
		
		discount = 30;
		return discount;
			
	}
	
};


int main(){
	
	
	Professor prof_Smit;
	prof_Smit.setAge(65);
	prof_Smit.setDepartment("Information Technology");
	prof_Smit.setExperience(40);
	prof_Smit.setGender("M");
	prof_Smit.setId(12345);
	prof_Smit.setJob_title("Teacher");
	prof_Smit.setName("Jone Smit");
	prof_Smit.setPass("qwert12345");
	
	prof_Smit.setWeight(70);
	
	
	cout << "Name:        "<<  prof_Smit.getName() << endl;
	cout << "Age:         "<<  prof_Smit.getAge() << " years old" << endl;
	cout << "Gender:      "<<  prof_Smit.getGender() << endl;
	cout << "Department:  "<<  prof_Smit.getDepartment() << endl;
	cout << "Job title:   "<<  prof_Smit.getJob_title() << endl;
	cout << "Discount:    "<<  prof_Smit.getDiscount() << "%" <<  endl;
	cout << "Experience:  "<<  prof_Smit.getExperience() << " years" <<  endl << endl << endl;
	
	
	Student st_Ivanov;
	st_Ivanov.setName("Ivanov Ivan");
	st_Ivanov.setFinal_course(5);
	st_Ivanov.setAge(23);
	st_Ivanov.setFaculty("Information Technology");
	st_Ivanov.setGroup(1012);
	st_Ivanov.setFinal_course(5);
	st_Ivanov.setId(21411);
	st_Ivanov.setPass("rewq4321");
	st_Ivanov.setWeight(70);
	st_Ivanov.setGender("M");
	
	
	cout << "Name:         "<<  st_Ivanov.getName() << endl;
	cout << "Age:          "<<  st_Ivanov.getAge() << " years old" << endl;
	cout << "Gender:       "<<  st_Ivanov.getGender() << endl;
	cout << "Faculty:      "<<  st_Ivanov.getFaculty() << endl;
	cout << "Final course: "<<  st_Ivanov.getFinal_course() << endl;
	cout << "Discount:     "<<  st_Ivanov.getDiscount() << "%" <<  endl;
	cout << "Group:        "<<  st_Ivanov.getGroup() <<  endl;
	cout << "Scholarship:  "<<  st_Ivanov.getScholarship() << "$" << endl << endl << endl;
	
	Cook yoker;
	yoker.setAge(30);
	yoker.setDepartment("Kitchen");
	yoker.setExperience(10);
	yoker.setGender("M");
	yoker.setId(12645);
	yoker.setJob_title("Cook");
	yoker.setName("Tom Yoker");
	yoker.setPass("qrt123");
	yoker.setWeight(80);
	
	
	cout << "Name:        "<<  yoker.getName() << endl;
	cout << "Age:         "<<  yoker.getAge() << " years old" << endl;
	cout << "Gender:      "<<  yoker.getGender() << endl;
	cout << "Department:  "<<  yoker.getDepartment() << endl;
	cout << "Job title:   "<<  yoker.getJob_title() << endl;
	cout << "Discount:    "<<  yoker.getDiscount() << "%" <<  endl;
	cout << "Experience:  "<<  yoker.getExperience() << " years" <<  endl << endl << endl;
	
}
