#pragma once
//#include <iostream>
//#include <string>
//using namespace std;
//string isUser(string userName, string passWord);
//
//string lognIn()
//{
//	string userName;
//	string passWord;
//	cout << "******登录******" << endl
//	<< "用户名:";
//	cin >> userName;
//
//	cout << "密 码 :";
//	cin >> passWord;
//
//	string type = isUser(userName, passWord);
//
//	cout << type;
//
//	if (type != "")
//		return type;
//	else
//	{
//		cout << "登录失败";
//		return "";
//	}
//}
//
//string isUser(string userName, string passWord)
//{
//	for (const auto& user : userVector)
//	{
//		//访问所有数据
//		if (auto generalUser = dynamic_cast<general*>(user))
//		{
//			if (generalUser->UserName == userName && generalUser->Password == passWord)
//			{
//				if (generalUser->IsStop == 'Y')
//					return "";
//				return generalUser->TpyeName;
//			}
//		}
//	}
//	return "";
//}