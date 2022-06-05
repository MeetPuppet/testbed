#ifdef _DEBUG
#include "ConsoleMain.h"

ConsoleMain::ConsoleMain()
{
	count = 0;
}
ConsoleMain::~ConsoleMain()
{

}

void ConsoleMain::Print()
{
	cout << count++ << '\r';
}
#endif