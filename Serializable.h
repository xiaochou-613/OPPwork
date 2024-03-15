#pragma once
#include <vector>
#include <string>
//���з����л��ӿڣ����Java���л��࣬�������л��������ʵ�ִ���
class Serializable
{
protected:
	//made by charGPT:�ַ����ָ�����л��á����� separator �� str ���зָ�
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

