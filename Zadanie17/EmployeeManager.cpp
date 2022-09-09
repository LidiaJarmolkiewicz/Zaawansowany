#include "EmployeeManager.hpp"
#include"Employee.hpp"
#include<algorithm>
#include<random>


void EmployeeManager::readDataFromFile(std::string filePath)
{
	employees = _fileReader->readEmployees("employee_input.csv");
}


