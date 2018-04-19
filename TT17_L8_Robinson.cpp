/*Jimmy Robinson
Professor Thayer
Lab 8
COSC1337
This is a game of tic tac toe.

*/

#include<iostream>

using namespace std;

char turn;

class Board
{
	private:
		static char gB[3][3];
		
	public:
		
		void printBoard()				/*This function prints the board out*/
		{
			for (int x=0;x<3;x++)
			{
				cout<<gB[x][0]<<'|'<< gB[x][1] <<'|' << gB[x][2]<<endl;
				if (x<2)
					cout<<"-----"<<endl;
			}
		};
		char whoseTurn()
		{								/*This function determines whose turn it is*/
			char static turn='X';		/*Variable to determine whose turn it is.*/
			if (turn == 'X')
				turn = 'O';
			else
				turn = 'X';
			return turn;
		}
		
		int moveCheck(int move)			/*This function determines whose move it is*/
		{
			bool check=false;
			while(check==false)
			{
				if(gB[move]=="O"|| gB[move]=="X")		//If statement to check if move already taken.
				{
					cout<<"Invalid move. That move is already taken."<<endl;
					cin>>move;
				}
				else if(move>9 or move<0)			//Eleseif statement to make sure number is in proper range.
				{
					cout<<"Invalid move. Number too high. Please choose a number between 1 and 9"<<endl;
					cin>>move;
				}
				else
				{
					check=true;
					return move;
				}
			}
		}
		
		int makeMove(int move)				/*This function updates the game board.*/
		{
			switch(move)
			{
			case 7 : gB[0][0]=turn; break;
			case 8 : gB[0][1]=turn; break;
			case 9 : gB[0][2]=turn; break;
			case 4 : gB[1][0]=turn; break;
			case 5 : gB[1][1]=turn; break;
			case 6 : gB[1][2]=turn; break;
			case 1 : gB[2][0]=turn; break;
			case 2 : gB[2][1]=turn; break;				
			case 3 : gB[2][2]=turn; break;
			};
			
		}
		
