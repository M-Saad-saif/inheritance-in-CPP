#include <iostream>
using namespace std;

class person {
	protected:
		string name;
		int age;

	public:

		person() {
			name = "noname";
			age = 0;
			cout<<"parent constructor..\n";
		}

};

class student : public person {
	private:
		int rollno;

	public:
		student () {
			rollno  = 0;
		}

		void getinfo() {
			cout<<"Enter your name: ";
			cin>>name;

			cout<<"ENter your age: ";
			cin>>age;

			cout<<"Enter your rollno: ";
			cin>>rollno;
		}

		void setInfo() {
			cout<<"your name: "<<name;
			cout<<"\nyour age: "<<age;
			cout<<"\nyour rollno: "<<rollno;
		}

};

int main() {
	student s1;

	s1.getinfo();
	s1.setInfo();
}
