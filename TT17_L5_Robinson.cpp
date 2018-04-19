/*
Jimmy Robinson
Professor Thayer
Fundamentals of Programming 2
Lab 5
This program will create a population bar chart based on figures taken from a text file.
*/

#include<fstream>
#include<string>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	ifstream people;
	
	int year=1880;
	int value=0;
	int count=0;
	int pops=18000;				/*Variable holds the population for left column of the graph*/
		
		
		/*This block of code creates the y Axis in population and adds stars to those years*/
		while(pops>=2000){
			cout<<setw(5)<<pops;
			people.open("people.txt");
			
			while(people >> value )
			{
				
				if(value>=pops){
					cout<<"    **";  
				}
				else{
					cout<<"      ";
				}
			}
			people.close();
			pops=pops-1000;
			cout<<endl;
		}
		
		/*This block of code creates the years on the X axis of the chart*/
		people.open("people.txt");
		cout<<"      ";
		while(people >> value)
		{
			year+=20;
			cout<<"  "<<year;
		}
		people.close();
		
}

/*
18000                                  **
17000                                  **
16000                                  **
15000                                  **
14000                            **    **
13000                            **    **
12000                            **    **
11000                            **    **
10000                            **    **
 9000                      **    **    **
 8000                      **    **    **
 7000                      **    **    **
 6000                      **    **    **
 5000                **    **    **    **
 4000          **    **    **    **    **
 3000          **    **    **    **    **
 2000    **    **    **    **    **    **
        1900  1920  1940  1960  1980  2000
--------------------------------
Process exited after 0.1655 seconds with return value 0
'\\NRGCOIS-FP0\FolderRedirect\3256115\Desktop'
CMD.EXE was started with the above path as the current directory.
UNC paths are not supported.  Defaulting to Windows directory.
Press any key to continue . . .
*/


