#pragma once
#include"IEmployeeFileWriter.hpp"
class EmployeeCSVWriter:public IEmployeeFileWriter
{
public:
	 void writeEmployees(std::vector<Employee>, std::string filePath) override;
};

