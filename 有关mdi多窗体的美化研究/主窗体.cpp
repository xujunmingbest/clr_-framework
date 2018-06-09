#include "主窗体.h"

#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;
using namespace 有关mdi多窗体的美化研究;

[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
int main()  
{
	Application::Run(gcnew 主窗体);

}
