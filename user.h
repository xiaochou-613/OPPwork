#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Serializable.h"
using namespace std;
#pragma warning( disable : 4996)//关掉对于 strcpy 的警告
class user : public Serializable{
public:
	int id;
	string TpyeName; //普通用户  管理员  admin
	string authority; //三个等级   1、高 2、中 3、低
	
	user() : id(-1) {}
	user(int id, string TpyeName, string authority) :
		id(id), TpyeName(TpyeName), authority(authority) {};

	virtual ~user() {};
	virtual void show() = 0;

	const char* serialize() override {
		std::string total_buffer;
		total_buffer = total_buffer.append(to_string(id)).append(separator)
			.append(TpyeName).append(separator)
			.append(authority);

		char* result = new char[total_buffer.length() + 1];
		std::strcpy(result, total_buffer.c_str());

		return result;
	}
		;
	void deserialize(const char* data) override {
		auto result = splitString(data, separator);
		this->id = std::stoi(result[0]);
		this->TpyeName = result[1];
		this->authority = result[2];
	};
};

extern vector<user*> userVector;