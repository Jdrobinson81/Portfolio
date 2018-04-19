/* Jimmy Robinson
Professor Thayer
Fundamentals of Programming 2
Lab 2
This program allows a user to enter a number and the program will create a diamond with the longest row equal to the number entered.
*/

#include <cmath>
#include <iostream>

using namespace std;

int main(){
	
	while(true){
	
	/* Note that a 2 star diamond cannot be done as there is no way to center a single star over two stars, it will either be over the left or right.
	It is the same for a one star diamond as it would just be a single asterisk with no diamond shape to it at all.*/
	
		cout<<"Enter a number greater than two to create a diamond or enter 0 to quit\n";		//Output to ask for number greater than two to make an actual diamond shape.
		int row;															//Variable to take number
		cin>>row;															//Allows user to input the number of rows
		
		if(row==0){															//if condition for an entry of 0 to exit program
			return 0;														//return 0 to break while loop
		}																	//end of if code
	
		else if((row%2)==0){												//else if condition to determine even or odd number entered, if even, continue
			for(int i=0; i<row/2; i++){										//for loop to create the # of loops needed for top half of the diamond
				for(int s=1; s<row/2-i; s++)								//for loop to create spaces before asterisks
					cout<<" ";												//Ouput to screen the number of need spaces per line
				for(int x=1; x<=1+i; x++)									//for loop to create the number asterisks for the top half of the diamond
					cout<<"**";												//Ouput asterisks to screen. Since it is even, it will always output a even number
				cout<<endl;													//Output to skip to the next line
			}																//Top half of the diamong code ends here
		
			for (int i=1;i<=row/2; i++){									//for loop to count iterations for lower half of diamond.
        		for(int s=1; s<i; s++)										//for loop to count number of spaces needed on each line
          			cout<<" ";												//ouput spaces to screen
        		for(int x=row; x>=row/2+i; x--)								//for loop to determine number of asterisks to use per iteration.
          			cout<<"**";												//output asterisks to screen
          		cout<<endl;													//output next line to screen
			}																//Bottom half of diamond code for even number ends here.
		}																	//end of even number diamond code
		
		else if((row%2)!=0){												//Qualifier for a number that is not even
			for(int i=0; i<(row+1)/2; i++){									//for loop to count needed number of iterations
      			for(int s=1; s<(row+1)/2-i; s++)							//for loop to determine number of spaces needed per line
        			cout<<" ";												//output spaces to screen
      			for(int x=0; x<2*i+1; x++)									//for loop to determine number of asterisks per line
        			cout<<"*";												//output asterisks for top half of diamond to screen
        	cout<<endl;														//output next line to screen
    		}																//end of top of odd number diamond code
        
    		for(int i=row/2; i>=0; i--){									//for loop to count number of iterations needed for lower half of diamond
      			for(int s=i; s<=(row-1)/2; s++)								//for loop to determine how many spaces needed per line
        			cout<<" ";												//output spaces to screen
      			for(int x=1; x<2*i; x++)									//for loop to count number of asterisks needed per line
        			cout<<"*"; 												//output asterisks to screen
    		cout<<endl;														//output next line to screen
      		}																//end of bottom half of diamond code
		}																	//End of odd number diamond code
		else{																//Else in case a non number is entered
			return 0;														//return to break while loop
		}																	//end of return code
	}																		//end of while loop code
	/*
Enter a number greater than two to create a diamond or enter 0 to quit
4
 **
****
****
 **
Enter a number greater than two to create a diamond or enter 0 to quit
5
  *
 ***
*****
 ***
  *

Enter a number greater than two to create a diamond or enter 0 to quit
0

--------------------------------
Process exited after 9.483 seconds with return value 0
Press any key to continue . . .
*/
}
