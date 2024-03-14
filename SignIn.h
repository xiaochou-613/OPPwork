#pragma once
//#include "general.h"
//#include "official.h"
//#include "admin.h"

//void sign_in()
//{
//	string Pword ="123456";
//	string Pnum ="18040503043";
//
//	//10个用户
//	for (int i = 0; i < size(generalUser); i++) {
//		generalUser[i] = general(i+1, "用户", "2313208" + to_string(i), Pword, Pnum, "低");
//	}
//
//	//2个管理员
//	for (int i = 0; i < size(officialUser); i++)
//		officialUser[i] = official(i+11, "管理员", "2313209" + to_string(i), Pword, Pnum, "中");
//
//	//1个admin
//	adminUser = admin(13, "admin", "23132099", Pword, Pnum, "高");
//}

void data()
{
	int generalCount = 10;
	int officialCount = 2;
	int adminCount = 1;
    string Pword ="123456";
	string Pnum ="18040503043";

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