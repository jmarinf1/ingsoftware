#include "State.h"
#include <iostream>



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