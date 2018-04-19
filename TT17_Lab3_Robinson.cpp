/*
Jimmy Robinson
Professory Thayer
Lab 3
Fundamentals of Programming 2
This program is a program to teach basic math.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){

  srand(time(0));	//Allows numbers to be random
  int answer=1;		//variable for user's answers to their math problems
  int right=0;		//variable to hold the correct answer to a math problem
  int correct=0;	//variable counter to count the number of correct answers
  int wrong=0;		//variable counter to count the number of incorrect answers
  double total;		//variable that holds the total number of questions done


  cout<<"Select a form of math or quit.\n" "1) Addition\n" "2) Subtraction\n" "3) Multiplication\n" "4) Division\n" "5) Quit\n";	//Output menu to select math type to practice
  int math;			//Variable to hold selection for menu output
  cin>>math;		//input for math variable
  cout<<"How many questions would you like to attempt?\n";		//output to screen question to get total number of questions to attempt
  int questions;	//variable counter used to hold number of questions to do and count down as they are done
  cin>>questions;	//input for the questions variable

    if(math == 1){		//if condition for someone entering 1 from main menu
      cout<<"Addition problems. Good luck! Enter -1 to quit.\n";		//Output to screen the math choice selected and advise how to quit

      	while(questions>0){					//While loop using questions variable to count the correct number of questions to do
      		double number1 = rand()%101; 	//variable with generated random number
        	double number2 = rand()%101;	//variable with generated random number
        
        	while(number1+number2>100){		//while loop to make sure answers will be within 0 to 100
        		number1= rand()%101;		//get a new number if the answer to the generated numbers is not within 0 to 100
        		number2= rand()%101;		//get a second new number if the answer to the generated numbers is not within 0 to 100
			}
        
      		right=number1+number2;				//variable to hold the correct answer
	    	cout<<number1<<" + "<<number2<<"= ";		//Output to screen the math equation to solve
	    	cin>>answer;						//input to update the variable 'answer' with user's answer to the equation
	      
	    	if(right==answer){                  //Checking for the correct answer.
  	      	cout<<"Correct! Good job!";       //Just a compliment for a correct answer
  	      	correct++;                        //Adds one to correctly answered counter
  	      	questions--;						//Subtracts 1 from questions counter
		  	cout<<endl;                       //Skip a line
  	    	}
  	        
        	else if(answer==-1){                //Sentinel to exit the program
          		questions= -1;					//change variable to exit condition
          		cout<<endl;						//skip a line
        	}
            
        	else{								//Condition for an incorrect answer
          		cout<<"Incorrect. The correct answer is "<<right;		//Output correct answer to screen
          		questions--;						//Deduct one from questions variable
          		wrong++; 							//Add one to the wrong answer counter
          		cout<<endl;						//Skip a line
			}                                                                                    
        }
	  	total = correct+wrong;					//Update variable with total number of questions
        cout<<"You got "<<correct<<" correct and "<<wrong<<" incorrect.\n"<<"You have a total of %"<<fixed<<setprecision(0)<<correct/total*100<<endl;		//Output scores
      	if (correct/total<.70){					//Condition to determine if they should keep practicing or not
	    	cout<<"Keep practicing!";			//out put to keep practicing
		}
	  	else{									//Condition if they are over 70 percent 
	    	cout<<"You are doing great!";		//Output to congratulate user	
		}
	}
		
	if(math==2){								//Condition if math variable equals 2
  		cout<<"Subtaction problems. Good luck! Enter an answer as -1 to quit.\n";		//Output to advise math type selected and how to quit
  		
  		while(questions>0){						//While loop to track number of questions selected by user
  	  		int number1 = rand()%101; 			//variable received first random generated number
        	int number2 = rand()%101;			//variable received second random generated number
        	
        	while(number1-number2<0){			//while loop to make sure the answer is within 0 to 100
        		number1= rand()%101;			//If answer is not within 0 to 100, a new number is generated
        		number2= rand()%101;			//If answer is not within 0 to 100, a new number is generated
			}
        	
      		right=number1-number2;				//Variable 'right' is updated with the correct answer
      	  	cout<<number1<<"-"<<number2<<"= ";	//Output to screen the equation
      	  	cin>>answer;						//input for the answer
      	  	if(right==answer){                  //Checking for the correct answer.
  	        	cout<<"Correct! Good job!";     //Just a compliment.
  	        	correct++;                      //Adds one to correctly answered counter
  	        	questions--;					//Subracts one from questions counter
		    	cout<<endl;                     //skip to the next line
  	        } 
			else if(answer==-1){                //Sentinel condition to quit program
          		questions= -1;					//questions variable updated with termination condition
          		cout<<endl;						//Skip a line
        	}     
          	else{								//else condition for incorrect answer
            	cout<<"Incorrect. The correct answer is "<<right;		//Output that the answer is incorrect
            	questions--;					//questions variable subtracts one
            	wrong++; 						//wrong variable counter updated by one
            	cout<<endl;						//skip a line
		    }
		}	
	  	total = correct+wrong;					//update total variable with number of questions
      	cout<<"You got "<<correct<<" correct and "<<wrong<<" incorrect.\n"<<"You have a total of %"<<fixed<<setprecision(0)<<correct/total*100<<endl;	//Output user's scores
      	if (correct/total<.70){					//condition for scored below seventy percent
	    	cout<<"Keep practicing!";			//output to keep practicing
		}
	  	else{									//condition for scores seventy percent or above
	    	cout<<"You are doing great!";		//output to let them know they are doing good
		}
	}
	
	if(math==3){								//condition for math variable equals three, for multiplication
		cout<<"Multiplication! Good luck! Enter an answer as -1 to quit.\n";	//output to tell the user what he selected and how to exit
		
		while(questions>0){						//while loop to countdown questions selected by user
			int number1 = rand()%100; 			//variable with random number up to 100
        	int number2 = rand()%100;			//variable with random number up to 100
        	
        	while(number1*number2>100){			//while loop to make sure answers will be within 0 to 100
        		number1--;						//update variable minus one if answer is not within 0 to 100
			}
        	
        	cout<<number1<<" x "<<number2<<"= ";	//Output the equation to the screen
        	cin>>answer;						//Update the answer variable with the user's answer
        		
        	right=number1*number2;				//Update the 'right' variable with the correct answer
		
		    if(right==answer){                  //Checking for the correct answer.
  	        	cout<<"Correct! Good job!";     //Output compliment to let user know it is the correct answer
  	        	correct++;                      //Adds one to correctly answered counter
  	        	questions--;					//Subracts one from questions counter
		    	cout<<endl;                     //skip a line
  	        	}
			else if(answer==-1){                //Sentinel to quit program
          		questions= -1;					//update questions counter to quit condition
          		cout<<endl;						//skip a line
        	}           
          	else{								//condition for incorrect answer
            	cout<<"Incorrect. The correct answer is "<<right;		//output to notify the answer is incorrect and what the correct answer is
            	questions--;					//Update questions variable counter negative one
            	wrong++; 						//update variable 'wrong' by adding one
            	cout<<endl;						//skip a line
		    	}
		}
		total = correct+wrong;					//update variable with total number of questions
    	cout<<"You got "<<correct<<" correct and "<<wrong<<" incorrect.\n"<<"You have a total of %"<<fixed<<setprecision(0)<<correct/total*100<<endl;	//output user scores
    	if (correct/total<.7){					//condition for scores being below seventy percent
			cout<<"Keep practicing!";			//output to screen to keep practicing
		}										
		else{									//condition for scores seventy percent or above
			cout<<"You are doing great!";		//output to let the user know he is doing well
		}
	}
		
	if(math==4){								//condition for math variable being number four
		cout<<"Division! Good luck! Enter an answer as -1 to quit.\n";		//output to let user know math selected and how to quit
		
		while(questions>0){						//while loop to count down number of questions user desires
			int number1 = rand()%100; 			//variable with random generated number
        	int number2 = rand()%100;			//second variable with random generated number
			
			while(number1%number2!=0){			//while loop to make sure answer is within 0 to 100
				number1= rand()%100;			//if answer is not within 100, variable is generated with new random number
				number2= rand()%100;			//second number generated on variable
			}
			
			right=number1/number2;				//update variable with correct answer
			cout<<number1<<"/"<<number2<<" = ";	//output the equation to user
			cin>>answer;						//update answer variable with user's answer
		
			if(right==answer){                  //Checking for the correct answer.
  	        	cout<<"Correct! Good job!";     //Just a compliment.
  	        	correct++;                      //Adds one to correctly answered counter
  	        	questions--;					//Subtract one from questions counter
		    	cout<<endl;                     //skip a line
  	    	}
			else if(answer==-1){                //Sentinel to terminate program
          		questions= -1;					//update question variable to termination condition
          		cout<<endl;						//skip a line
        	}           
        	else{								//condition for incorrect answer
            	cout<<"Incorrect. The correct answer is "<<right;		//output the answer is incorrect and give correct answer
            	questions--;					//update questions variable minus one
            	wrong++; 						//add one to wrong variable
            	cout<<endl;						//skip a line
			}
		}
  		total = correct+wrong;					//variable to hold the number of questions
    	cout<<"You got "<<correct<<" correct and "<<wrong<<" incorrect.\n"<<"You have a total of %"<<fixed<<setprecision(0)<<correct/total*100<<endl;	//output user's scores
    	if (correct/total<.7){				//condition if scores are below seventy percent
			cout<<"Keep practicing!";		//output to keep practicing
		}
		else{								//condition for scores above seventy percent
			cout<<"You are doing great!";	//output that the user is doing good
		}
	}
}

/*
Addition test
Select a form of math or quit.
1) Addition
2) Subtraction
3) Multiplication
4) Division
5) Quit
1
How many questions would you like to attempt?
3
Addition problems. Good luck! Enter -1 to quit.
34 + 46= 80
Correct! Good job!
20 + 19= 39
Correct! Good job!
12 + 56= 2
Incorrect. The correct answer is 68
You got 2 correct and 1 incorrect.
You have a total of %67
Keep practicing!
--------------------------------
Process exited after 43.41 seconds with return value 0
Press any key to continue . . .

Subtraction Test
Select a form of math or quit.
1) Addition
2) Subtraction
3) Multiplication
4) Division
5) Quit
2
How many questions would you like to attempt?
3
Subtaction problems. Good luck! Enter an answer as -1 to quit.
68-43= 25
Correct! Good job!
68-25= 2
Incorrect. The correct answer is 43
92-30= -1

You got 1 correct and 1 incorrect.
You have a total of %50
Keep practicing!
--------------------------------
Process exited after 37.31 seconds with return value 0
Press any key to continue . . .

Multiplication Test
Select a form of math or quit.
1) Addition
2) Subtraction
3) Multiplication
4) Division
5) Quit
3
How many questions would you like to attempt?
6
Multiplication! Good luck! Enter an answer as -1 to quit.
1 x 66= 66
Correct! Good job!
58 x 0= 0
Correct! Good job!
1 x 63= 63
Correct! Good job!
1 x 99= 99
Correct! Good job!
4 x 25= 100
Correct! Good job!
1 x 79= -1

You got 5 correct and 0 incorrect.
You have a total of %100
You are doing great!
--------------------------------
Process exited after 31.29 seconds with return value 0
Press any key to continue . . .

Division test
Select a form of math or quit.
1) Addition
2) Subtraction
3) Multiplication
4) Division
5) Quit
4
How many questions would you like to attempt?
3
Division! Good luck! Enter an answer as -1 to quit.
0/97 = 0
Correct! Good job!
32/1 = 32
Correct! Good job!
48/4 = 12
Correct! Good job!
You got 3 correct and 0 incorrect.
You have a total of %100
You are doing great!
--------------------------------
Process exited after 24.8 seconds with return value 0
Press any key to continue . . .
*/

  
