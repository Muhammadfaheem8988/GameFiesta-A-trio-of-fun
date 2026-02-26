#include<iostream>
#include<conio.h>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "rock_paper_scissor_class.h"
#include "TIC_TAC_TOE_class.h"
#include "number_guessing_class.h"
using namespace std;
int main()
{
	rock_paper_scissor rps;
	int choice,c;
	tryagain:
	system ("CLS");
	cout<<"Which Game you Wanna Play"<<endl;
	cout<<"1. Rock Paper Scissor\n2. TIC TAC TOE\n3.Number Guessing Game"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				system ("CLS");
				system ("color 06");
				rps.gen_random();
				rps.main_function();
			}break;
		case 2:
			{
				tik_tak_toe tik;
				system ("CLS");
				system ("color 06");
				int next;
				system ("CLS");
				cout<<"\n\nEnter First Player Name:"<<endl;
				cin>>tik.player_1;
				cout<<"Enter Second Player Name:"<<endl;
				cin>>tik.player_2;
				tik.show();
				while(!tik.func2())
				{
					tik.func1();
					tik.func2();
				}
				if( tik.token=='x' && tik.tie==false)
					{
						cout<<tik.player_2<<" WIN"<<endl;
					}
				else if(tik.token=='0' && tik.tie==false)
				{
					cout<<tik.player_1<<" WIN"<<endl;
				}
				else{
				cout<<"It's a draw"<<endl;}
			}break;
		case 3:
			{
				system ("CLS");
				system ("color 06");
				guessing_number gn;
				//gn.getting_secretnumber();
				gn.main_function();

			}break;
		default:
			{
				cout<<"Invalid Choice"<<endl;
				goto tryagain;
			}
	}
	cout<<"Wanna play Again\n1. YES\n2. No"<<endl;
	cin>>c;
	if(c==1)
		goto tryagain;
return 0;
}

