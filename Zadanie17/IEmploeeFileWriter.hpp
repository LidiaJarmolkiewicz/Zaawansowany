#pragma
#include"Emploee.hpp"
#include<string>
#include<vector>

class IEmploeeFileWriter
{
public:
	IEmploeeFileWriter() {};
	virtual ~IEmploeeFileWriter();
	
	virtual void writeEmployees(std::vector<Employee> employees) = 0;

};