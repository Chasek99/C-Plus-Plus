#include <iostream> // including required headers
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <iomanip>

using namespace std;
//several functions for certain operations
void menu();
void game();
void controls(char s[][22], int temp[][22], int eating);
void credits();
void table(char s[][22], int score);
bool checkFood(char s[][22], int fx, int fy);
void spawnFood(char s[][22], int & fx, int & fy);
bool gameover(char s[][22], int temp[][22]);
void endgame(int score, int highscore);
void help();
void options();
void difficulty();
void pause();

int lenght; //several variables
char contr = 'n';
int chek[32][22];
double diff = 0.5; //difficulty variable, how fast snake moves (default-normal(0.5 sec)

int main()
{
	srand(time(0)); //seeding random numb gen
	int i;
	char sl; //selection variable
	for (i = 0; i<9999; i++)
	{
		if (i>0)
		{
			cout << "" << endl;
			cout << "Do you want to play again ? [y/n]   ";
			cin >> sl;
			if (sl == 'y')
			{
				system("cls"); //clearing screen
				goto start;
			}
			else goto quit;
		}
	start: //starting program
		{
			menu(); //showing menu screen
		}
		cin >> sl; //selections for playing,options and exit
		if (sl == '1')
		{
			system("cls"); //clears screen
			game(); //calling game function, starting game
			i = 1;
		}
		else if (sl == '2')
		{
			options();
			system("cls");
			goto start;
			i = 1;
		}
		else if (sl == '3') goto quit;
		else
		{
			system("cls");
			i = 1;
			goto start;
		}
	}
quit: //quits program
	{
		system("exit");
	}

	return 0;
}


void table(char s[][22], int score)  //function for showing table (screen in which snake moves
{
	int x = 32; //i am using coordinates for displaying the table
	int y = 22;
	int i, j;
	for (i = 0; i<y; i++)
	{
		for (j = 0; j<x; j++)
		{
			if (j<(x - 1)) cout << s[j][i];
			if (j == (x - 1)) cout << s[j][i] << endl;
		}
	}
	cout << "" << endl;
	cout << "Your score: " << score;
}

