#include "EmployeeCSVReader.hpp"
//#include"Employee.hpp"
#include<fstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>

std::vector<Employee> EmployeeCSVReader::readEmployees(std::string filePath)
{
	std::vector<Employee> employees;
	std::ifstream file(filePath);
	
	if (!file.is_open())
	{
		std::cout << "Nie otworzylas pliku: " << filePath << std::endl;
		return employees;
	}

	std::string line;

	if (std::getline(file, line))
	{
		std::cout << " wczytalem naglowek" << std::endl;
	}


	while (std::getline(file, line))
	{

		std::stringstream ss(line);
		std::string data;
		Employee tmpEmployee;


		if (std::getline(ss, data, ','));
		{
			tmpEmployee.setFName(data);
		}
		

		if (std::getline(ss, data, ','));
		{
			tmpEmployee.setLName(data);
		}
		if (std::getline(ss, data, ','));
		{
			tmpEmployee.setEmail(data);
		}
		if (std::getline(ss, data, ','));
		{
			tmpEmployee.setGender(Employee::toGender(data));
		}

		if (std::getline(ss, data));
		{
			try {
				tmpEmployee.setSalary(std::stod(data));
			}
			catch (const std::exception& e)
			{
				std::invalid_argument;
				continue;
			}
		}
		employees.push_back(tmpEmployee);

    }
    file.close();

    return employees;


   
}
