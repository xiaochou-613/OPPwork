#pragma once
#include "admin.h"
int userIndex(string userName, string passWord);

//登录数据
void data();

//登录操作
int lognIn();

//返回用户索引
int userIndex(string userName, string passWord);

//用户输入序号
int display(int userIndex);
//用户操作
void useAuthority(int choice, int userIndex);