void game()
{
	char s[32][22]; //a 2-dimensional array for storing all particles in the screen;
	int temp[32][22]; //an array for numbering snake parts and storing them
	int i, j, fx, fy, x, y, score = 0, highscore = score; //several variables
	double k;
	int eating; //if snake eats food, this becomes 1, and snake gains lenght
	//preparations for game: setting table borders
	for (i = 0; i<22; i++)
	{
		for (j = 0; j<32; j++)
		{
			if (i == 0 || i == 21) s[j][i] = '-';
			if (i>0 && i<21) s[j][i] = ' ';
			if (j == 0 || j == 31) s[j][i] = '|';
		}
	}
	spawnFood(s, fx, fy); //calling food spawn function
	for (y = 1; y<21; y++)
	{
		for (x = 1; x<31; x++)
		{
			temp[x][y] = 0; //setting all the temp values to 0,
		}                 //to see where snake parts are, and where nothing (0);
	}
	s[17][10] = 'o'; //finally, sets primary snake position. o is head.
	s[16][10] = '*';
	s[15][10] = '*';

	temp[15][10] = 3; //numbering snake parts
	temp[16][10] = 2;
	temp[17][10] = 1;

	system("cls");
	table(s, score); //calling table function to show a table
	lenght = 3; //snake primary lenght

	while (true) //game starts
	{
		eating = 0; //setting value to 0, because snake hasnt eaten anything
		Sleep(diff * 1000); //delaying some time, how fast snake moves depends on difficulty
		if (kbhit()) //checking if some key is pressed
		{
			contr = getch(); //if pressed, getting info about that key. this is needed for snake controls
			if (contr == '0') pause(); //if 0, pauses game
			goto movemake; //starts making snake moves
		}
		else
		{
			goto movemake; //if no key is pressed, snake just moves
		}
	movemake:
		{
			for (x = 1; x<31; x++) //a loop for checking where are snake parts
			{
				for (y = 1; y<21; y++)
				{
					if (s[x][y] == '*')
					{
						chek[x][y] = 1; //this is needed for checking if snake hits its tail or borders
					}
					else chek[x][y] = 0;
				}
			}
			if (checkFood(s, fx, fy) == true) //if snake eats something, some info needs to be sent for snake to gain lenght
			{
				eating = 1;
				score = score + 1;
				controls(s, temp, eating); //calling snake control and movement function
				spawnFood(s, fx, fy);
			}
			else
			{
				controls(s, temp, eating); //snake only moves
			}

			if (gameover(s, temp) == true) goto gameEnd; //if snake has hit something, game terminates
			else
			{
				goto LoopEnd;
			}
		}

	LoopEnd: //when loop ends, screen clears, updated table and score shows
		{
			system("cls");
			table(s, score);
			if (score>highscore) highscore = score;
		}
	}
gameEnd:
	{
		endgame(score, highscore); //calls endgame screen
		return; //returns to int main
	}
}
Edit & Run
Apr 2, 2014 at 1:42pm
hakeris1010(65)
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
void controls(char s[][22], int temp[][22], int eating) //finally, the coolest part :)
{
	int i, x, y;
	for (i = lenght; i>0; i--) //snake starts moving from tail to head
	{
		if (i == lenght) //when i equals to the number of snakes last part
		{
			for (x = 1; x<31; x++)
			{
				for (y = 1; y<21; y++)
				{
					if (temp[x][y] == i && s[x][y] == '*')
					{
						if (eating == 0) //if snake doesnt eat anything, the last part just disappears
						{
							s[x][y] = ' '; temp[x][y] = 0;
							x = 30;
							y = 20;
						}
						else if (eating == 1) //if snake eats food, it moves, but the last part stays there,
						{                  //giving snake 1 more part
							s[x][y] = '*'; temp[x][y] = lenght + 1;
							lenght++; //this new part number will be new length
							x = 30;
							y = 20;
						}
					}
				}
			}
		}
		else if (i>1 && i<lenght) // all other snake parts stays where they are, but
		{                        // their values (temp) will increase by 1
			for (x = 1; x<31; x++)
			{
				for (y = 1; y<21; y++)
				{
					if (temp[x][y] == i && s[x][y] == '*')
					{
						temp[x][y] = i + 1;
						x = 30;
						y = 20;
					}
				}
			}
		}
		else if (i == 1) //the hardest part, when i is equal to snake's head value.
		{
			for (x = 1; x<31; x++)
			{
				for (y = 1; y<21; y++)
				{
					if (temp[x][y] == i && s[x][y] == 'o')
					{
					movecheck:
						if (contr != '8' && contr != '2' && contr != '4' && contr != '6') //if no control button is pressed,
						{                                                       //snake just moves in its direction forward
							s[x][y] = '*'; temp[x][y] = i + 1;
							if (temp[x - 1][y] == i + 2) //several situations
							{
								s[x + 1][y] = 'o'; temp[x + 1][y] = 1;
								return; //when snake moves its head, loop ends, we return to void game
							}
							else if (temp[x + 1][y] == i + 2)
							{
								s[x - 1][y] = 'o'; temp[x - 1][y] = 1;
								return;
							}
							else if (temp[x][y + 1] == i + 2)
							{
								s[x][y - 1] = 'o'; temp[x][y - 1] = 1;
								return;
							}
							else if (temp[x][y - 1] == i + 2)
							{
								s[x][y + 1] = 'o'; temp[x][y + 1] = 1;
								return;
							}
						}
						else if (contr == '8') //if control buttons are pressed, snake moves to that direction
						{
							if (temp[x][y - 1] == 0) //if the value of the square in front of snake's head equals 0
							{                   //snake can move to it
								s[x][y] = '*'; temp[x][y] = i + 1;
								s[x][y - 1] = 'o'; temp[x][y - 1] = 1;
								return;
							}
							else //if not, we return to checking if control button is pressed
							{    //the new contr value will not be control button
								contr = 'n';
								goto movecheck;
							}
						}
						else if (contr == '2')
						{
							if (temp[x][y + 1] == 0)
							{
								s[x][y] = '*'; temp[x][y] = i + 1;
								s[x][y + 1] = 'o'; temp[x][y + 1] = 1;
								return;
							}
							else
							{
								contr = 'n';
								goto movecheck;
							}
						}
						else if (contr == '4')
						{
							if (temp[x - 1][y] == 0)
							{
								s[x][y] = '*'; temp[x][y] = i + 1;
								s[x - 1][y] = 'o'; temp[x - 1][y] = 1;
								return;
							}
							else
							{
								contr = 'n';
								goto movecheck;
							}
						}
						else if (contr == '6')
						{
							if (temp[x + 1][y] == 0)
							{
								s[x][y] = '*'; temp[x][y] = i + 1;
								s[x + 1][y] = 'o'; temp[x + 1][y] = 1;
								return;
							}
							else
							{
								contr = 'n';
								goto movecheck;
							}
						}
					}
				}
			}
		}
	}
} //finally, the snake moves :)
Apr 2, 2014 at 1:43pm
hakeris1010(65)
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
222
223
224
225
226
227

