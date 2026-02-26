/*
 * TICclass.cpp
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
class tik_tak_toe
{
	public:
		char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
		string player_1,player_2;
		char token='x';
		int user,row,col;
		bool tie;
	void show(){
	cout<<"\n                 "<<"TIK TAK TOE GAME\n"<<endl;
	cout<<"\n                 "<<"GAME DESIGNED BY MUHAMMAD FAHEEM\n"<<endl;
	cout<<"                 "<<"----------------------------------"<<endl;
	cout<<"                 "<<"|         |          |           |"<<endl;
	cout<<"                 "<<"|    "<<space[0][0]<<"    |     "<<space[0][1]<<"    |     "<<space[0][2]<<"     |"<<endl;
	cout<<"                 "<<"|---------------------------------"<<endl;
	cout<<"                 "<<"|         |          |           |"<<endl;
	cout<<"                 "<<"|   "<<space[1][0]<<"     |     "<<space[1][1]<<"    |     "<<space[1][2]<<"     |"<<endl;
	cout<<"                 "<<"|---------------------------------"<<endl;
	cout<<"                 "<<"|         |          |           |"<<endl;
	cout<<"                 "<<"|   "<<space[2][0]<<"     |     "<<space[2][1]<<"    |     "<<space[2][2]<<"     |"<<endl;
	cout<<"                 "<<"----------------------------------"<<endl;

	cout<<"As "<<player_1<<"is first player \nso he will play first"<<endl;
	cout<<player_1<<" =X"<<endl<<player_2<<" =O"<<endl;
}
void func1(){
	if(token=='x')
	{
	cout<<"\n"<<player_1<<"\nEnter your space please:"<<endl;
	cin>>user;
	}
	else{
			cout<<"\n"<<player_2<<"\nEnter your space please:"<<endl;
			cin>>user; }
	if(user==1)
		{row=0;col=0;}
	else if(user==2)
		{row=0;col=1;}
	else if(user==3)
		{row=0;col=2;}
	else if(user==4)
		{row=1;col=0;}
	else if(user==5)
		{row=1;col=1;}
	else if(user==6)
		{row=1;col=2;}
	else if(user==7)
		{row=2;col=0;}
	else if(user==8)
		{row=2;col=1;}
	else if(user==9)
		{row=2;col=2;}
	else
		{cout<<"                 "<<"Invalid space"<<endl;}
if(token=='x' && space[row][col] !='x' && space[row][col] !='0')
{
	space[row][col]='x';token='0';
}
else if(token=='0' && space[row][col] !='x' && space[row][col] !='0')
{
	space[row][col]='0';token='x';
}
else
	cout<<"                 "<<"Space already taken"<<endl;
	cout<<"                 "<<"----------------------------------"<<endl;
	cout<<"                 "<<"|         |          |           |"<<endl;
	cout<<"                 "<<"|    "<<space[0][0]<<"    |     "<<space[0][1]<<"    |     "<<space[0][2]<<"     |"<<endl;
	cout<<"                 "<<"|---------------------------------"<<endl;
	cout<<"                 "<<"|         |          |           |"<<endl;
	cout<<"                 "<<"|   "<<space[1][0]<<"     |     "<<space[1][1]<<"    |     "<<space[1][2]<<"     |"<<endl;
	cout<<"                 "<<"|---------------------------------"<<endl;
	cout<<"                 "<<"|         |          |           |"<<endl;
	cout<<"                 "<<"|   "<<space[2][0]<<"     |     "<<space[2][1]<<"    |     "<<space[2][2]<<"     |"<<endl;
	cout<<"                 "<<"----------------------------------"<<endl;
}
bool func2()
{
	for(int i=0;i<=2;i++)
	{
		if(space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i] )
		{
			tie=false;
			return true;
		}
	}
		if(space[0][0] == space[1][1] && space[0][0] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0])
			{
			tie=false;
			return true;
		}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		if(space[i][j] !='x' && space[i][j] !='0')
		{
		return false;
		}
	}
	}
	tie=true; return false;
}
~tik_tak_toe() {}
};

