#include <iostream>
#include <string>
#include <cctype>

std::string to_upper_string(std::string str)
{
	std::string res;

	for (char c : str)
		res += std::toupper(c);
	return (res);
}

int main(int argc, char *argv[])
{
	std::string message;

	if (argc < 2)
		message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
			message += to_upper_string(std::string(argv[i]));
	}
	std::cout << message << std::endl;
}
