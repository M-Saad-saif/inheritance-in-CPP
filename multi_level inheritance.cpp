#include <iostream>
using namespace std;

//	person class
class Person {
	protected:
		string name;
		int age;

	public:
//		default constructor
		Person() {
			name = " ";
			age = 0;
			cout<<"\nparent constructor\n";
		}
};

//	student class inherited by person class
class Student : public Person {
	protected:
//		name , age => is inherited
		int rollno;

	public:
//		default constructor
		Student () {
			rollno = 0;
			cout<<"child constructor\n";
		}

//		calling friend function of insertion and exsertions
		friend istream &operator >>(istream &input, Student &obj);
		friend ostream &operator << (ostream &output, Student &obj);
};

//	excertion overloading
istream &operator >>(istream &input, Student &obj) {
	cout<<"Enter your name: ";
	input >> obj.name;

	cout<<"Enter your age: ";
	input >> obj.age;

	cout<<"Enter roll numebr: ";
	input >> obj.rollno;

	return input;
}

//	insertion overloading
ostream &operator << (ostream &output, Student &obj) {
	output << "\nstudent name is: "<<obj.name <<"\nage is: "<<obj.age<<"\nroll number is: "<<obj.rollno;

	return output;
}

//	graduate students class inherited by student class (student is inherited by person)
class GradStudent : public Student {
	protected:
//		name, age, rollno => is inherited
		string researchArea;

	public:
//		default constructor
		GradStudent() {
			researchArea = " ";
			cout<<"2ndchild constructor\n\n";
		}

//	getting input function
		void gteInfo() {
			cout<<"Enter your name: ";
			cin>>name;

			cout<<"Enter your age: ";
			cin>>age;

			cout<<"Enter roll numebr: ";
			cin>>rollno;

			cout<<"Enter Reseach area: ";
			cin>>researchArea;
		}

//	displaying output function
		void display() {
			cout<<"\nstudent name is: "<<name <<"\nage is: "<<age<<"\nroll number is: "<<rollno
			    <<"\nResearch Area is: "<<researchArea;
		}

};

int main() {
	Student s1;
	GradStudent gs1;

	cout<<"-----Enter student details-----\n";
	cin>>s1;		//calling and object in cin and cout because of overloading
	cout<<s1;

	cout<<"\n\n-----Enter Graduate students details-----\n";
	gs1.gteInfo();		//simple calling through function
	gs1.display();
}
