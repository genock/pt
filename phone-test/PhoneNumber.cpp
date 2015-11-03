#include "stdafx.h"

PhoneNumber::PhoneNumber(){
	this->prefix = "";
	this->country_code = "";
	this->operator_code = "";
	this->subscriber_number = "";
}
PhoneNumber::PhoneNumber(const std::string& phone_number){
	if (phone_number.length() == 10){
		this->prefix = "";
		this->country_code = "";
		this->operator_code = phone_number.substr(0,3);
		this->subscriber_number = phone_number.substr(3, 7);
	}
}
PhoneNumber::PhoneNumber(const std::string& prefix, const std::string& country_code, const std::string& operator_code, const std::string& subscriber_number){
	this->prefix = prefix;
	this->country_code = country_code;
	this->operator_code = operator_code;
	this->subscriber_number = subscriber_number;
}
PhoneNumber::~PhoneNumber(){

}

std::string PhoneNumber::GetPrefix() const {
	return this->prefix;
}
std::string PhoneNumber::GetCountryCode() const {
	return this->country_code;
}
std::string PhoneNumber::GetOperatorCode() const {
	return this->operator_code;
}
std::string PhoneNumber::GetSubscriberNumber() const {
	return this->subscriber_number;
}
std::string PhoneNumber::GetPhoneNumber() const{
	std::string str = this->prefix + this->country_code + this->operator_code + this->subscriber_number;
	return str;
}

void PhoneNumber::SetPrefix(const std::string& prefix){
	this->prefix = prefix;
}
void PhoneNumber::SetCountryCode(const std::string& country_code){
	this->country_code = country_code;
}
void PhoneNumber::SetOperatorCode(const std::string& operator_code){
	this->operator_code = operator_code;
}
void PhoneNumber::SetSubscriberNumber(const std::string& subscriber_number){
	this->subscriber_number = subscriber_number;
}
void PhoneNumber::SetPhoneNumber(const std::string& prefix, const std::string& country_code, const std::string& operator_code, const std::string& subscriber_number){
	this->prefix = prefix;
	this->country_code = country_code;
	this->operator_code = operator_code;
	this->subscriber_number = subscriber_number;
}

bool PhoneNumber::CheckPhoneNumber() const{
	if (this->prefix == "+" || this->prefix == "")
		if (this->country_code == "" || (is_number(this->country_code) && this->country_code.length() == 1))
			if (is_number(this->operator_code) && this->operator_code.length() == 3)
				if (is_number(this->subscriber_number) && this->subscriber_number.length() == 7)
					return true;
	return false;
}