#include "EmployeeCSVReader.hpp"
#include"Employee.hpp"
#include<fstream>
#include<iostream>
#include<algorithm>
#include<vector>

std::vector<Employee> EmployeeCSVReader::readEmployees(std::string filePath)
{
  
    std::string filePath("employee_input.csv");
    std::ifstream file(filePath);

    std::vector<Employee> employees;
    if (!file.is_open())
    {
        std::cout << "nie otworzylas pliku";
    }
    std::string first_name;
    std::string last_name;
    std::string email;
    Employee::Gender gender;
    double salary;

    std::getline(file, first_name);//zjedzenie naglowka

    while (std::getline(file,first_name,','))
    {
            std::getline(file, last_name);
            std::getline(file, email);
            //std::getline(file, gender);
            //std::getline(file, salary);
            employees.emplace_back(first_name,last_name,email,gender,salary);
      
       
    }
   
    file.close();

    return employees;
}
