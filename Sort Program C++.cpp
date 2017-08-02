/*
Jimmy Robinson
This is a sort program to generate numbers and sort them. It has no error checks as of right now.

*/

#include<iostream>
#include<ctime>

using namespace std;

void sortAscending(int);
void sortDescending(int);

class Arraygen {
	private:
		int size;

	public:
		Arraygen(int s) {						//Constructor
			size=s;
			int seed=time(0);
			srand(seed);
			int *pArrayNum;							//Pointer declared
			int **pArrayUp;
			int **pArrayDown;
			pArrayNum = new int[size];			//Pointer to a new array with variable size
			pArrayUp = new int*[size];
			pArrayDown = new int*[size];
			for(int x =0; x<size; x++) {			//for-loop to dynamically generate numbers for array
				int generatedNum=rand()%100;			//Variable generatedNum is randomized.
				pArrayNum[x]= {generatedNum};		//ParrayNum array will have dynamically generated numbers.
				pArrayUp[x]=&pArrayNum[x];
				pArrayDown[x]=&pArrayNum[x];
				cout<<pArrayNum[x]<<endl;
			}
			sortAscending(pArrayUp);
			sortDescending(pArrayDown);
		}
		~Arraygen() {
		}

		void sortAscending(int *pArrayNum[]) {		//Ascendting selection sort pointers
			int item, index, value;
			int *pntrHold;
			for (item = 0; item < (size - 1); item++) {
				index = item;
				value = *pArrayNum[item];
				pntrHold = pArrayNum[item];
				for (int j = item + 1; j < size; j++) {
					if (*pArrayNum[j] < value) {
						value = *pArrayNum[j];
						pntrHold = pArrayNum[item];
						index = j;
					}
				}
				
				pArrayNum[item] = pArrayNum[index];
				pArrayNum[index] = pntrHold;
			}
			cout<<"Sorted Ascending pointers\n";
			int count;
			for(count=0; count<size; count++) {
				cout<<*pArrayNum[count]<<endl;
			}
		}

		void sortDescending(int *pArrayNum[]) {		//Descending selection sort pointers
			int item, index, value;
			int *pntrHold;
			for (item = 0; item < (size - 1); item++) {
				index = item;
				value = *pArrayNum[item];
				pntrHold = pArrayNum[item];
				for (int j = item + 1; j < size; j++) {
					if (*pArrayNum[j] > value) {
						value = *pArrayNum[j];
						pntrHold = pArrayNum[item];
						index = j;
					}
				}
				
				pArrayNum[item] = pArrayNum[index];
				pArrayNum[index] = pntrHold;
			}
			cout<<"Sorted Descending pointers\n";
			int count;
			for(count=0; count<size; count++) {
				cout<<*pArrayNum[count]<<endl;
			}
		}


};


int main() {
	cout<<"Enter the number of numbers to generate and sort\n";
	int size;
	cin>>size;
	cout<<endl;
	Arraygen tokenObject(size);




}

/*
Enter the number of numbers to generate and sort
5
44
3
99
6
92
Sorted Ascending pointers
3
6
44
92
99
Sorted Descending pointers
99
92
44
6
3

*/











