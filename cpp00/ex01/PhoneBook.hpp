#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
public:
	void add();
	void search();

private:
	Contact contacts[8];
	int current_index = 0;
	int total_index = 0;
	void display();
};

#endif