bool checkFood(char s[][22], int fx, int fy) //function for checking if snake has eaten the food
{
	int x, y, c = 0;
	for (x = 1; x<31; x++)
	{
		for (y = 1; y<21; y++)
		{
			if (s[x][y] == 'o' && x == fx && y == fy)
			{
				c = 1;
			}
		}
	}
	if (c == 1) return true;
	else return false;
}

void spawnFood(char s[][22], int & fx, int & fy) //function for spawning new food
{
	//food spawning
	int i, j;
	fx = (rand() % 30) + 1; //generates random value
	fy = (rand() % 20) + 1;
	for (j = 1; j<31; j++)
	{
		for (i = 1; i<21; i++)
		{
			if (s[j][i] != '*' && s[j][i] != 'o') //checks if there is something in generated value square
			{
				s[fx][fy] = '+';
				return;
			}
			else //if there is something, generates again, and checks
			{
				fx = (rand() % 30) + 1;
				fy = (rand() % 20) + 1;
				i = 1;
				j = 1;
			}
		}
	}
}

bool gameover(char s[][22], int temp[][22]) //checking if snake has hit its tail or borders,
{
	int x, y, c = 0;

	for (x = 0; x<32; x++)
	{
		for (y = 0; y<22; y++)
		{
			if ((x == 0 || x == 31 || y == 0 || y == 21) && s[x][y] == 'o')
			{
				c = 1;
			}
			if (chek[x][y] == 1 && s[x][y] == 'o')
			{
				c = 1;
			}
		}
	}
	if (c == 1) return true; //if yes, game ends
	if (c == 0) return false;
}

void endgame(int score, int highscore) //just some screens for certain actions
{
	cout << "" << endl << endl;
	cout << " ------------------------------------------------------------------------- " << endl;
	cout << "|    *****      *     *       * ******       ****  *       ****** ****    |" << endl;
	cout << "|   *          * *    * *   * * *           *    *  *     * *     *   *   |" << endl;
	cout << "|   *  ****   *   *   *  * *  * *****       *    *   *   *  ****  ****    |" << endl;
	cout << "|   *  *  *  *******  *   *   * *           *    *    * *   *     * *     |" << endl;
	cout << "|    *****  *       * *       * ******       ****      *    ***** *   *   |" << endl;
	cout << " ------------------------------------------------------------------------- " << endl;
	cout << "" << endl << endl;
	cout << "                        Y O U R   S C O R E : " << score << endl << endl;
	cout << "                        H I G H   S C O R E : " << highscore << endl;
	cout << "" << endl << endl;
}

void menu()
{
	cout << "" << endl;
	cout << " -----------------------------------------------  " << endl;
	cout << "|                                               | " << endl;
	cout << "|    ******   *     *      *     *  *  *****    | " << endl;
	cout << "|   *         * *   *     * *    * *   *        | " << endl;
	cout << "|    ******   *  *  *    *   *   **    ****     | " << endl;
	cout << "|          *  *   * *   *******  * *   *        | " << endl;
	cout << "|    ******   *     *  *       * *  *  *****    | " << endl;
	cout << "|                                               | " << endl;
	cout << " -----------------------------------------------  " << endl;
	cout << "" << endl << endl;
	cout << "                     M E N U:    " << endl << endl;
	cout << "                  1: Start Game  " << endl << endl;
	cout << "                  2: Options    " << endl << endl;
	cout << "                  3: Exit     " << endl << endl;
}

