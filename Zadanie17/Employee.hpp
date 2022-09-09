#pragma once
#include<string>
class Employee
{
public:
	enum class Gender{ MALE, FEMALE, UNKNOWN};
	static Gender toGender(std::string str)
	{
		if(str=="Female")
		{
			return Gender::FEMALE;
		}
		if(str == "Male")
		{
			return Gender::MALE;
		}
		else
		{
			return Gender::UNKNOWN;
		}
	}

	Employee(std::string first_name, std::string last_name, std::string email, Gender gender, double salary) :
		_first_name(first_name), _last_name(last_name), _email(email), _gender(gender), _salary(salary) {};
	Employee();

	//virtual~Employee();
	std::string getFName();
	std::string getLName();
	std::string getEmail() ;
	Gender getGender();
	double getSalary() ;
	std::string getLogin() ;
	std::string setPassword() ;
	
	void setFName(const std::string first_name);
	void setLName(const std::string last_name);
	void setEmail(const std::string email);
	void setGender(const Gender gender);
	void setSalary(const double salary);

private:
	std::string _first_name;
	std::string _last_name;
	std::string _email;
	Gender _gender;
	double _salary;

	std::string _login;
	std::string _password;

	
};

//std::ostream& operator<<(std::ostream& s, const Employee& emp)
//{
//	// s<<"imie"<<emp.
//}