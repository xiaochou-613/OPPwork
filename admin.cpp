#include "admin.h"
//删除管理员或用户
void admin::delOfficial(int index)
{
	if (index > 13) return;
	userVector[index] = new general();
}
//停用管理员或用户
void admin::stopOfficial(int index)
{
	if (userVector[index]->TpyeName == "用户")
	{
		dynamic_cast<general*>(userVector[index])->IsStop = 'Y';
		return;
	}
	dynamic_cast<official*>(userVector[index])->IsStop = 'Y';
}
//升级管理员
void admin::upOfficial(int index)
{
	if (index > 13) return;
	auto generalUser = dynamic_cast<general*>(userVector[index]);
	userVector[index] = new official(
		generalUser->id, "管理员", generalUser->UserName,
		generalUser->Password, generalUser->Phone, "中");
}