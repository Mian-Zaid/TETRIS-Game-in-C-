//============================================================================
// Name        : Tetris_Game.cpp
// Author      : Muhamamd Zaid Ali  i160042
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include<string>
#include<conio.h>
#include <Windows.h>
using namespace std;




//declare main canvas array..

//const int height = 25;
//const int width = 80;
//char canvas[height][width];


int len = 0;
int wid = 0;
int timer=1000;

// Defining different shapes..

char shape_I1[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ' };

char shape_I2[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', 'o', 'o', 'o', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };


char shape_T1[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', 'o', 'o', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };


char shape_T2[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };


char shape_T3[5][5] = { ' ', ' ', ' ', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_T4[5][5] = { ' ', ' ', ' ', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
'o', 'o', 'o', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_L1[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_L2[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', 'o', 'o', ' ', ' ',
' ', ' ', 'o', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_L3[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', 'o', 'o', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_L4[5][5] = { ' ', ' ', ' ', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_L5[5][5] = { ' ', ' ', ' ', ' ', ' ',
' ', ' ', 'o', ' ', ' ',
'o', 'o', 'o', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_L6[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
'o', 'o', 'o', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_L7[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_L8[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };




char shape_Z1[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
' ', 'o', 'o', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

char shape_Z2[5][5] = { ' ', ' ', ' ', ' ', ' ',
' ', 'o', 'o', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };


char shape_Z3[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };


char shape_Z4[5][5] = { ' ', ' ', ' ', ' ', ' ',
' ', 'o', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
'o', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };



char shape_O[5][5] = { ' ', ' ', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
'o', 'o', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };

//Declaring an emtpy array...

char Empty[5][5] = { ' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };



char Empty2[5][5] = { ' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ', ' ' };



void Name(int width,int &timer,char canvas[][80],int &score)
{





	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < width; j++)
		{

			if (i == 5 && j == 0)
			{

				//cout << "#==============================================================================#\n";

				cout << "			####### ####### ####### ######    ###    #####\n";
				cout << "			   #    #          #    #     #    #    #     #\n";
				cout << "			   #    #          #    #     #    #    #\n";
				cout << "			   #    #####      #    ######     #     #####\n";
				cout << "			   #    #          #    #   #      #          #\n";
				cout << "			   #    #          #    #    #     #    #     #\n";
				cout << "			   #    #######    #    #     #   ###    ##### \n";

				if (timer > 0)
					cout << "												TIMER : " << timer-- << endl << endl;
				cout << "												SCORE : " << score<< endl;

				

			}

			else
				cout << " ";

		}

		cout << endl;
	}
}


//Menu function..

void menu(int width, char &a,int &ascii,char canvas[][80],int &score)
{
	Name(width,timer,canvas,score);

	bool condition = true;

	cout << "\n\n\t\t\t\t\t\t\tHow To Play Game : \n\n" << endl;
	cout << "\t\t\t\t\t\t\tPRESS RIGHT Navigation key to move shape Right \n";
	cout << "\t\t\t\t\t\t\tPRESS LEFT Navigation key to move shape Left \n";
	cout << "\t\t\t\t\t\t\tPRESS DOWN Navigation key to move shape Down \n";
	cout << "\t\t\t\t\t\t\tPRESS SPACE key to move shape Clockwise \n\n";

	cout << " IF You Want to PLAY Game : choose Y \n\n IF You Want to QUIT : choose Q \n\n";


	while (condition == true)
	{


		cout << "Choose >> ";
		cin >> a;

		 ascii = a;

		if (ascii == 113 || ascii == 81 || ascii == 121 || ascii == 89)
		{

			condition = false;


		}
		else
		{
			cout << "You Choose INVALID Key : So try again \n\n";
			condition = true;
		}
	}




}

//funtion to assign Random shape to an other array..

void Assign(char Empty[][5], int n2)
{



	if (n2 == 1)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_I1[i][j];
			}
		}
	}
	else if (n2 == 2)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_I2[i][j];
			}
		}
	}
	else if (n2 == 3)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_L1[i][j];
			}
		}
	}
	else if (n2 == 4)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_L2[i][j];
			}
		}
	}
	else if (n2 == 5)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_L3[i][j];
			}
		}
	}
	else if (n2 == 6)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_L4[i][j];
			}
		}
	}
	else if (n2 == 7)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_L5[i][j];
			}
		}
	}
	else if (n2 == 8)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_L6[i][j];
			}
		}
	}
	else if (n2 == 9)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_L7[i][j];
			}
		}
	}
	else if (n2 == 10)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_L8[i][j];
			}
		}
	}
	else if (n2 == 11)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_T1[i][j];
			}
		}
	}
	else if (n2 == 12)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_T2[i][j];
			}
		}
	}
	else if (n2 == 13)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_T3[i][j];
			}
		}
	}
	else if (n2 == 14)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_T4[i][j];
			}
		}
	}
	else if (n2 == 15)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_Z1[i][j];
			}
		}
	}
	else if (n2 == 16)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_Z2[i][j];
			}
		}
	}
	else if (n2 == 17)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_Z3[i][j];
			}
		}
	}
	else if (n2 == 18)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_Z4[i][j];
			}
		}
	}
	else if (n2 == 19)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty[i][j] = shape_O[i][j];
			}
		}
	}



}






