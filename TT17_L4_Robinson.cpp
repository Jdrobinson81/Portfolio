/*Jimmy Robinson
Professor Thayer
Fundamentals of Programming 2
Lab 4
This program calculates the speed of sound through various materials.
*/

#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>

using namespace std;


int main(){
	
	cout<<"1)Calculate Speed of Sound\n"<<"2)Quit\n"<<endl<<"Enter your choice: ";				/*menu*/
	int choice;																					/*menu variable also is used for while loop control*/
	cin>>choice;																				/*Input menu option*/
	cout<<endl;
  
    	while(choice!=2){																		/*while loop uses the menu choice for control*/
    		
    		cout<<"What is the distance the sound traveled in feet?\n";
			double travel;
			cin>>travel;
			
			if(travel<=0){																		/*If statement makes sure a valid number of feet is entered.*/
				cout<<"Invalid amount of feet.\n";
			}
    		else{
        		cout<<"What is the material that was used? a)Air, w)Water, s)Steel\n"<<"Enter 'q' if you want to quit.\n";
        		enum material{air='a', water='w', steel='s', quit='q'};
        		char mats;
        		cin>>mats;
        		double final;
  
        		switch(mats){																	/*Switch to decide material to calculate*/
        			case air : final=travel/1100;
            				break;
            		
        			case water : final=travel/4900;
            				break;
    
        			case steel : final=travel/16400;
            				break;
            
        			case quit: choice=2;
        					cout<<"Exiting Program";
            				return choice;
    
        			default: cout<<"Not a valid selection.\n";
        					break;
    			}
    			cout<<"The sound took "<<fixed<<setprecision(4)<<final<<" seconds to reach its destination."<<endl;
    			cout<<"Another calculation? \n"<<"1) Yes\n"<<"2) No\n";
				cin>>choice;
				cout<<endl;
    		}
  		}
}

/*
1)Calculate Speed of Sound
2)Quit

Enter your choice: 1

What is the distance the sound traveled in feet?
30
What is the material that was used? a)Air, w)Water, s)Steel
Enter 'q' if you want to quit.
a
The sound took 0.0273 seconds to reach its destination.
Another calculation?
1) Yes
2) No
1

What is the distance the sound traveled in feet?
10
What is the material that was used? a)Air, w)Water, s)Steel
Enter 'q' if you want to quit.
w
The sound took 0.0020 seconds to reach its destination.
Another calculation?
1) Yes
2) No
1

What is the distance the sound traveled in feet?
16400
What is the material that was used? a)Air, w)Water, s)Steel
Enter 'q' if you want to quit.
s
The sound took 1.0000 seconds to reach its destination.
Another calculation?
1) Yes
2) No
2


--------------------------------
Process exited after 57.78 seconds with return value 0
Press any key to continue . . .
*/
