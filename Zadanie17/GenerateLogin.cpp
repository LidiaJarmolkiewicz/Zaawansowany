#include "GenerateLogin.hpp"
#include"EmployeeCSVReader.hpp"
#include"Employee.hpp"
#include<algorithm>
#include<vector>

std::string GenerateLogin::generateLogin(std::vector<Employee> employees)
{
		std::string login;
		std::vector < std::string > vec;

		auto lambda = [&](Employee emp)
		{	
			login += emp.getFName().substr(0, 2);
			login += emp.getLName().substr(0, 2);

		

		auto result = std::find(vec.begin(), vec.end(), login);

		if (result == std::end(vec))
		{
			for (int j = 2; j < emp.getLName().size(); ++j)
				login += emp.getLName().at(j);
		}
		vec.push_back(login);
		};

		std::for_each(employees.begin(), employees.end(), lambda);


		return login;
}
