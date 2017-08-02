/*Jimmy Robinson
This program teaches basic math skills. This is a basic program using no classes, recursion, or functions and is done in C++. I will eventually create a second
version that uses functions and recursions.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>

using namespace std;

int main() {

	srand(time(0));
	int correct;
	int wrong=0;


	cout<<"What form of math would you like to do?\n" "1) Addition\n" "2) Subtraction\n" "3) Multiplication\n" "4) Division\n" "5) Quit\n"; //Menu option
	int choice=0;
	cin>>choice;
	cout<<"How many questions would you like to do?\n"; //Number of questions the user wishes to attempt.
	int questions=0;
	cin>>questions;


    //This is the addition option
	if(choice == 1) {
		cout<<"Addition problems. Good luck! Enter a -1 answer to quit.\n";


		while(questions>0) {
			int answer=0;
			while(answer!=-1) {
				int number1 = rand()%101;
				int number2 = rand()%101;
				int right;
				right=number1+number2;
				if(right<100) {
					cout<<number1<<" + "<<number2<<"= ";

					cin>>answer;
					if(right==answer) {                                                                             //Checking for the correct answer.
						cout<<"Correct! Good job!";                                                                 //Just a compliment.
						correct++;                                                                                  //Adds one to correctly answered counter
					} else {
						cout<<"Incorrect. Nice try. The correct answer is "<<right;
						wrong++;
					}
					questions--;
					cout<<endl;
					if(questions==0){
						break;
					}
				}
			}
		}

	}

  
    //This is the subtraction option.
	if(choice == 2) {
		cout<<"Subtraction problems. Good luck! Enter a -1 answer to quit.\n";


		while(questions>0) {
			int answer=0;
			while(answer!=-1) {
				int number1 = rand()%101;
				int number2 = rand()%101;
				int right;
				right=number1-number2;
				if(right>0) {
					cout<<number1<<" - "<<number2<<"= ";

					cin>>answer;
					if(right==answer) {                                                                             //Checking for the correct answer.
						cout<<"Correct! Good job!";                                                                 //Just a compliment.
						correct++;                                                                                  //Adds one to correctly answered counter
					} else {
						cout<<"Incorrect. Nice try. The correct answer is "<<right;
						wrong++;
					}
					questions--;
					cout<<endl;
					if(questions==0){
						break;
					}
				}
			}
		}

	} 

    
   //This is the multiplication option
	if(choice == 3) {
		cout<<"Multiplication problems. Good luck! Enter a -1 answer to quit.\n";


		while(questions>0) {
			int answer=0;
			while(answer!=-1) {
				int number1 = rand()%101;
				int number2 = rand()%101;
				int right;
				right=number1*number2;
				if(right<=100) {
					cout<<number1<<" X "<<number2<<"= ";

					cin>>answer;
					if(right==answer) {                                                                             //Checking for the correct answer.
						cout<<"Correct! Good job!";                                                                 //Just a compliment.
						correct++;                                                                                  //Adds one to correctly answered counter
					} else {
						cout<<"Incorrect. Nice try. The correct answer is "<<right;
						wrong++;
					}
					questions--;
					cout<<endl;
					if(questions==0){
						break;
					}
				}
			}
		}
	}


    //This is the Division option.
	if(choice == 4) {
		cout<<"Division problems. Good luck! Enter a -1 answer to quit.\n";


		while(questions>0) {
			int answer=0;
			while(answer!=-1) {
				int number1 = rand()%101;
				int number2 = rand()%101;
				double right=0;
				right=number1/number2;
				if(number1%number2==0) {
					cout<<number1<<" / "<<number2<<"= ";

					cin>>answer;
					if(right==answer) {                                                                             //Checking for the correct answer.
						cout<<"Correct! Good job!";                                                                 //Just a compliment.
						correct++;                                                                                  //Adds one to correctly answered counter
					} else {
						cout<<"Incorrect. Nice try. The correct answer is "<<right;
						wrong++;
					}
					questions--;
					cout<<endl;
					if(questions==0){
						break;
					}
				}
			}
		}
    } 
    
    if(choice == 5){
    	cout<<"Have a nice day!";
	}
   

	//This adds up the total correct and wrong and gives a total and percentage	
	double totalq = correct+wrong;
		cout<<"You got "<<correct<<" correct and "<<wrong<<fixed<<setprecision(0)<<" incorrect.\n"<<"For a total of %"<<correct/totalq*100<<endl;
		if (correct/totalq<.7) {
			cout<<"Keep practicing!";
		} else {
			cout<<"You are doing great!";
		}

}


