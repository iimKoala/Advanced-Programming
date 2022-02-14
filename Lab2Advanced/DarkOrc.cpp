#include "DarkOrc.h"
#include <iostream>
using namespace std;


bool DarkOrc::magicFunc()
{
	if (DOMagic == true)
	{
		DODamage = 30;
		return DODamage;
	}
	
}

int DarkOrc::DOAttack()
{
	bool DOMagic = true;
	cout << DOWarCry << endl;
	return magicFunc();
	


}

