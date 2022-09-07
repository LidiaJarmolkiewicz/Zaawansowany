#pragma once
#include"IEmployeeFileReader.hpp"
class EmployeeCSVReader :public IEmployeeFileReader
{
public:
	 std::vector<Employee> readEmployees(std::string filePath) override;

private:
	//std::shared_ptr<IEmployeeFileReader> _fileReader;
};