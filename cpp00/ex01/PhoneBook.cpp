#include "PhoneBook.hpp"

void PhoneBook::add()
{
	if (contacts[current_index].fill())
	{
		if (current_index == 7)
			current_index = 0;
		else
			current_index++;
		if (total_index != 8)
			total_index++;
	}
}

void PhoneBook::search()
{
	std::string index_str;
	int index;

	display();
	std::cout << "Index -> ";
	std::getline(std::cin, index_str);

	index = std::stoi(index_str);
	if (index < 0 || index > total_index)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	contacts[index].full_display();
}

void PhoneBook::display()
{
	std::cout << std::right
			  << std::setw(10) << "index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < total_index; i++)
		contacts[i].short_display(i);
}
