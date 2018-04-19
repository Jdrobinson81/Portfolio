/*
Jimmy Robinson
Professor Thayer
Fundamentals of Programming 2
Lab 6
This program will measure the distance between two points.
*/

#include<iomanip>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

char input(string prompt, string error_message);
float input(float min, float max, string, string);
void input(double x1, double y1, double x2, double y2, string);
int dist(char a, char b);
float dist(float f1, float f2, float d);
double dist(double x1, double y1, double x2, double y2);
void display(string msg, char ch1, char ch2, int d); // display letter distance
void display(float f1, float f2, float d); // display number distance
void display(double x1, double y1, double x2, double y2, double d, double o); // display point distance.

int main()
{
	cout<<"This program will measure the distance between two letters, numbers, or graph points."<<endl;
	cout<<"Please choose one:\n"<<"1)Letters\n"<<"2)Numbers\n"<<"3)Graph Points\n"<<"4)Quit\n"<<"Choice: ";
	int choice=0;
	cin>>choice;
	string error_message="Invalid input.";
	string prompt;
	float min=0;
	float max=0;
	double x1=0,y1=0,x2=0,y2=0;
	char ch1,ch2;
	int distL;
	
	
	switch(choice){
		case 1 : prompt="Input a letter: ";
				 ch1 = input(prompt, error_message);
				 ch2 = input(prompt, error_message);
				 distL = dist(ch1, ch2);
				 display(" ", ch1, ch2, distL);
				 break;
		case 2 : prompt="Input a number: ";
				 input(min, max, prompt, error_message);
				 distL=dist(min, max);
				 break;
		case 3 : prompt="Input a value: ";
				 input(x1, y1, x2, y2, prompt); break;
		case 4 : break;
	}
	return 0;
}
	
/*input function for letters 
The three overloaded input functions look like this:
  char input(string prompt, string error_message); // for getting a letter
  float input(float min, float max, string prompt, string error_message); // for getting a number
  void input(double &x, double &y, string prompt); // for getting a point (x, y)
*/
char input(string prompt, string error_message)
{
	
	cout<<prompt;
	char a;
	cin>>a;
	a=toupper(a);
	while(!isalpha(a))
	{
		cout<<error_message;
		cout<<prompt;
		cin>>a;
		a=toupper(a);
	}
	return a;
	

}
	
/*input function for numbers- check using loop isdigit()*/
float input(float min, float max, string prompt, string error_message)
{
		cout<<prompt;
		cin>>min;
		cout<<prompt;
		cin>>max;
		
		while(!isdigit(min) or !isdigit(max)){
			cout<<"One of those is not a number.\n";
			cout<<prompt;
			cin>>min;
			cout<<prompt;
			cin>>max;
		}
		return(min,max);
};


/*input function for graph points*/	
void input(double x1, double y1, double x2, double y2, string prompt)
{
	
	cout<<prompt;
	cin>>x1;
	cout<<prompt;
	cin>>y1;
	cout<<prompt;
	cin>>x2;
	cout<<prompt;
	cin>>y2;
	dist(x1, y1, x2, y2);
		
		
};

/*Use toupper - use abs() or pow() or sqrt() as needed*/
int dist(char ch1, char ch2)
{
	int d=ch1-ch2;
	d=abs(d);
	return(d);
};
	
float dist(float min, float max)
{
	float f1=min;
	float f2=max;
	float d=abs(max-min);
	display(f1, f2, d);
};
	
double dist(double x1, double y1, double x2, double y2)
{
	double d=abs(x1-x2);
	double o=abs(y1-y2);
	display(x1, y1, x2, y2, d, o);
};

/*Use a static local counter - output count, message, values of items, and their distance*/
void display(string msg, char ch1, char ch2, int d)
{
	int static count=0;
	count++;
	cout<<"You have called this program "<<count<<" times. The distance between "<<ch1<<" and "<<ch2<<" is "<<d;
};

void display(float f1, float f2, float d)
{
	int static count=0;
	count++;
	cout<<"You have called this program "<<count<<" times. The distance between "<<f1<<" and "<<f2<<" is "<<d;
};

void display(double x1, double y1, double x2, double y2, double d, double o)
{
	int static count=0;
	count++;
	cout<<"You have called this program "<<count<<" times. The distance between "<<x1<<"/"<<y1<<" and "<<x2<<"/"<<y2<< " is "<<d<<"/"<<o;
};



/*
There are 6 skills to demonstrate in Lab 6:
1) Use functions. Functions sub-divide programming problems into independent parts. Done
2) Use function overloading, where several functions have the same name but different parameters. Done
3) Use pass-by-value and pass-by-reference parameters to functions. Done
4) Use static local variables, which work like global variables. Their value persists between function calls, yet they can only be used within the function.
5) Use default parameters, which take on a default value if a parameter is not specified.
6) Use const parameters, which specify that the parameter cannot change. const reference parameters make good sense for strings.
You get 4 points per skill, up to 24 points maximum. You do not have to do every skill to get 20 points.
*/
