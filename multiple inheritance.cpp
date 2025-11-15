#include <iostream>
using namespace std;

// person class
class Person {
	protected:
		string name;
		int age;

	public:
		Person() {
			name = " ";
			age = 0;
		}
};

//student class
class Student {
	protected:
		int rollno;

	public:
		Student() {
			rollno = 0;
		}
};

//	teacher assisstant class inherited by person and student
class TA : public Person, public Student {
	
	protected:
//		name, age, rollno => is inherited from person and student class
		string researchArea;

	public:
//		default coonstructor
		TA() {
			researchArea = " ";
		}

//		constructor for parameterized object in this code it is unuseable
		TA(string name, int age, int rollno, string researchArea) {
			this->name = name;		//inherited from person
			this->age = age;		//inherited from person
			this->rollno = rollno;		//inherited from stuednt
			this->researchArea = researchArea;
		}

//		void display() {
//			cout<<"name = "<<name <<"\nage = "<<age<<"\nroll number = "<<rollno<<"\nresearch Area = "<<researchArea;
//		}

		friend istream &operator >> (istream &input, TA &obj);
		friend ostream &operator << (ostream &output, TA &obj );
};

istream &operator >> (istream &input, TA &obj) {
	cout<<"Enter name: ";
	input >> obj.name;

	cout<<"Enter age: ";
	input >> obj.age;

	cout<<"Enter roll number: ";
	input >> obj.rollno;

	cout<<"Enter research Area: ";
	input >> obj.researchArea;

	return input;
}

ostream &operator << (ostream &output, TA &obj ) {
	cout<<"\nname = "<<obj.name <<"\nage = "<<obj.age<<"\nroll number = "<<obj.rollno<<"\nresearch Area = "<<obj.researchArea;
}

int main() {
	TA t1;
	cin >> t1;
	cout << t1;
//	t1.display();
}
