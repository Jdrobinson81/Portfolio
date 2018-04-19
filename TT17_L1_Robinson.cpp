/*Jimmy Robinson
Programming Fundamentals 2
Lab 1
Professor Paul Thayer
1/19/18
This program will give add your bill together including the tip to give you a total or give you your body mass index.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	while (true){																		/* While Loop to control program options*/
		cout<<"Choose a function:\n" "a) Amount of Bill\n" "b) BMI\n" "q) Quit\n";		/* Menu options */
		char option;																	/* Variable for menu option input */
		cin>>option;																	/* Input for menu option */
		option=tolower(option);															/* Convert menu option to lowercase */
		
		
		if(option=='a'){																/* If option for selecting bill amount */
			cout<<"What is the amount of the bill?\n"<<"$";								/* Output to ask for bill amount */
			double amount;																/* Variable to hold bill amount */
			cin>>amount;																/* Input bill amount */
			cout<<"What percent do you wish to tip?\n"<<"%";							/* Output to ask for tip amount */
			double tip;																	/* Variable to hold tip amount in percentile */
			cin>>tip;																	/* Input for tip amount */
			tip=tip/100*amount;															/* Convert whole number tip amount to decimal */
			double tax=amount*.0825;													/* Create variable to hold tax amount */
			double total= amount+tax+tip;												/* Create variable to total bill amount */
			cout<<fixed<<setprecision(2)<<"The total amount to pay is: $"<<total<<endl<<endl;	/* Output to reveal total amount that should be paid */
		}
		/*
		Choose a function:
a) Amount of Bill
b) BMI
q) Quit
a
What is the amount of the bill?
$100
What percent do you wish to tip?
%15
The total amount to pay is: $123.25

Choose a function:
a) Amount of Bill
b) BMI
q) Quit
a
What is the amount of the bill?
$325.5
What percent do you wish to tip?
%10
The total amount to pay is: $384.90

Choose a function:
a) Amount of Bill
b) BMI
q) Quit
*/
		
		
		
		
		else if(option=='b'){															/* Else if for option b for BMI chosen */
			cout<<"What is your weight?\n";												/* Output to ask for weight */
			double weight;																/* Variable created to hold weight amount */
			cin>>weight;																/* Input weight */
			cout<<"What is your height in feet and inches?\n"<<"Feet = ";				/* Output to ask for height in feet */
			double height;																/* Variable created to hold height in feet */
			cin>>height;																/* Input height in feet */
			height=height*12;															/* Feet variable formula converted to inches */
			cout<<"Inches = ";															/* Output to get inches */
			double inches;																/* Variable created to hold inchest */
			cin>>inches;																/* Input inches */
			height=height+inches;														/* height variable formula to get total in inches */
			double BMI=weight/(height*height)*703;										/* BMI variable created with formula to hold total BMI */
			cout<<fixed<<setprecision(2)<<"Your current Body Mass Index is: "<<BMI<<endl<<endl;		/* Output BMI */
		}
		/*
		Choose a function:
a) Amount of Bill
b) BMI
q) Quit
b
What is your weight?
220
What is your height in feet and inches?
Feet = 5
Inches = 11
Your current Body Mass Index is: 30.68

Choose a function:
a) Amount of Bill
b) BMI
q) Quit
*/
		
		else if(option=='q'){															/* Else if for option to quit selected */
			cout<<"Have a wonderful day.";												/* Output saying good bye */
			return 0;																	/* return to make while loop change to fale, ending the loop */
		}
		else{																			/* else option for anything but menu options */
			cout<<"Invalid Selection\n";												/* Output notifying customer they did not choose from menu */
		}
		/*
		Choose a function:
a) Amount of Bill
b) BMI
q) Quit
t
Invalid Selection
Choose a function:
a) Amount of Bill
b) BMI
q) Quit
*/
	}		
}
