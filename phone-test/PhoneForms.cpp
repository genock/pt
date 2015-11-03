#include "stdafx.h"


PhoneForms::PhoneForms(){
	this->phone_number = PhoneNumber();
	forms.reserve(20);
}
PhoneForms::PhoneForms(const PhoneNumber& phone_number){
	this->phone_number = phone_number;
	forms.reserve(20);
	this->SetForms(phone_number);
}
PhoneForms::~PhoneForms(){
}

const std::vector<std::string>& PhoneForms::GetForms(){
	return this->forms;
}
const unsigned int PhoneForms::Size(){
	return this->forms.size();
}

void PhoneForms::SetForms(const PhoneNumber& phone_number){
	this->forms.clear();
	std::string form;

	form = "+7" + phone_number.GetOperatorCode() + phone_number.GetSubscriberNumber();
	this->forms.push_back(form);
	form = "8" + phone_number.GetOperatorCode() + phone_number.GetSubscriberNumber();
	this->forms.push_back(form);
	form = "+7(" + phone_number.GetOperatorCode() + ")" + phone_number.GetSubscriberNumber();
	this->forms.push_back(form);
	form = "8(" + phone_number.GetOperatorCode() + ")" + phone_number.GetSubscriberNumber();
	this->forms.push_back(form);
	form = "+7-" + phone_number.GetOperatorCode() + "-" + phone_number.GetSubscriberNumber();
	this->forms.push_back(form);
	form = "8-" + phone_number.GetOperatorCode() + "-" + phone_number.GetSubscriberNumber();
	this->forms.push_back(form);
	form = "+7-" + phone_number.GetOperatorCode() + "-" + phone_number.GetSubscriberNumber().substr(0, 3) + "-" + phone_number.GetSubscriberNumber().substr(3, 2) + "-" + phone_number.GetSubscriberNumber().substr(5, 2);
	this->forms.push_back(form);
	form = "8-" + phone_number.GetOperatorCode() + "-" + phone_number.GetSubscriberNumber().substr(0, 3) + "-" + phone_number.GetSubscriberNumber().substr(3, 2) + "-" + phone_number.GetSubscriberNumber().substr(5, 2);
	this->forms.push_back(form);
	form = "+7(" + phone_number.GetOperatorCode() + ")" + phone_number.GetSubscriberNumber().substr(0, 3) + "-" + phone_number.GetSubscriberNumber().substr(3, 2) + "-" + phone_number.GetSubscriberNumber().substr(5, 2);
	this->forms.push_back(form);
	form = "8(" + phone_number.GetOperatorCode() + ")" + phone_number.GetSubscriberNumber().substr(0, 3) + "-" + phone_number.GetSubscriberNumber().substr(3, 2) + "-" + phone_number.GetSubscriberNumber().substr(5, 2);
	this->forms.push_back(form);
}

std::string PhoneForms::operator[](int i){
	return this->forms[i];
}