#include "Employee.hpp"

std::string Employee::getFName()
{

    return _first_name;
}

std::string Employee::getLName()
{
   return _last_name;
}

std::string Employee::getEmail()
{
    return _last_name;
}

Employee::Gender Employee::getGender()
{
     return _gender; 
}

double Employee::getSalary()
{
    return _salary; 
}

std::string Employee::getLogin()
{
    return _login;
}

std::string Employee::setPassword()
{
    return _password;
}

void Employee::setFName(const std::string first_name)
{
    _first_name = first_name;
}

void Employee::setLName(const std::string last_name)
{
    _last_name = last_name;
}

void Employee::setEmail(const std::string email)
{
    _email = email;
}

void Employee::setGender(const Gender gender)
{
   this-> _gender = gender;
}

void Employee::setSalary(const double salary)
{
    this->_salary = salary;
}
