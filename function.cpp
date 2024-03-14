//#include <iostream>
//#include <vector>
//#include "admin.h"
//using namespace std;
////显示界面
//void display(string authority)
//{
//	cout <<endl<<"1、修改用户名" 
//		<< endl << "2、修改密码"
//		<< endl << "3、修改手机号";
//	if (authority == "管理员" || authority == "admin")
//	{
//		cout << endl << "4、删除用户"
//			<< endl << "5、停用用户";
//	}
//	if (authority == "admin")
//	{
//		cout << endl << "6、删除管理员"
//			<< endl << "7、停用管理员"
//			<< endl << "8、添加管理员" << endl;
//	}
//}
//
//void useAuthority(string userType, int num)
//{
//	string  newInfo;
//
//	if (userType == "用户")
//	{
//
//		switch (num)
//		{
//		case 1:
//		{
//			cout << "请输入新的用户名 ： ";
//			cin >> newInfo;
//
//		}
//		}
//	}
//}
////void runFunction(int choice)
////{
////    switch (choice)
////    {
////    case 0: {
////        for (auto& userObj : userVector)
////        {
////            userObj->show();
////        }
////    }
////    case 1:
////    {
////        int userId;
////        cout << "Enter user ID: ";
////        cin >> userId;
////        string newName;
////        cout << "Enter new username: ";
////        cin >> newName;
////
////        for (auto& userObj : userVector)
////        {
////            if (userObj->id == userId)
////            {
////                dynamic_cast<general*>(userObj)->revise_UserName(newName);
////                cout << "修改成功" << endl;
////                userObj->show(); // Display updated information
////                break;
////            }
////        }
////    }
////    break;
////
////    case 2:
////        // Implement logic for modifying password
////    {
////        int userId;
////        cout << "Enter user ID: ";
////        cin >> userId;
////        string newPassword;
////        cout << "Enter new password: ";
////        cin >> newPassword;
////
////        for (auto& userObj : userVector)
////        {
////            if (userObj->id == userId)
////            {
////                dynamic_cast<general*>(userObj)->revise_Password(newPassword);
////                cout << "修改成功" << endl;
////                userObj->show(); // Display updated information
////                break;
////            }
////        }
////    }
////    break;
////
////    case 3:
////        // Implement logic for modifying phone number
////    {
////        int userId;
////        cout << "Enter user ID: ";
////        cin >> userId;
////        string newPhone;
////        cout << "Enter new phone number: ";
////        cin >> newPhone;
////
////        for (auto& userObj : userVector)
////        {
////            if (userObj->id == userId)
////            {
////                dynamic_cast<general*>(userObj)->revise_Phone(newPhone);
////                cout << "修改成功" << endl;
////                userObj->show(); // Display updated information
////                break;
////            }
////        }
////    }
////    break;
////
////    case 4:
////        // Implement logic for deleting user
////    {
////        int userId;
////        cout << "Enter user ID to delete: ";
////        cin >> userId;
////
////        dynamic_cast<official*>(userVector[userId - 1])->delGeneral(userId - 1);
////        cout << "删除成功" << endl;
////    }
////    break;
////
////    case 5:
////        // Implement logic for stopping user
////    {
////        int userId;
////        cout << "Enter user ID to stop: ";
////        cin >> userId;
////
////        dynamic_cast<official*>(userVector[userId - 1])->stopGeneral(userId - 1);
////        cout << "停用成功" << endl;
////    }
////    break;
////
////    case 6:
////        // Implement logic for deleting admin
////    {
////        int userId;
////        cout << "Enter userID to delete: ";
////        cin >> userId;
////
////        if (userId < 13)
////        {
////            dynamic_cast<admin*>(userVector[userId - 1])->delOfficial(userId - 1);
////            cout << "删除成功" << endl;
////        }
////        else
////            cout << "删除失败" << endl;
////        }
////    break;
////
////    case 7:
////        // Implement logic for stopping admin
////    {
////        int userId;
////        cout << "Enter userID to stop: ";
////        cin >> userId;
////
////        if (userId < 13)
////        {
////            dynamic_cast<admin*>(userVector[userId - 1])->stopOfficial(userId - 1);
////            cout << "停用成功" << endl;
////        }
////        else
////            cout << "停用失败" << endl;
////    }
////    break;
////
////    case 8:
////        // Implement logic for adding admin
////    {
////        int userId;
////        cout << "Enter userID to stop: ";
////        cin >> userId;
////
////        dynamic_cast<admin*>(userVector[userId - 1])->upOfficial(userId - 1);
////    }
////    break;
////}