//#include "SignIn.h"
//#include "print.h"
//#include "logn.h"
//int display(string authority);
#include "function.h"
/**
-用户管理系统
要求：  
1） 该系统主要处理用户的相关信息。  
2） 用户类型信息主要包括：编号、类型名称、权限等级等内容。权限等级分为3个等级。  
3） 普通用户信息主要包括：编号、用户名、密码、用户类型、联系方式、是否停用等内容。普通用户可以修改自己的信息，但不能删除自己。 
4） 管理员用户信息主要包括：编号、用户名、用户类型、联系方式、是否停用等内容。管理员用户可以对普遍用户进行删除操作，也可以执行停用或启用普遍用户的操作。 
5） 超级用户一名，用户名为：admin。编号、用户名、用户类型、联系方式等内容，具有最高等级权限，可以对普通用户和管理员用户进行删除操作、停用或启用、将普通用户提升为管理员用户等操作。
6） 实现普通用户功能：注册、登录、修改自身信息；
7） 实现管理员功能：注册（刚注册为普通用户）、登录、修改自身信息、对普通用户的查看、修改、删除、启用、停用；
8） 实现超级用户功能：登录、修改自身信息、对普通用户和管理员用户的查看、修改、删除、启用、停用，将普通用户提升为管理员；

 提示：   
1) 增加必要的数据成员、成员函数或类 
2) 使用继承、对象成员（用户类型）  超级管理员能查看和分页欣赏普遍用户与管理员用户。
*/

void main()
{
	data();
	//登录成功
	int userIndex = lognIn();
	if (userIndex == -1)return;

	while(1)
		useAuthority(display(userIndex),userIndex);
}

//int display(string authority)
//{
//	int index;
//	cout<<endl<< "0、查看所有信息"
//		<< endl << "1、修改用户名"
//		<< endl << "2、修改密码"
//		<< endl << "3、修改手机号" ;
//	if (authority == "管理员" || authority == "admin")
//	{
//		cout << endl << "4、删除用户"
//			<< endl << "5、停用用户" ;
//	}
//	if (authority == "admin")
//	{
//		cout << endl << "6、删除管理员"
//			<< endl << "7、停用管理员"
//			<< endl << "8、添加管理员" ;
//	}
//	cout <<endl <<"请输入序号 ： ";
//
//	cin >> index;
//
//	//判断权限
//	if (authority == "用户" && index > 3)return -1;
//	if (authority == "管理员" && index > 5)return -1;
//	if (authority == "admin" && index > 8)return -1;
//	return index;
//}