#include "IOManager.h"

bool IOManager::eof()
{
	ifstream ifs(file_name);
	return ifs.eof();
}
