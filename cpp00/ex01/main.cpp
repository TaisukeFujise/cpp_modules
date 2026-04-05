#include "PhoneBook.hpp"

int main()
{
	/*
	std::cin
	(i) ADD
		- first name, last name, nickname, phone number, darkest secret
		- no empty fields
	(ii) SEARCH
		- Display the saved contacts as a 4 columns
		- Each column must be 10 characters wide.A pipe character (’|’) separates them.
		- The text must be right-aligned
		- If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).
		- prompt the user again for the index of the entry to display. display the contact information, one field per line.
	(iii) EXIT
		- program quits and contacts lost.
	*/
	PhoneBook book;

	while (1)
	{
		std::string command;

		std::cout << "<< ";
		std::cin >> command;
		std::cin.ignore();
		if (command == "ADD")
		{
			book.add();
			continue;
		}
		else if (command == "SEARCH")
		{
			book.search();
			continue;
		}
		else if (command == "EXIT")
			break;
	}
}