//funtion to assign Random shape to an other array..

void NextRandom(char Empty2[][5], int n2)
{



	if (n2 == 1)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_I1[i][j];
			}
		}
	}
	else if (n2 == 2)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_I2[i][j];
			}
		}
	}
	else if (n2 == 3)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_L1[i][j];
			}
		}
	}
	else if (n2 == 4)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_L2[i][j];
			}
		}
	}
	else if (n2 == 5)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_L3[i][j];
			}
		}
	}
	else if (n2 == 6)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_L4[i][j];
			}
		}
	}
	else if (n2 == 7)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_L5[i][j];
			}
		}
	}
	else if (n2 == 8)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_L6[i][j];
			}
		}
	}
	else if (n2 == 9)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_L7[i][j];
			}
		}
	}
	else if (n2 == 10)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_L8[i][j];
			}
		}
	}
	else if (n2 == 11)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_T1[i][j];
			}
		}
	}
	else if (n2 == 12)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_T2[i][j];
			}
		}
	}
	else if (n2 == 13)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_T3[i][j];
			}
		}
	}
	else if (n2 == 14)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_T4[i][j];
			}
		}
	}
	else if (n2 == 15)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_Z1[i][j];
			}
		}
	}
	else if (n2 == 16)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_Z2[i][j];
			}
		}
	}
	else if (n2 == 17)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_Z3[i][j];
			}
		}
	}
	else if (n2 == 18)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_Z4[i][j];
			}
		}
	}
	else if (n2 == 19)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				Empty2[i][j] = shape_O[i][j];
			}
		}
	}



}




//function to make canvas..

void Canvas(int height, int width, char canvas[][80])
{

	for (int i = 0; i < height; i++)
	{

		for (int j = 0; j<width; j++)
		{

			for (int k = 0; k<height; k++)
			{
				for (int l = 0; l<19; l++)
				{
					canvas[k][l] = ' ';
				}
			}

			if ((j == 19 || j == width - 20) && i>0 && i < height - 1)
			{
				canvas[i][j] = '#';
			}
			else
			{
				canvas[i][j] = ' ';
			}

			if ((i == 0 && (j >= 19 && j <= width - 20)) || (i == height - 1 && (j >= 19 && j <= width - 20)))
			{
				canvas[i][j] = '#';
			}

			for (int i = 0; i < height; i++)
			{
				for (int j = width - 19; j < width; j++)
				{


					if (i == 9 && j == width - 13)
					{
						canvas[i][j] = 'N';
					}
					else if (i == 9 && j == width - 12)
					{
						canvas[i][j] = 'E';
					}
					else if (i == 9 && j == width - 11)
					{
						canvas[i][j] = 'X';
					}
					else if (i == 9 && j == width - 10)
					{
						canvas[i][j] = 'T';
					}
					else if (i == 9 && j == width - 9)
					{
						canvas[i][j] = ' ';
					}
					else if (i == 9 && j == width - 7)
					{
						canvas[i][j] = 'S';
					}
					else if (i == 9 && j == width - 6)
					{
						canvas[i][j] = 'H';
					}
					else if (i == 9 && j == width - 5)
					{
						canvas[i][j] = 'A';
					}
					else if (i == 9 && j == width - 4)
					{
						canvas[i][j] = 'P';
					}
					else if (i == 9 && j == width - 3)
					{
						canvas[i][j] = 'E';
					}
					else
					{
						canvas[i][j] = ' ';
					}

				}
			}


		}


	}



	//output canvas..



	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{

			cout << canvas[i][j];

		}

		cout << endl;
	}


}

