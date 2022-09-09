#pragma once
#include"EmployeeCSVWriter.hpp"
class EmployeeCSVWriter:public IEmployeeFileWriter
{
public:
	 void writeEmployees(std::vector<Employee>, std::string filePath) override;

private:

};

