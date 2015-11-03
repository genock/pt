#pragma once
#include <string>
#include "functions.h"

class PhoneNumber
{
private:
	std::string prefix;
	std::string country_code;
	std::string operator_code;
	std::string subscriber_number;
public:
	PhoneNumber();
	PhoneNumber(const std::string& phone_number);
	PhoneNumber(const std::string& prefix, const std::string& country_code, const std::string& operator_code, const std::string& subscriber_number);
	~PhoneNumber();
	
	std::string GetPrefix() const;
	std::string GetCountryCode() const;
	std::string GetOperatorCode() const;
	std::string GetSubscriberNumber() const;
	std::string GetPhoneNumber() const;

	void SetPrefix(const std::string& prefix);
	void SetCountryCode(const std::string& country_code);
	void SetOperatorCode(const std::string& station_code);
	void SetSubscriberNumber(const std::string& subscriber_number);
	void SetPhoneNumber(const std::string& prefix, const std::string& country_code, const std::string& operator_code, const std::string& subscriber_number);

	bool CheckPhoneNumber() const;
};