//function to input shape into main canvas..

void Input_Shape(int height, int width, char canvas[][80], char Empty[][5])
{
	int i = 0;
	int j = 38;
	for (int k = 0; k < 5; ++k, ++i)
	{
		j = 38;
		for (int l = 0; l < 5; ++l, ++j)
		{
			if (canvas[i][j] == ' ')
			{
				canvas[i][j] = Empty[k][l];
			}

		}
	}


	//output...


	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{

			cout << canvas[i][j];

		}

		cout << endl;
	}


}




void Input_Shape_2(int height, int width, char canvas[][80], char Empty2[][5])
{
	int i = 10;
	int j = width - 12;
	for (int k = 0; k < 5; ++k, ++i)
	{
		j = width - 12;
		for (int l = 0; l < 5; ++l, ++j)
		{
			if (canvas[i][j] == ' ')
			{
				canvas[i][j] = Empty2[k][l];
			}

		}
	}



	//output...


	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << canvas[i][j];
		}

		cout << endl;
	}

}

//spaces ..

void spaces(int height, int width, char canvas[][80])
{
	for (int i = 0; i < height; i++)
	{
		for (int j = width - 19; j < width; j++)
		{
			if (i >= 10 && i <= 14 && j >= width - 12 && j <= width - 8)
			{
				if (canvas[i][j] == 'o')
				{
					canvas[i][j] = ' ';
				}
			}
		}
	}
}



//function to find length and witdh of sahpe..

void lenWidth(char Empty[][5], int &len, int &wid)
{
	len = 0;
	wid = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (Empty[i][j] == 'o')
			{
				len++;
				j = 5;
			}
		}
	}


	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (Empty[i][j] == 'o')
			{
				wid++;
				i = 5;
			}
		}
	}

	//cout << "len = " << len << endl;
	//cout << "width = " << wid << endl;
}


//funtion to swap shape from up to down..

