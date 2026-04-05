#include "Contact.hpp"

bool Contact::fill()
{
	std::cout << "first_name: ";
	std::getline(std::cin, first_name);
	if (first_name.empty())
	{
		std::cout << "Invalid input" << std::endl;
		return (false);
	}

	std::cout << "last_name: ";
	std::getline(std::cin, last_name);
	if (last_name.empty())
	{
		std::cout << "Invalid input" << std::endl;
		return (false);
	}

	std::cout << "nickname: ";
	std::getline(std::cin, nickname);
	if (nickname.empty())
	{
		std::cout << "Invalid input" << std::endl;
		return (false);
	}

	std::cout << "phone_number: ";
	std::getline(std::cin, phone_number);
	if (phone_number.empty())
	{
		std::cout << "Invalid input" << std::endl;
		return (false);
	}

	std::cout << "darkest_secret: ";
	std::getline(std::cin, darkest_secret);
	if (darkest_secret.empty())
	{
		std::cout << "Invalid input" << std::endl;
		return (false);
	}
	return (true);
}

void Contact::short_display(int index)
{
	std::string output;

	std::cout << std::right << std::setw(COLUMN_LEN) << index << "|";
	output = first_name;
	if (output.length() > COLUMN_LEN)
	{
		output = output.substr(0, COLUMN_LEN - 1);
		output[9] = '.';
	}
	std::cout << std::right << std::setw(COLUMN_LEN) << output << "|";

	output = last_name;
	if (output.length() > COLUMN_LEN)
	{
		output = output.substr(0, COLUMN_LEN - 1);
		output[9] = '.';
	}
	std::cout << std::right << std::setw(COLUMN_LEN) << output << "|";

	output = nickname;
	if (output.length() > COLUMN_LEN)
	{
		output = output.substr(0, COLUMN_LEN - 1);
		output[9] = '.';
	}
	std::cout << std::right << std::setw(COLUMN_LEN) << output << std::endl;
}

void Contact::full_display()
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}
