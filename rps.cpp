#include <iostream>
#include <string>
#include <random>
using namespace std;
typedef int bowl;

bowl main()
{
	bowl win = 0;
	string guess;
	mt19937 twizzlers((random_device())());
	uniform_int_distribution<> topTierAI(0,2);
	//																																																																																																random_device = yes
	cout << "Lets play the game named after the human objects rock, paper "
	<< "(from the organism known as trees), scissors (made out of a variety "
	<< "of matirials, most commonly plastic and metal." << endl;
	//																																																																																					hif
	while (win<10)
	{	
		cout << "Describe your special hand gesture (which object does it most closely resemble)\n";
		string humanObjects[]={"rock","paper","scissors"};//spaces=bad
		string cchoice = humanObjects[topTierAI(twizzlers)];
		cin >> guess;
		if	(	cchoice		==		guess	)			{		//	t  h  e		m  o  r  e		s  p  a  c  e  s     t  h  e      b  e  t  t  e  r
			cout << "it was a tie, the top tier AI also guessed" << guess;
		}
		else if((cchoice == "rock" && guess == "paper") || (cchoice == "paper" && guess == "scissors") || (cchoice == "scissors" && guess == "paper")) {
			cout << "you are bad. but to be fair it is a top tier ai" << guess;
		}
		else if ((cchoice == "paper" && guess == "rock") || (cchoice == "scissors" && guess == "paper") || (cchoice == "paper" && guess == "scissors")){
			cout << "you are ok, but i am quite sure you cheated as you beat a top tier ai, try again" << "once you beat it ten times, you will earn my respect (not really, but i want more wins for me)";
			win++;
		}
	}
	cout << "you technically won, but i wasn't even trying. i might try next time, if i think you can handle it. you probobally even cheated this time anyway.";

	// if()
	return 0;
}