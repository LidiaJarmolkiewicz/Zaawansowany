#pragma
#include"IEmploeeFileReader.hpp"

class EmployeeCSVReader : public IEmploeeFileReader
{
public:
	virtual std::vector<Employee> readEmployees(std::string filePath) = 0;
private:
	//pola do obs³ugi pilow
};