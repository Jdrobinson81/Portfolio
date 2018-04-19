/* Jimmy Robinson
Professor Thayer
Lab 7 pg 501 Challenge 7 9e
March 21st 2018
COSC 1337
This lab is a demonstration of the use of classes and mutators
*/

#include<iostream>


using namespace std;




int main()
{
	bool check=true;
	while(check=true){
		cout<<"Menu\n"<<"1) Set an item number\n"<<"2) Set a Quantity\n"<<"3) Set a Cost\n"<<"4) Get Item Number\n";
		cout<<"5) Get Quantity\n"<<"6) Get Cost\n"<<"7) Get a Total Cost\n"<<"8) Quit\n";
		cout<<"Please enter a number: ";
		int choice;
		cin>>choice;
	
		double iN;
		int qt;
		float cst;
	
		switch(choice){
			case 1 : cout<<"What is the item number?"<<endl;
				 	cin>>iN;
				 	Inventory.setItemNumber(iN);
				 	break;
		
			case 2 : cout<<"What is the quantity of the item? \n";
				 	cin>>qt;
				 	Inventory.setQuantity(qt);
				 	break;
				 
			case 3 : cout<<"What is the cost? ";
				 	cin>>cst;
				 	Inventory.setCost(cst);
				 	break;
				 
			case 4 : iN=Inventory.getItemNumber();
				 	cout<<"The item number is "<<iN<<endl;
				 	break;
				 
			case 5 : qt=Inventory.getQuantity();
				 	cout<<"The quantity is "<<qt<<endl;
				 	break;
				 
			case 6 : cst=Inventory.getCost();
				 	cout<<"The cost is "<<cst<<endl;
				 	break;
				 
			case 7 : check=false;
					break;
		}
	}
	
}

class Inventory()
{
		itemNumber;
		quantity;
		cost;
		public:
			Inventory()
			{
				double itemNumber=0;
				int quantity=0;
				float cost=0;
			};
			Inventory(double iN, int qt, float cst)
			{
				itemNumber=iN;
				quantity=qt;
				cost=cst;
				
			}
			void setItemNumber(double iN) { itemNumber = iN}
			void setQuantity(int qt){quantity=qt;};
			void setCost(float cst){itemNumber=iN;};
			double getItemNumber(){return itemNumber}
			int getQuantity(){return quantity};
			float getCost(){return cost}
			void getTotalCost(){cout<<cost*quantity};	
}
