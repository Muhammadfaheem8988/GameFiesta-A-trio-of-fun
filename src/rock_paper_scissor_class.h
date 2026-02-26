/*
 * rockclass.cpp
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
class rock_paper_scissor
{
	private:
			int ab,user_score=0,comp_score=0;
    		int computer_choice,user_choice;
    		string comp,user;
	public:
		int gen_random()
		{
			system("color 03");
			int max=3,random;
		    srand(time(0));
		    random=(rand()%max)+1;
		    return random;
		}
		void show()
		{
	cout<<"            "<<"1. ROCK\n"<<"            "<<"2. SCISSOR\n"<<"            "<<"3. PAPER"<<endl;
		}
		void main_function()
		{
    	cout<<"                "<<"ONE ROUND HAS 5 LAPS\n"<<endl;
		int i=0;
    	while(i<5)
    	{
    	computer_choice=gen_random();
    	x:
    	if(i!=0)
    		sleep(2);
    	show();
    	cout<<"Please enter your choice:"<<endl;
    	cin>>user_choice;
    	if(user_choice==1)
    		user="ROCK";
    	else if(user_choice==2)
    		user="SCISSOR";
    	else if(user_choice==3)
    		user="PAPER";
    	else
    	{
		cout<<"Inavalid choice"<<endl;
		goto x;}
		if(computer_choice==1)
    		comp="ROCK";
    	else if(computer_choice==2)
    		comp="SCISSOR";
    	else if(computer_choice==3)
    		comp="PAPER";

		if(user=="SCISSOR" && comp=="PAPER" || user=="ROCK" && comp=="SCISSOR" || user=="PAPER" && comp=="ROCK")
		{		cout<<"YOU WIN"<<endl;user_score+=10;	}

		else if(comp=="SCISSOR" && user=="PAPER" || comp=="ROCK" && user=="SCISSOR" || comp=="PAPER" && user=="ROCK")
		{		cout<<"Computer WON"<<endl; comp_score+=10; 	}
		else
		{		cout<<"IT's a tie"<<endl;	}
		cout<<"\nComputer choice is:"<<comp<<endl;
		cout<<"Your choice was:"<<user<<endl;
		cout<<"\nComputer score is:"<<comp_score<<"\n Your score is:"<<user_score<<"\n\n"<<endl;
		i++;
	}
		}
};

