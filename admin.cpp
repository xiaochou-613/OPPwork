#include "admin.h"
//ɾ������Ա���û�
void admin::delOfficial(int index)
{
	if (index > 13) return;
	userVector[index] = new general();
}
//ͣ�ù���Ա���û�
void admin::stopOfficial(int index)
{
	if (userVector[index]->TpyeName == "�û�")
	{
		dynamic_cast<general*>(userVector[index])->IsStop = 'Y';
		return;
	}
	dynamic_cast<official*>(userVector[index])->IsStop = 'Y';
}
//��������Ա
void admin::upOfficial(int index)
{
	if (index > 13) return;
	auto generalUser = dynamic_cast<general*>(userVector[index]);
	userVector[index] = new official(
		generalUser->id, "����Ա", generalUser->UserName,
		generalUser->Password, generalUser->Phone, "��");
}