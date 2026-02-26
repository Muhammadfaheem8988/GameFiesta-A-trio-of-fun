/*
 * guessingclass.cpp
 *
 *  Created on: Jun 15, 2024
 *      Author: S-D-C TECH
 */

#include<iostream>
#include<conio.h>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
class guessing_number
{
	private:
		int user_guess,comp,guess_limit=3;
		int guess_taken=0;
	public:
		guessing_number()
		{
			int max=10,random;
		    srand(time(0));
		    random=(rand()%max)+1;
		    comp=random;
		}
		/*void getting_secretnumber()
		{
			int a;
			a=gen_random();
			comp=a;
		}*/
		void main_function()
		{
			cout<<"You just have 3 tries to Guess:"<<endl;
			while(guess_taken<guess_limit)
		{
		cout<<"Your "<<guess_taken+1<<" try. Guess a number from 0 to 10"<<endl; cin>>user_guess;
		if(user_guess==comp)
		{
			cout<<"Your Guessed number is Right"<<endl;
			break;
		}
		else if(user_guess<comp)
		{
			cout<<"You guessed lower number"<<endl;
		}
		else
		{
			cout<<"Your Guessed number is higher than secret number "<<endl;
		}
		guess_taken++;
	}
		}
};

