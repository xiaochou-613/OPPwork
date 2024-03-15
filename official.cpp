#include "official.h"

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
