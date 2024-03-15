#pragma once
#include <string>
#include <fstream>
#include "Serializable.h"

using std::string;
using std::ofstream;
using std::ifstream;


class IOManager
{
	string file_name;
public:
	IOManager(string filename)
		: file_name(filename){}

	void write_append(Serializable* object) {
		ofstream ofs(file_name,std::ios::app);
		ofs << object->serialize() << "\n";
		ofs.close();
	}

	void write(Serializable* object) {
		ofstream ofs(file_name);
		ofs << object->serialize() << "\n";
		ofs.close();
	}

	char* read(int size) {
		ifstream ifs(file_name);
		char* buffer = new char[size];
		ifs >> buffer;
		ifs.close();
		return buffer;
	}

	bool eof();
};

