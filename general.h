#include "user.h"

class general : public user
{
public:
	string UserName;
	string Password;
	string Phone;
	char IsStop;

	general(){}
	general(int id, string Tname, string Uname, string Pword, string Pnum, string authority) :
		UserName(Uname), Password(Pword), Phone(Pnum), IsStop('N'), user(id, Tname, authority) {};

	
	void revise_UserName(string newName);
	void revise_Password(string newPwold);
	void revise_Phone(string newPhone);

	void show() override;

	const char* serialize() override {
		std::string total_buffer;
		total_buffer = total_buffer.append(to_string(id)).append(separator)
			.append(TpyeName).append(separator)
			.append(authority).append(separator)

			.append(UserName).append(separator)
			.append(Password).append(separator)
			.append(Phone).append(separator);

		char* result = new char[total_buffer.length() + 1];
		std::strcpy(result, total_buffer.c_str());

		return result;
	}
	;
	void deserialize(const char* data) override {
		try {
			auto result = splitString(data, separator);
			this->id = std::stoi(result[0]);
			this->TpyeName = result[1];
			this->authority = result[2];
			this->UserName = result[3];
			this->Password = result[4];
			this->Phone = result[5];
		}
		catch (const char* what) {
			cerr << endl << "Something went wrong...\n" << what << endl << endl;
		}
		
	};
};

