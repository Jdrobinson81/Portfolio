/*
Jimmy Robinson
Paul Thayer
Fundamentals of Programming 2
Lab 8


*/

#include<iomanip>
#include<iostream>

using namespace std;

bool winCheck(bool, char);
void clearBoard();


class Board
{
	private:		
		char ticTacToe[3][3]= { {'7','8','9'},
								{'4','5','6'},
								{'1','2','3'}};
		char turn;
		
	public:
		Board()										//constructor
		{
			turn='X';								//Variable to decide turns
		}
		void setupBoard(char whosTurn)				//Method to set up board.
		{
			turn=whosTurn;
			char val = '1';
			for (int x=2;x>=0;x--)
			{
				for (int y=0;y<3;y++,val++)
					ticTacToe[x][y] = val;
			}
		}
		
		char chooseMove()							//Player chooses a move, and that move is checked to see if it is legitimate.
		{
			int move;								//Variable to hold the player's selection.
			bool check=false;
			int row;
			int column;		
			while(check==false)
			{	
				cout<<"Player "<<turn<<" choose a move: ";
				cin>>move;
				cout<<endl;
				if(move<1||move>9)
				{
					cout<<"Invalid move. Please choose only numbers one through nine.\n";
				}
				else if(move<=9&&move>=1)	
				{	
					switch(move)														//Switch converts the player selection variable into rows and colums
					{		
						case 1:
							row=2;
							column=0;
							break;
						case 2:
							row=2;
							column=1;
							break;
						case 3:
							row=2;
							column=2;
							break;
						case 4:
							row=1;
							column=0;
							break;
						case 5:
							row=1;
							column=1;
							break;
						case 6:
							row=1;
							column=2;
							break;
						case 7:
							row=0;
							column=0;
							break;
						case 8:
							row=0;
							column=1;
							break;
						case 9:
							row=0;
							column=2;
							break;
					}
				}
				else
					cout<<"Invalid move. Please choose only numbers.\n";
					
				if(ticTacToe[row][column]=='X'||ticTacToe[row][column]=='O')		//This if statement checkst to make sure the move is not already taken
				{
					cout<<"Invalid Move. That move is already taken";
					check= false;
					
				}
				else
					check= true;
			}			

			ticTacToe[row][column] = turn;				//Determines whose turn is next.
			return turn;
			
			
			
		}
		void swap()
		{
			if (turn == 'X')
				turn = 'O';
			else
				turn = 'X';
		}
			
		
		bool winCheck()
		{	
			bool win = false;
			if(ticTacToe[0][0]==turn&&ticTacToe[0][1]==turn&&ticTacToe[0][2]==turn)
			{
				win=true;
			}
			else if(ticTacToe[1][0]==turn&&ticTacToe[1][1]==turn&&ticTacToe[1][2]==turn)
			{
				win=true;
			}
			else if(ticTacToe[2][0]==turn&&ticTacToe[2][1]==turn&&ticTacToe[2][2]==turn)
			{
				win=true;
			}
			else if(ticTacToe[0][0]==turn&&ticTacToe[1][1]==turn&&ticTacToe[2][2]==turn)
			{	
				win=true;
			}
			else if(ticTacToe[0][2]==turn&&ticTacToe[1][1]==turn&&ticTacToe[2][0]==turn)
			{
				win=true;
			}
			else if(ticTacToe[0][0]==turn&&ticTacToe[1][0]==turn&&ticTacToe[2][0]==turn)
			{
				win=true;
			}
			else if(ticTacToe[1][0]==turn&&ticTacToe[1][2]==turn&&ticTacToe[1][3]==turn)
			{
				win=true;
			}
			else if(ticTacToe[2][0]==turn&&ticTacToe[2][1]==turn&&ticTacToe[2][2]==turn)
			{
				win=true;
			}
			return win;
		}
		
		void displayBoard()											//Ouput board to screen
		{
			for (int x=0;x<3;x++)
			{
				cout<<ticTacToe[x][0]<<'|'<< ticTacToe[x][1] <<'|' << ticTacToe[x][2]<<endl;
				if (x<2)
					cout<<"-----"<<endl;
			}
		}
		
		void clearBoard()
		{
			ticTacToe[0][0] = '7';
			ticTacToe[0][1] = '8';
			ticTacToe[0][2] = '9';
			ticTacToe[1][0] = '4';
			ticTacToe[1][1] = '5';
			ticTacToe[1][2] = '6';
			ticTacToe[2][0] = '1';
			ticTacToe[2][1] = '2';
			ticTacToe[2][2] = '3';
		}
};






int main()
{
	cout<< "Tic Tac Toe\n"<<"---------------\n";
	cout<<endl;
	
	cout<<"Do you want to play a game? 1) Yes and 2) No\n";		//Menu to start a game or exit game. 
	int choice;												//variable for users choice to play or exit.
	cin>>choice;
	bool win=false;
	char turn;
	
	if(choice==1)
	{
		int counterX=0;												//Win counter for X player
		int counterO=0;												//Win counter for Y player
		int counterCat=0;
		int catWins=0;
		
	
		Board ttt;
		while (choice==1)
		{
			ttt.displayBoard();
			turn = ttt.chooseMove();
			win = ttt.winCheck();
			//cout << "win: "<< win << endl;
			counterCat++;
			
			if(counterCat==9)
			{
				cout<<"Cat's game!\n";
				catWins++;
			}
			if(win==true)												//If someone wins
			{
				cout<<"Congrats! "<<turn<<endl<<"Do you want to play again? 1 for yes and 2 for no\n";
				cin>>choice;
				if(turn=='X')
				{
					counterX++;
				}
				else if(turn=='O')
				{
					counterO++;
				}
				double totalGames=counterX+counterO+catWins;
				double percentX = counterX/totalGames;
				double percentO = counterO/totalGames;
				cout<<"X has won "<<counterX<<" games,"<<" for a total of "<<percentX<<" percent of wins."<<endl;
				cout<<"O has won "<<counterO<<" games."<<" for a total of "<<percentO<<" percent of wins."<<endl;
				cout<<"There have been "<<catWins<<" cat's games"<<endl;
				ttt.clearBoard();
				counterCat=0;									//Reset Board
					   
			}
			ttt.swap();
		}
	}
	else if (choice==2)									//else if statement to end program.
	{
		cout<<"Have a nice day.";
		return 0;
	}
	else
		cout<<"Invalid selection. Please select only '1' or '2'\n";

}
	
