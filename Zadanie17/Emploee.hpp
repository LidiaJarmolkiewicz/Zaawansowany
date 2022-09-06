#pragma
#include<string>
class Employee
{


public:
	enum class  Gender {
		FEMALE,
		MALE,
		UNKNOWN
	};
	Employee(std::string first_name, std::string last_name, std::string email,Gender gender, double salary):
		_first_name(first_name), _last_name(last_name), _email(email),_gender(gender), _salary(salary) {};
	

	void setFName() ;
	std::string setLName() ;
	std::string setEmail();
	Gender setGender();
	double setSalary();

	std::string getFName() { return _first_name; };
	std::string getLName() { return _last_name; };
	std::string getEmail() { return _email; };
	Gender getGender() { return _gender; };
	double getSalary() { return _salary; };


	std::string getLogin();
	std::string getPassword();
	

private:
	std::string _first_name;
	std::string _last_name;
	std::string _email;
	Gender _gender;
	double _salary;
	std::string _login;
	std::string _password;

};