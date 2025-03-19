#include "State.h"
#include <iostream>
#include <windows.h>

#pragma comment(lib, "user32");
#define GetKey(X) (!!(GetAsyncKeyState(0[#X])&08000))

int main()
{
	State maquinaestados; 
	char input = 'c';
	printf("Welcome to State Machine\n");
	printf("input state for changing:\n");
	printf(" d = ducking \n s = standing \n j = jumping \n D = diving \n");
	while (true)
	{
		
		std::cin >> input;
		maquinaestados.ChangeState(input);
		maquinaestados.Update();
	}
}