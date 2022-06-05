
#ifdef _DEBUG
#ifdef UNICODE
#pragma comment(linker, "/entry:wWinMainCRTStartup /subsystem:console")
#else
#pragma comment(linker, "/entry:WinMainCRTStartup /subsystem:console")
#endif

#include <iostream>
#include <Vector>
using namespace std;

class ConsoleMain
{
private:
	int count;
	vector<string> vString;
public:
	ConsoleMain();
	~ConsoleMain();

	void Print();
};
#endif