void swap(char canvas[][80],char canvas0[][80], int height, int width, int start_x, int start_y)
{
	int score = 0;
	char key;
	int asciivalue;

	int right_y = start_y;
	int right_x = start_x;

	lenWidth(Empty, len, wid);  //calling length width function..

	bool check = 1;
	for (; check;)
	{

		//input key..

		key = _getch();
		asciivalue = key;
		bool ch = 1;
		for (int i = 1, k = start_y; i < len + 1; ++i, ++k){
			for (int j = 0, l = start_x; j < wid + 1; ++j, ++l){
				if (((Empty[i][j] == 'o') && ((canvas0[k + 1][l] == 'o') || (canvas0[k + 1][l] == '#'))))
				{
					ch = 0;
					check = 0;
				}
			}
		}
		if (ch == 0){
			for (int i = 0; i < 25; ++i){
				for (int j = 0; j < 80; ++j){
					canvas0[i][j] = canvas[i][j];
				}
			}
		}



		if (ch)
		{


			if ((asciivalue == 80) || (asciivalue == 77) || (asciivalue == 75) || (asciivalue == 32) || asciivalue == 113 || asciivalue == 81)
			{


				//down move..

				if (asciivalue == 80)
				{

					for (int i = start_y + len; i > start_y; i--)
					{
						for (int j = start_x; j < start_x + wid; j++)
						{
							if (!((canvas[i][j] == 'o') && (canvas[i - 1][j] == ' ')))
							{

								int temp = canvas[i][j];
								canvas[i][j] = canvas[i - 1][j];
								canvas[i - 1][j] = temp;
							}
						}
					}
					start_y++;
				}


				//right move..

				if (asciivalue == 77)
				{


					bool s = 1;
					for (int j = start_x + wid; j > start_x; j--)
					{
						for (int i = start_y; i < start_y + len; i++)
						{

							s = 1;
							for (int k = start_y + len - 1, l = start_x + wid; k>start_y; --k)
							{
								if ((canvas[k][l] == '#') && (canvas[k][l - 1] == 'o'))
								{
									s = 0;
								}
							}
							if (s)
							{
								if (!((canvas[i][j] == 'o') && (canvas[i][j - 1] == ' ')))
								{
									int temp = canvas[i][j];
									canvas[i][j] = canvas[i][j - 1];
									canvas[i][j - 1] = temp;
								}
							}

						}
					}
					if (s){
						start_x++;
					}
				}

				//left move...



				if (asciivalue == 75)
				{


					bool s = 1;
					for (int j = start_x; j < start_x + wid; j++)
					{
						for (int i = start_y; i < start_y + len; i++)
						{

							s = 1;
							for (int k = start_y, l = start_x; k < start_y + len; ++k)
							{
								if ((canvas[k][l - 1] == '#') && (canvas[k][l] == 'o'))
								{
									s = 0;
								}
							}
							if (s)
							{
								if (!((canvas[i][j - 1] == 'o') && (canvas[i][j] == ' ')))
								{
									int temp = canvas[i][j - 1];
									canvas[i][j - 1] = canvas[i][j];
									canvas[i][j] = temp;
								}
							}

						}
					}
					if (s){
						start_x--;
					}
				}

				//rotation..


				if (asciivalue == 32)
				{
					char flip[5][5];
					for (int i = len; i >= 1; --i){
						for (int j = 0; j < wid; ++j){
							flip[j + 1][i - 1] = Empty[len - i + 1][j];

						}
					}
					for (int i = 0; i < 5; ++i){
						for (int j = 0; j < 5; ++j){
							Empty[i][j] = ' ';
						}
					}
					for (int i = 1; i < wid + 1; ++i){
						for (int j = 0; j < len; ++j){

							Empty[i][j] = flip[i][j];
						}
						cout << endl;
					}
					for (int i = start_y, k = 1; k < len + 1; ++i, ++k){
						for (int j = start_x, l = 0; l < wid; ++j, ++l){
							canvas[i][j] = ' ';
						}
					}
					int temp = len;
					len = wid;
					wid = temp;
					for (int i = start_y, k = 1; k < len + 1; ++i, ++k){
						for (int j = start_x, l = 0; l < wid; ++j, ++l){
							canvas[i][j] = Empty[k][l];
						}
					}

				}



				if (asciivalue == 113 || asciivalue == 81)
				{


					for (int i = 0; i < 8; i++)
					{
						for (int j = 0; j < 8; j++)
						{
							cout << " ";

						}
						cout << endl;
					}

					cout << "		 #####     #    #     # ####### ####### #     # ####### ######\n";
					cout << "		#     #   # #   ##   ## #       #     # #     # #       #     #\n";
					cout << "		#        #   #  # # # # #       #     # #     # #       #     #\n";
					cout << "		#  #### #     # #  #  # #####   #     # #     # #####   ######\n";
					cout << "		#     # ####### #     # #       #     #  #   #  #       #   #\n";
					cout << "		#     # #     # #     # #       #     #   # #   #       #    #\n";
					cout << "		 #####  #     # #     # ####### #######    #    ####### #     #\n";


					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 8; j++)
						{
							cout << " ";

						}
						cout << endl;
					}

					exit(0);

				}

				

			}

		}
		system("cls");

		Name(width, timer, canvas, score); // calling name function ..

		//if (timer > 0)
		//{

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				cout << canvas[i][j];
			}
			cout << endl;
		}

		Sleep(0);

		//}

		//End of Game..

		if (canvas[1][38] == 'o' || canvas[1][39] == 'o' || canvas[1][40] == 'o' || canvas[1][41] == 'o' || canvas[1][42] == 'o')
		{
			system("cls");


			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					cout << " ";

				}
				cout << endl;
			}

			cout << "		 #####     #    #     # ####### ####### #     # ####### ######\n";
			cout << "		#     #   # #   ##   ## #       #     # #     # #       #     #\n";
			cout << "		#        #   #  # # # # #       #     # #     # #       #     #\n";
			cout << "		#  #### #     # #  #  # #####   #     # #     # #####   ######\n";
			cout << "		#     # ####### #     # #       #     #  #   #  #       #   #\n";
			cout << "		#     # #     # #     # #       #     #   # #   #       #    #\n";
			cout << "		 #####  #     # #     # ####### #######    #    ####### #     #\n";


			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					cout << " ";

				}
				cout << endl;
			}

			for (int k = 0; k < 30; k++)
			{
				cout << " ";
				if (k == 29)
					cout << "SCORE : " << score << endl;
			}

		}
	}

}

//fumction to move spaces upward and add score..


