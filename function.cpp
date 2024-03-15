#include "function.h"
//登录数据
void data()
{
	int generalCount = 10;
	int officialCount = 2;
	int adminCount = 1;
	string Pword = "123456";
	string Pnum = "18040503043";

	for (int i = 0; i < generalCount; ++i) {
		userVector.push_back(new general(
			userVector.size() + 1, "用户", "2313208" + to_string(i), Pword, Pnum, "低"));
	}

	for (int i = 0; i < officialCount; ++i) {
		userVector.push_back(new official(
			userVector.size() + 1, "管理员", "2313209" + to_string(i), Pword, Pnum, "中"));
	}

	for (int i = 0; i < adminCount; ++i) {
		userVector.push_back(new admin(
			userVector.size() + 1, "admin", "23132099", Pword, Pnum, "高"));
	}
}

//登录操作
int lognIn()
{
	string userName;
	string passWord;
	cout << "******登录******" << endl
		<< "用户名:";
	cin >> userName;

	cout << "密 码 :";
	cin >> passWord;

	int index = userIndex(userName, passWord);

	if (index != -1)
		return index;
	else
	{
		cout << "登录失败";
		return -1;
	}
}

//返回用户索引
int userIndex(string userName, string passWord)
{
	int i = 0;
	for (const auto& user : userVector)
	{
		//访问所有数据
		if (auto generalUser = dynamic_cast<general*>(user))
		{
			if (generalUser->UserName == userName && generalUser->Password == passWord)
			{
				if (generalUser->IsStop == 'Y')
					return -1;
				return i;
			}
		}
		i++;
	}
	return -1;
}

//用户输入序号
int display(int userIndex)
{
	string type = userVector[userIndex]->TpyeName;
	int choose;
	cout << endl << "请选择您的操作："
		<< endl << "0、查看所有信息"
		<< endl << "1、修改用户名"
		<< endl << "2、修改密码"
		<< endl << "3、修改手机号";
	if (type == "管理员" || type == "admin")
	{
		cout << endl << "4、删除用户"
			<< endl << "5、停用用户";
	}
	if (type == "admin")
	{
		cout << endl << "6、删除管理员|用户"
			<< endl << "7、停用管理员|用户"
			<< endl << "8、添加管理员";
	}
	cout << endl << "请输入序号 ： ";

	cin >> choose;

	//判断权限
	if (type == "用户" && choose > 3)return -1;
	if (type == "管理员" && choose > 5)return -1;
	if (type == "admin" && choose > 8)return -1;
	return choose;
}

//用户操作
void useAuthority(int choice, int userIndex)
{
	//当前用户信息
	string type = userVector[userIndex]->TpyeName;

	switch (choice)
	{
	case 0: {
		cout << "编号" << "\t" << "用户名"
			<< "\t\t" << "手机号" << "\t\t" << "停用"
			<< "\t" << "类型" << "\t" << "权级"
			<< endl;
		for (auto& userObj : userVector)
		{
			userObj->show();
		}
	}
		  break;
	case 1:
	{
		string newName;
		cout << "Enter new username: ";
		cin >> newName;
		if (type == "用户")
		{
			//直接修改
			dynamic_cast<general*>(userVector[userIndex])->revise_UserName(newName);
			cout << "修改成功" << endl;
			userVector[userIndex]->show();
			break;
		}
		int userId;
		cout << "Enter user ID: ";
		cin >> userId;

		for (auto& userObj : userVector)
		{
			if (userObj->id == userId)
			{
				dynamic_cast<general*>(userObj)->revise_UserName(newName);
				cout << "修改成功" << endl;
				userObj->show(); // Display updated information
				break;
			}
		}
	}
	break;

	case 2:
		// Implement logic for modifying password
	{
		string newPassword;
		cout << "Enter new password: ";
		cin >> newPassword;
		if (type == "用户")
		{
			dynamic_cast<general*>(userVector[userIndex])->revise_Password(newPassword);
			cout << "修改成功" << endl;
			break;
		}
		int userId;
		cout << "Enter user ID: ";
		cin >> userId;


		for (auto& userObj : userVector)
		{
			if (userObj->id == userId)
			{
				dynamic_cast<general*>(userObj)->revise_Password(newPassword);
				cout << "修改成功" << endl;
				userObj->show(); // Display updated information
				break;
			}
		}
	}
	break;

	case 3:
		// Implement logic for modifying phone number
	{
		string newPhone;
		cout << "Enter new phone number: ";
		cin >> newPhone;
		if (type == "用户")
		{
			dynamic_cast<general*>(userVector[userIndex])->revise_Phone(newPhone);
			cout << "修改成功" << endl;
			userVector[userIndex]->show();
			break;
		}
		int userId;
		cout << "Enter user ID: ";
		cin >> userId;


		for (auto& userObj : userVector)
		{
			if (userObj->id == userId)
			{
				dynamic_cast<general*>(userObj)->revise_Phone(newPhone);
				cout << "修改成功" << endl;
				userObj->show(); // Display updated information
				break;
			}
		}
	}
	break;

	case 4:
		// Implement logic for deleting user
	{
		int userId;
		cout << "Enter user ID to delete: ";
		cin >> userId;

		bool a = dynamic_cast<official*>(userVector[userId - 1])->delGeneral(userId - 1);
		if (a)cout << "删除成功" << endl;
		else cout << "删除失败" << endl;
	}
	break;

	case 5:
		// Implement logic for stopping user
	{
		int userId;
		cout << "Enter user ID to stop: ";
		cin >> userId;

		bool a = dynamic_cast<official*>(userVector[userId - 1])->stopGeneral(userId - 1);
		if (a)cout << "停用成功" << endl;
		else cout << "停用失败" << endl;
	}
	break;

	case 6:
		// Implement logic for deleting admin
	{
		int userId;
		cout << "Enter userID to delete: ";
		cin >> userId;

		if (userId < 13)
		{
			dynamic_cast<admin*>(userVector[userId - 1])->delOfficial(userId - 1);
			cout << "删除成功" << endl;
		}
		else
			cout << "删除失败" << endl;
	}
	break;

	case 7:
		// Implement logic for stopping admin
	{
		int userId;
		cout << "Enter userID to stop: ";
		cin >> userId;

		if (userId < 13)
		{
			dynamic_cast<admin*>(userVector[userId - 1])->stopOfficial(userId - 1);
			cout << "停用成功" << endl;
		}
		else
			cout << "停用失败" << endl;
	}
	break;

	case 8:
		// Implement logic for adding admin
	{
		int userId;
		cout << "Enter userID to add Official: ";
		cin >> userId;

		dynamic_cast<admin*>(userVector[userId - 1])->upOfficial(userId - 1);
		cout << "升级成功" << endl;
	}
	break;
	}
}