#include"Employee.hpp"
#include"IEmployeeFileWriter.hpp"
#include<fstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include "EmployeeCSVWriter.hpp"

void EmployeeCSVWriter::writeEmployees(std::vector<Employee> employees, std::string filePath)
{
	
	std::ofstream file(filePath, std::ios::out | std::ios::app);
	if (!file.is_open())
	{
		std::cout << " nie mozna zapisac do pliku";

	}

	for (unsigned int i = 0; i < employees.size(); ++i)
	{
		if (file.good())
		{
			file << employees[i].getFName() << " ," << employees[i].getLName() << " ," << employees[i].getEmail() << " ," << employees[i].getSalary() << "\n";
		}
	}

	file.close();
}
