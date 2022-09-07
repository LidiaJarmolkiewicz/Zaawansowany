#include"Employee.hpp"
#include"IEmployeeFileWriter.hpp"
#include<fstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include "EmployeeCSVWriter.hpp"

void EmployeeCSVWriter::writeEmployees(std::vector<Employee> employees, std::string filePath)
{
	std::string filePath;
	std::ofstream file(filePath, std::ios::out | std::ios::app);
	if (!file.is_open())
	{
		std::cout << " nie mozna zapisac do pliku";

	}

	for (const auto& i: employees)
	{
		if (file.good())
		{
			file << i<<"\n";
		}
	}

	file.close();
}
