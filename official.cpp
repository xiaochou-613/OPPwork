#include "official.h"

//ɾ���û�
bool official::delGeneral(int index)
{
	if (index > 9) return false;
	userVector[index] = new general();
	return true;
}
//ͣ���û�
bool official::stopGeneral(int index)
{
	if (index > 9)return false; //û��Ȩ��
	dynamic_cast<general*>(userVector[index])->IsStop = 'Y';
	return true;
}
