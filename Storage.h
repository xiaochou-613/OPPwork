#pragma once
#include "function.h"
#include "IOManager.h"
class Storage
{
	static const char* FILENAME;
public:
	static void continueSaveAll() {
		IOManager io(FILENAME);
		for (const auto& user : userVector)
		{
			//访问所有数据,说实话，如果存在general, 那user是否显得多余？		user:那我走？
			if (auto generalUser = dynamic_cast<general*>(user))
			{
				io.write_append(generalUser);
			}
		}
	}

	static void readAllData() {
		IOManager io(FILENAME);
		int size = sizeof(general) + 1;
		while (!io.eof()) {
			general* temp;
			char* data = new char[size];
			strcpy(data, io.read(size));
			temp->deserialize(data);
			userVector.push_back(temp);
		}
			
	}
};

