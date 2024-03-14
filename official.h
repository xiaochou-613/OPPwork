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
//删除用户
bool official::delGeneral(int index)
{
	if (index > 9) return false;
	userVector[index] = new general();
	return true;
}
//停用用户
bool official::stopGeneral(int index)
{
	if (index > 9)return false; //没有权限
	dynamic_cast<general*>(userVector[index])->IsStop = 'Y';
	return true;
}



