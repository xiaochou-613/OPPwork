#pragma once
#include <vector>
#include <string>
//序列反序列化接口，借鉴Java序列化类，凡想序列化对象必须实现此类
class Serializable
{
protected:
	//made by charGPT:字符串分割，反序列化用。根据 separator 对 str 进行分割
	std::vector<std::string> splitString(const char* str, const char* separator) {
		std::vector<std::string> result;
		std::string input(str);
		std::string sep(separator);

		size_t startPos = 0;
		size_t endPos = input.find(sep);

		while (endPos != std::string::npos) {
			result.push_back(input.substr(startPos, endPos - startPos));
			startPos = endPos + sep.length();
			endPos = input.find(sep, startPos);
		}

		if (startPos < input.length()) {
			result.push_back(input.substr(startPos));
		}

		return result;
	}
	const char* separator{ "|||" };
public:
	virtual const char* serialize() = 0;
	virtual void deserialize(const char* data) = 0;
};

