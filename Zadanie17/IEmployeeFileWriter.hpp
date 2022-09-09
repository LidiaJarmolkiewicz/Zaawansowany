#pragma once
#include"Employee.hpp"
#include<vector>

class IEmployeeFileWriter
{
public:
	virtual void writeEmployees(std::vector<Employee> employees, std::string filePath) = 0;

};