void MoveUpward(char canvas[][80], int width,int height,int &score)
{

	
	int var = 0;
	int check;
	for (int i = 0; i < height; ++i)
	{
		check = 1;
		for (int j = 21; j <= width - 20; ++j)
		{
			char a = canvas[i][20];
			if ((canvas[i][j] == a) && a == 'o')
			{
				check++;
			}
			if (check == 40)
			{
				score++;

				var = i;
				for (int a = i, b = 20; b < width - 20; ++b)
				{
					canvas[a][b] = ' ';
				}
				break;


			}
		}
	}

	if (check == 40)
	{

	

		for (int i = 0; i < 25; ++i)
		{
			for (int j = 0; j < 80; ++j)
			{
				cout << canvas[i][j];
			}
			cout << endl;
		}

		Sleep(1000);
		system("cls");




		for (int i = var; i > 0; i--)
		{
			for (int j = 20; j < width - 20; j++)
			{
				int temp = canvas[i][j];
				canvas[i][j] = canvas[i - 1][j];
				canvas[i - 1][j] = temp;
			}
		}

		
		for (int i = 0; i < 25; ++i)
		{
			for (int j = 0; j < 80; ++j)
			{
				cout << canvas[i][j];
			}
			cout << endl;
		}

		Sleep(1000);
		system("cls");

	}

}

/*void timer()
{
	int msec = 9;
	int sec = 0;
	int min = 0;



	for (int i = 0; i < 2; i--)
	{

		if (msec == 10)
		{
			++sec;
			msec = 9;
		}
		if (sec == 60)
		{
			++min;
			sec = 0;
		}


		//cout << "\n\nTimer :\n\n " << endl;

		//cout << min << " : " << sec << endl;
		++msec;
		Sleep(1000);
		if (min == 1)
			break;

		//system("cls");
	}
}*/




//main function...

int main()
{


	//declare main canvas array..

	const int height = 25;
	const int width = 80;
	char canvas[height][width];
	char canvas0[height][width];
	char a;
	int ascii;
	int score = 0;


	menu(width, a,ascii,canvas,score);    //calling menu function ...


	int n = rand() % 19 + 1;
	int n2 = n;

	

	if (ascii == 121 || ascii==89)
	{


		Canvas(height, width, canvas);   //making canvas..

		//assigning values of main canvas to another canvas..

		for (int i = 0; i < 25; ++i){
			for (int j = 0; j < 80; ++j){
				canvas0[i][j] = canvas[i][j];
			}
		}

		

			while (canvas[1][38] == ' ' && canvas[1][39] == ' ' && canvas[1][40] == ' ' && canvas[1][41] == ' ' && canvas[1][42] == ' ')
			{

				Assign(Empty, n2);   //Assigning  Random shape to Empty array..

				Input_Shape(height, width, canvas, Empty); //Adding shape to canvas..

				srand(time(0));
				n2 = rand() % 19 + 1;      //Generating Random Number for shape..


				NextRandom(Empty2, n2);   //next random shape..

				Input_Shape_2(height, width, canvas, Empty2); //Adding 2nd random shape to canvas..


				int start_x = 38;
				int start_y = 1;
				swap(canvas, canvas0, height, width, start_x, start_y);    //swaping sahpe downward..	

				MoveUpward(canvas, width, height,score);    //moving spces upward after removing one row..



				spaces(height, width, canvas);   //producing spaces after showing next shape..
			}

	}


	if (ascii == 113 || ascii == 81)
	{


		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				cout << " ";

			}
			cout << endl;
		}

		cout << "		 #####     #    #     # ####### ####### #     # ####### ######\n";
		cout << "		#     #   # #   ##   ## #       #     # #     # #       #     #\n";
		cout << "		#        #   #  # # # # #       #     # #     # #       #     #\n";
		cout << "		#  #### #     # #  #  # #####   #     # #     # #####   ######\n";
		cout << "		#     # ####### #     # #       #     #  #   #  #       #   #\n";
		cout << "		#     # #     # #     # #       #     #   # #   #       #    #\n";
		cout << "		 #####  #     # #     # ####### #######    #    ####### #     #\n";


		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				cout << " ";

			}
			cout << endl;
		}



	}





	/*char key;
	int asciivalue;


	while (1)

	{
	key = _getch();
	asciivalue = key;

	if (asciivalue == 27)
	{
	break;
	}
	cout << "Key Pressed  " << " " << key << " " << "  has the ascii value of " << asciivalue << endl;


	}

	*/
	system("pause");
	return 0;
}
