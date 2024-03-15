#pragma once
#include "official.h"

class admin :public official
{
public:
	//admin(){}
	admin(int id, string Tname, string Uname, string Pword, string Pnum, string authority) :
		official(id, Tname, Uname, Pword, Pnum, authority) {}

	void delOfficial(int index);
	void stopOfficial(int index);
	void upOfficial(int index);
};
