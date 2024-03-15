#include "general.h"

void general::revise_UserName(string newName)
{
	UserName = newName;
}
void general::revise_Password(string newPwold)
{
	Password = newPwold;
}
void general::revise_Phone(string newPhone)
{
	Phone = newPhone;
}
void general::show()
{
	if (UserName != "")
		cout << id << "\t" << UserName
		<< "\t" << Phone << "\t" << IsStop
		<< "\t" << TpyeName << "\t" << authority
		<< endl;
}

//
//bool isEmpty(user *a)
//{
//	if (a->UserName == "")
//		return true;
//	return false;
//}
//
//int findIndex(int id)
//{
//	for (int i = 0; i < size(generalUser); i++)
//	{
//		if (generalUser[i].id == id)
//			return i;
//	}
//	cout << "未找到此用户";
//	return -1;
//}