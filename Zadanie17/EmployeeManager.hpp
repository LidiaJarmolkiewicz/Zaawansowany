#pragma
#include"Emploee.hpp"
#include<vector>
class EmploeeManager
{
public://const,dest,get,set
	
	std::string generateLogins();
	std::string generatePasswords();

	//store login DataToFile
	//calculateFirstNameStarting(char firstletter
	//std::map calculateUniqueNames
	//calculateAverageSalaryMen
	// calculateAverageSalaryMWomen
	//std::vector<E>calculateTopSalary
	//storeEmployeeSalary

private:
	std::vector<Employee> employees;

};