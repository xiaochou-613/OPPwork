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
			//������������,˵ʵ�����������general, ��user�Ƿ��Եö��ࣿ		user:�����ߣ�
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

