// Developer.cpp 


#include <iostream>
using namespace std;

class clsPerson {

private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _FullName;
	string _Email;
	string _Phone;

public:

	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_FullName = _FirstName + " " + _LastName;
		_Email = Email;
		_Phone = Phone;
	}

	int GetID() {
		return _ID;
	}

	string GetFirstName() {
		return _FirstName;
	}

	void SetFirstName(string FirstName) {
		_FirstName = FirstName;
	}

	string GetLastName() {
		return _LastName;
	}

	void SetLastName(string LastName) {
		_LastName = LastName;
	}

	string GetEmail() {
		return _Email;
	}

	void SetEmail(string Email) {
		_Email = Email;
	}

	string GetPhone() {
		return _Phone;
	}

	void SetPhone(string Phone) {
		_Phone = Phone;
	}

	string FullName() {
		return _FullName;
	}

	void Print() {
		cout << "\nInfo:";
		cout << "\n________________________";
		cout << "\nID		 : " << _ID;
		cout << "\nFirstName : " << _FirstName;
		cout << "\nLastName  : " << _LastName;
		cout << "\nFullName  : " << _FullName;
		cout << "\nEmail     : " << _Email;
		cout << "\nPhone     : " << _Phone;
		cout << "\n________________________\n\n";
	}

	void SendEmail(string Subject, string Body) {
		cout << "The following message sent successfully to email: " << _Email
			<< "\nSubject: " << Subject << "\nBody: " << Body << endl;
	}

	void SendSMS(string TextMessage) {
		cout << "The following message sent successfully to phone: " << _Phone
			<< "\n" << TextMessage << endl;
	}
};
class clsEmployee : public clsPerson {

private:
	float _Salary;
	string _Title;
	string _Department;

public:
	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, float Salary, string Title, string Department)
		: clsPerson(ID, FirstName, LastName, Email, Phone) {
		_Salary = Salary;
		_Title = Title;
		_Department = Department;
	}

	void SetSalary(float Salary) {
		if (Salary == 0)
			cout << "Invalid Salary!\n";
		else
			_Salary = Salary;
	}

	void SetTitle(string Title) {
		_Title = Title;
	}

	void SetDepartment(string Department) {
		_Department = Department;
	}

	float GetSalary() {
		return _Salary;
	}

	string GetTitle() {
		return _Title;
	}

	string GetDepartment() {
		return _Department;
	}

	void Print() {
		cout << "\nInfo:";
		cout << "\n________________________";
		cout << "\nID		  : " << GetID();
		cout << "\nFirstName  : " << GetFirstName();
		cout << "\nLastName   : " << GetLastName();
		cout << "\nFullName   : " << FullName();
		cout << "\nEmail      : " << GetEmail();
		cout << "\nPhone      : " << GetPhone();
		cout << "\nSalary     : " << _Salary;
		cout << "\nTitle      : " << _Title;
		cout << "\nDepartment : " << _Department;
		cout << "\n________________________\n\n";
	}
};
class clsDeveloper : public clsEmployee {

private:
	string _ProgrammingLanguage;

public:
	clsDeveloper(int ID, string FirstName, string LastName, string Email,
		string Phone, float Salary, string Title, string Department, string ProgrammingLan)
		:clsEmployee(ID, FirstName, LastName, Email, Phone, Salary, Title, Department) {
		_ProgrammingLanguage = ProgrammingLan;
	}

	void SetProgrammingLanguage(string ProgrammingL) {
		_ProgrammingLanguage = ProgrammingL;
	}

	string GetProgrammingLanguage() {
		return _ProgrammingLanguage;
	}

	void Print() {
		cout << "\nInfo:";
		cout << "\n________________________";
		cout << "\nID		 : " << GetID();
		cout << "\nFirstName : " << GetFirstName();
		cout << "\nLastName  : " << GetLastName();
		cout << "\nFullName  : " << FullName();
		cout << "\nEmail     : " << GetEmail();
		cout << "\nPhone     : " << GetPhone();
		cout << "\nSalary    : " << GetSalary();
		cout << "\nTitle     : " << GetTitle();
		cout << "\nDepartment: " << GetDepartment();
		cout << "\nPLanguage : " << _ProgrammingLanguage;
		cout << "\n________________________\n\n";
	}
};

int main() {

	clsDeveloper Developer1(1, "Abdulrahman", "Al-Haritani"
		, "abdulrahamanharitani@gmail.com", "0995717078", 5000
		, "CEO", "Developers", "C++");

	Developer1.Print();
	Developer1.SendSMS("Hi mr Developer :-)");


	system("pause>0");
}

