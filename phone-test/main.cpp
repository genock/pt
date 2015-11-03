#include <iostream>
#include <string>
#include "PhoneNumber.h"
#include "PhoneForms.h"

using namespace std;

int main(){
	PhoneNumber pn("+", "7", "985", "1983911");
	cout << pn.GetPhoneNumber() << endl;
	cout << pn.CheckPhoneNumber() << endl;

	PhoneForms pf(pn);
	for (unsigned int i = 0; i < pf.Size(); i++){
		cout << pf[i] << endl;
	}
	cout << pf.GetForms().size() << endl;

	system("pause");
	return 0;
}