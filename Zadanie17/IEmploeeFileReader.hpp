#pragma
#include"Emploee.hpp"
#include<vector>
class IEmploeeFileReader
{
public:
	IEmploeeFileReader() {};
	virtual ~IEmploeeFileReader();
	

	virtual std::vector<Employee> readEmployees()=0;
};