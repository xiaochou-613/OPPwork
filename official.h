#pragma once
#include "general.h"
class official : public general
{
public:
	//official() {}
	official(int id, string Tname, string Uname, string Pword, string Pnum, string authority) :
		general(id, Tname, Uname, Pword, Pnum, authority) {}

	bool delGeneral(int index);
	bool stopGeneral(int index);

};



