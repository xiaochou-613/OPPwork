#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class user {
public:
	int id;
	string TpyeName; //普通用户  管理员  admin
	string authority; //三个等级   1、高 2、中 3、低

	user() {}
	user(int id, string TpyeName, string authority) :
		id(id), TpyeName(TpyeName), authority(authority) {};

	virtual ~user() {};
	virtual void show() = 0;
};

vector<user*> userVector;