void help()
{
	char sel;
	system("cls");
	while (true)
	{
		cout << " ----------------------------------------------" << endl;
		cout << "|                                              |" << endl;
		cout << "|                     8 - up                   |" << endl;
		cout << "|                                              |" << endl;
		cout << "|            4 - left        6 - right         |" << endl;
		cout << "|                                              |" << endl;
		cout << "|                    2 - down                  |" << endl;
		cout << "|                                              |" << endl;
		cout << "|                    0 - Pause                 |" << endl;
		cout << "|                                              |" << endl;
		cout << " ---------------------------------------------- " << endl << endl << endl;
		cout << "Go back? [y/n]  ";
		cin >> sel;
		if (sel == 'y') return;
		else system("cls");
	}
}

void credits()
{
	char sel;
	system("cls");
	while (true)
	{
		cout << "" << endl << endl;
		cout << "               Lead programmer: hakeris1010 " << endl << endl;
		cout << "               Designer: hakeris1010 " << endl << endl;
		cout << "               Testers: hakeris1010 " << endl << endl;
		cout << "               Special thanks to: hakeris1010 " << endl << endl << endl;
		cout << "Go back? [y/n]  ";
		cin >> sel;
		if (sel == 'y') return;
		else system("cls");
	}
}

void options()
{
	char sel;
	system("cls");
	while (true)
	{
		system("cls");
		cout << "" << endl << endl;
		cout << "                          O P T I O N S:      " << endl << endl;
		cout << "                       1: Choose Difficulty   " << endl << endl;
		cout << "                       2: Controls            " << endl << endl;
		cout << "                       3: Credits             " << endl << endl;
		cout << "                       4: Go Back             " << endl << endl;
		cin >> sel;
		if (sel == '1') difficulty();
		else if (sel == '2') help();
		else if (sel == '3') credits();
		else if (sel == '4') return;
		else system("cls");
	}
}

void difficulty() //function for setting difficulty (how fast snake moves
{
	char sel;
	system("cls");
	while (true)
	{
		cout << "" << endl << endl;
		cout << "          C U R R E N T   D I F F I C U L T Y:" << endl << endl;
		if (diff == 1) cout << "                         E A S Y" << endl << endl;
		else if (diff == 0.5) cout << "                       N O R M A L" << endl << endl;
		else if (diff == 0.2) cout << "                         H A R D" << endl << endl;
		else if (diff == 0.1) cout << "                 S U P E R   H A R D" << endl << endl;
		else if (diff == 0.03) cout << "                 I M P O S S I B L E" << endl << endl;
		cout << "          C H O O S E   D I F F I C U L T Y :" << endl << endl;
		cout << "                       1: Easy        " << endl << endl;
		cout << "                       2: Normal      " << endl << endl;
		cout << "                       3: Hard        " << endl << endl;
		cout << "                       4: Super Hard  " << endl << endl;
		cout << "                       5: Impossible  " << endl << endl << endl << endl;
		cout << "                       6: Go Back     " << endl << endl;
		cin >> sel;
		if (sel == '1')  //there are 5 ready difficulties
		{
			diff = 1;
			system("cls");
		}
		else if (sel == '2')
		{
			diff = 0.5;
			system("cls");
		}
		else if (sel == '3')
		{
			diff = 0.2;
			system("cls");
		}
		else if (sel == '4')
		{
			diff = 0.1;
			system("cls");
		}
		else if (sel == '5')
		{
			diff = 0.03;
			system("cls");
		}
		else if (sel == '6') return;
		else system("cls");
	}
}

void pause() //pauses game
{
	char c;
	cout << "" << endl << endl;
	cout << "Game paused. Do you want to continue? [y/n]  ";
ooo:
	cin >> c;
	if (c == 'y') return;
	else goto ooo;
}