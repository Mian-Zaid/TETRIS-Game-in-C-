//============================================================================
// Name        : Tetris_Game.cpp
// Author      : Muhamamd Zaid Ali  i160042
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;




int main()
{

//declare array..

const int height=25;
const int width=80;
char canvas[height][width];


//out put name...

for(int i=0;i<10;i++)
{
	for(int j=0;j<width;j++)
	{

		if(i==5 && j==33)
		{

		cout<<"TETRIS GAME";

		}

	else
	cout<<" ";

	}

	cout<<endl;
}


//making canvas..


for(int i=0;i<height;i++)
{

		for(int j=0;j<width;j++)
		{

			if((j==0 || j==width-1) && i>0 && i<height-1)
			{
				canvas[i][j]='|';
			}
			else
			{

			canvas[i][j]=' ';

			}

			if(i==0 || i==height-1)
			{
				canvas[i][j]='-';

			}


		}


}

//output canvas..



for(int i=0;i<height;i++)
{
	for(int j=0;j<width;j++)
	{

	cout<<canvas[i][j];

	}

	cout<<endl;
}



return 0;
}
