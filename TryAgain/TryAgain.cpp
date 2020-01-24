#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include<processthreadsapi.h>

using namespace std;




 bool runing1 = false;
 bool runing2 = false;
 
 bool runingArr[2] = { runing1,runing2 };

 int goToNextFunc = 0;

 int incrementNextFunx() {
	 goToNextFunc + 1;
 };

 bool test = runingArr[goToNextFunc];
 

void infinite_loop() {

	cout << "i only know looping";
	infinite_loop;
}

DWORD WINAPI ThreathFunc(LPVOID lpParam)
{
	
	while (runing1 == true) {
		
		cout << "loop loop";
		
		
		
	}
	return 0;
	
		
}

DWORD WINAPI stuffs(LPVOID lpParam) {

	while (runing2 ==true) {
		
		cout << "fuck";
	
	}
	return 0;
}



int main()
{
	cout << test;
	HANDLE hThread;
	HANDLE hThread2;
	DWORD ThreathID;

	hThread = CreateThread(
		NULL,
		0,
		ThreathFunc,
		NULL,
		0,
		&ThreathID);
	hThread2 = CreateThread(
		NULL,
		0,
		stuffs,
		NULL,
		0,
		&ThreathID);

	/*GetExitCodeThread(hThread, &exitCode);
	ExitThread(exitCode);
	printf("Thread Closed");
	*/

	//WaitForSingleObject(hThread,100);
	if (hThread == NULL) {
		cout << "Error";
	}
	
	//cout << "success";
	
	//cout << ThreathID;
	while (1);
	

	return 0;

	
}