#include <iostream>
#include <vector>
#include <string_view>
#include <string>

struct NameAndGrade
{
	std::string nameStudent{};
	int grade{};
};
std::string getName(std::string& name)
{
	std::cout << "Enter the first name of the student: ";
	std::string name{};
	std::cin >> name;
	return name;
}
int main()
{
	getName;
}
