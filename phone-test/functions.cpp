#include "stdafx.h"

bool is_number(const std::string& s){
	std::string::const_iterator it = s.begin();
	while (it != s.end() && (*it >= '0' && *it <= '9')) ++it;
	return !s.empty() && it == s.end();
}