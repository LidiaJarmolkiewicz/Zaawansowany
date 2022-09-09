#pragma once
#include"IEmployeeFileReader.hpp"
class EmployeeCSVReader :public IEmployeeFileReader
{
public:
	 std::vector<Employee> readEmployees(std::string filePath) override;

private:
	//pola do obslugi plikow
};