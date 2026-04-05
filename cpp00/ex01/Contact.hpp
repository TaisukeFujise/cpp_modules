#ifndef CONTACT_CPP
#define CONTACT_CPP

#include <string>
#include <iostream>
#include <iomanip>

#define COLUMN_LEN 10

class Contact
{
public:
	bool fill();
	void short_display(int index);
	void full_display();

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif
