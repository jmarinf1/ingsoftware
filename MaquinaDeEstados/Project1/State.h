#pragma once
#include <ostream>

class State
{
	enum STATE
	{
		DUCKING, 
		STANDING,
		JUMPING,
		DIVING

	};

private:
	STATE currentState;
public:
	State()
	{
		currentState = STANDING;
	}

	void Update()
	{
		printf("Current State: ");
		switch (currentState)
		{
		case State::DUCKING:
			printf("DUCKING\n");
			break;
		case State::STANDING:
			printf("STANDING\n"); 
			break;
		case State::JUMPING:
			printf("JUMPING\n"); 
			break;
		case State::DIVING:
			printf("DIVING\n");
			break;
		default:
			break;
		}
	}

	void ChangeState(char input)
	{
		switch (input)
		{
			case 'a':
				switch (currentState)
					{
					case State::DUCKING:
						currentState = STANDING;
						break;
					case State::STANDING:
						currentState = JUMPING;
						break;
					case State::JUMPING:
						currentState = DIVING;
						break;
					case State::DIVING:
						break;
					default:
						break;
					}
					break;

			case 'b':
				switch (currentState)
				{
				case State::STANDING:
					currentState = DUCKING;
					break;
				
				default:
					break;
				}

			default:
				printf("NOT AVAILABLE STATE INPUT AGAIN\n");
				break;
		}
	}
};