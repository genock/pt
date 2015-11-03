#pragma once
#include <vector>
#include "PhoneNumber.h"

class PhoneForms
{
private:
	PhoneNumber phone_number;
	std::vector<std::string> forms;
public:
	PhoneForms();
	PhoneForms(const PhoneNumber& phone_number);
	~PhoneForms();

	const std::vector<std::string>& GetForms();
	const unsigned int Size();

	void SetForms(const PhoneNumber& phone_number);
	
	std::string operator[](int i);
};