		bool winCheck(char turn)			/*This determines if there is a winner to the game*/
		{
			if(gB[0][0]==turn&&gB[0][1]==turn&&gB[0][2]==turn)			/* Left Down */
			{
				return true;
			}
			else if(gB[1][0]==turn&&gB[1][1]==turn&&gB[1][2]==turn)		/*Center Down */
			{
				return true;
			}	
			else if(gB[2][0]&&gB[2][1]==turn&&gB&&gB[2][2]==turn)		/*Right Down */
			{
				return true;
			}
			else if(gB[0][0]==turn&&gB[1][1]==turn&&gB[2][2]==turn)		/*Left Diagonal*/
			{
				return true;
			}
			else if(gB[0][2]==turn&&gB[1][1]==turn&&gB[2][0]==turn)		/*Right Diagonal*/
			{
				return true;
			}
			else if(gB[0][0]==turn&&gB[1][0]==turn&&gB[2][0]==turn)		/*Top Across*/
			{
				return true;
			}
			else if(gB[0][1]==turn&&gB[1][1]==turn&&gB[2][1]==turn)		/*Center across*/
			{
				return true;
			}
			else if(gB[0][2]==turn&&gB[1][2]==turn&&gB[2][2]==turn)		/*Bottom across*/
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void cB()						/*This function clears the board*/
		{
			gB[0][0] = '7';
			gB[0][1] = '8';
			gB[0][2] = '9';
			gB[1][0] = '4';
			gB[1][1] = '5';
			gB[1][2] = '6';
			gB[2][0] = '1';
			gB[2][1] = '2';
			gB[2][2] = '3';
		}
};
char Board::gB[3][3] = { {'7','8','9'},		/*Game board array. What was I doing with this?*/
					 	 {'4','5','6'},
					 	 {'1','2','3'}};

int main()
{
	cout<<"Tick Tack Toe\n"<<"How many games do you want to play? Enter a zero or negative number to quit: ";
	Board ttt;		/*game board object*/
	int games;		/*variable to determine how many games to play*/
	cin>>games;
	cout<<endl;
	ttt.printBoard();
	int Xwin=0;		/*Variable to keep track of X game wins*/	
	int Ywin=0;		/*Variable to keep track of Y game wins*/
	int Cats=0;		/*Variable to keep track of cat's game wins*/
	
	while(games>=1)
	{
		bool play=true;
		int static moveCount=0;		/*Variable to keep count of player moves. The earliest someone can win is move 5, cats game at 9*/
		bool win=false;
		while(play)
		{	
			cout<<endl;
			turn=ttt.whoseTurn();
			cout<<"Player "<<turn<<" please choose a number. ";
			int move=0;					/*variable to track the player's choice*/
			cin>>move;
			move=ttt.moveCheck(move);
			move=ttt.makeMove(move);
			ttt.printBoard();
			cout<<endl;
			moveCount++;
			cout<<moveCount<<endl;
			
			
			if (moveCount>=5)		/*If statement to determine if the player has won.*/
			{
				win=ttt.winCheck(turn);
			}
			
			if (moveCount==9 && win==false)		/*If statement to determine if it is a Cats game */
			{
				cout<<"It's a cats game!\n";
				Cats++;
				play=false;
			}
			
			cout<<endl;
			
			if(win==true)			/* Congratulates the winnder */
			{
				ttt.cB();					/*clears board for next game*/
				cout<<"Congratulations "<<turn<<endl;
				if(turn=='X')
				{
					Xwin++;
					play=false;
				}
				else
				{
					Ywin++;
					play=false;
				}
			}
		}
		games--;
		if(games>0){
			ttt.printBoard();
		}
		moveCount=0;

	}
	cout<<"X won "<<Xwin<<" games and O won "<<Ywin<<" games. "<<Cats<<" were cat's games. "<<endl;
	cout<<"Have a wonderful day.";
}

/*

Tick Tack Toe
How many games do you want to play? Enter a zero or negative number to quit: 3

7|8|9
-----
4|5|6
-----
1|2|3

Player O please choose a number. 7
O|8|9
-----
4|5|6
-----
1|2|3

1


Player X please choose a number. 5
O|8|9
-----
4|X|6
-----
1|2|3

2


Player O please choose a number. 4
O|8|9
-----
O|X|6
-----
1|2|3

3


Player X please choose a number. 0
O|8|9
-----
O|X|6
-----
1|2|3

4


Player O please choose a number. 1
O|8|9
-----
O|X|6
-----
O|2|3

5

Congratulations O
7|8|9
-----
4|5|6
-----
1|2|3

Player X please choose a number. 9
7|8|X
-----
4|5|6
-----
1|2|3

1


Player O please choose a number. 7
O|8|X
-----
4|5|6
-----
1|2|3

2


Player X please choose a number. 5
O|8|X
-----
4|X|6
-----
1|2|3

3


Player O please choose a number. 1
O|8|X
-----
4|X|6
-----
O|2|3

4


Player X please choose a number. 4
O|8|X
-----
X|X|6
-----
O|2|3

5


Player O please choose a number. 3
O|8|X
-----
X|X|6
-----
O|2|O

6


Player X please choose a number. 6
O|8|X
-----
X|X|X
-----
O|2|O

7

Congratulations X
7|8|9
-----
4|5|6
-----
1|2|3

Player O please choose a number. 7
O|8|9
-----
4|5|6
-----
1|2|3

1


Player X please choose a number. 8
O|X|9
-----
4|5|6
-----
1|2|3

2


Player O please choose a number. 9
O|X|O
-----
4|5|6
-----
1|2|3

3


Player X please choose a number. 4
O|X|O
-----
X|5|6
-----
1|2|3

4


Player O please choose a number. 5
O|X|O
-----
X|O|6
-----
1|2|3

5


Player X please choose a number. 3
O|X|O
-----
X|O|6
-----
1|2|X

6


Player O please choose a number. 6
O|X|O
-----
X|O|O
-----
1|2|X

7


Player X please choose a number. 1
O|X|O
-----
X|O|O
-----
X|2|X

8


Player O please choose a number. 2
O|X|O
-----
X|O|O
-----
X|O|X

9
It's a cats game!

X won 1 games and O won 1 games. 1 were cat's games.
Have a wonderful day.
--------------------------------
Process exited after 89.16 seconds with return value 0
'\\NRGCOIS-FP0\FolderRedirect\3256115\Desktop'
CMD.EXE was started with the above path as the current directory.
UNC paths are not supported.  Defaulting to Windows directory.
Press any key to continue . . .

*/
