#include "List.h"
#include <iostream>
using namespace std;
//////////////////////////
int list::sizecheck() {
	if (size == 0)
	{
		cout << "\\\\\\\\\\\\\\\\\\\\ Alert!!! First insert elements in list ///////////////////";
		return 0;
	}
	else
	{
		return 1;
	}
}
///////////////////////////////////
int list::maxcheck() {
	if (max == 0)
	{
		cout << "\\\\\\\\\\\\\\\\\\\\ Alert!!! First create a list ///////////////////";
		return 0;
	}
	else
	{
		return 1;
	}
}
////////////////////////////////////
int list::getmax() {
	return max;
}
int list::isize() {
	return size;
}
////////////////////////
int list::ici() {

	return ci;
}
////////////////////////////////
void list::createlist()
{
	if(max==0)
	{
		cout << "Enter Maximum Size of your List->";
		cin >> max;
		A = new int[max + 1];
		cout << "A List of size [ " << max << " ] has been Created" << endl;
	}
	else {
		cout << "\\\\\\\\\\\\\\\\\\\\ Alert!!! First delocate your first list ///////////////////\n";
	}
}
////////////////////////////////
int list::inserted() {
	if (size == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
////////////////////////////
void list::insertion() {
	if (maxcheck() == 1)
	{
		int insert;
		 do {
			cout << "Enter Size of Elements to Store in a List ";
			cin >> size;

			if (size <= 0 || size > max)
			{
				cout << "Size is greater than the Max_Limit of your List \n \n \t\t\t\t ::Try Again::\n";
			}
		 } while (size <= 0 || size > max);
		for (int i = 1; i <= size; i++)
		{
			cout << "\nEnter Element # " << i << " to be inserted in the List : ";
			cin >> insert;
			A[i] = insert;
			cout << "The entered number [" << insert << "] has been inserted to the position #" << i << " Successfully :" << endl;
			ci = i;
		}
	}
}
/////////////////////////
void list::imenu() {
	cout << "\n\n >>>>>>>>>>>>>>>> Insertion Menu >>>>>>>>>>>>>>>>";
	cout << "\n\n\n | 1): Insertion by Location";
	cout << "\n | 2): Insertion by Value";
	cout << "\n | 3): Back";
	choice();
}
////////////////////////////
void list::ilmenu() {
	cout << "\n\n\n\n <<<<<<<<<<<<<<<<< Insertion By Location Menu >>>>>>>>>>>>>>>>>>>>";
	cout << "\n\n\n | 1): Before the Location";
	cout << "\n | 2): At the Location";
	cout << "\n | 3): After the Location";
	cout << "\n | 4): Next Index";
	cout << "\n | 5): Previous Index";
	cout << "\n | 6): Back";
	cout << "\n(Current_Location : " << ci << ") (Total Locations : " << size << " )\n";
	displaylist();
	choice();
}
//////////////////////////
void list::ivmenu() {
	cout << "\n\n\n\n <<<<<<<<<<<<<<<<<<<Insertion By Value Menu>>>>>>>>>>>>>>>>>>>>>>>>";
	cout << "\n\n\n | 1): Before the Value";
	cout << "\n | 2): After the Value";
	cout << "\n | 3): Back\n";
	displaylist();
	choice();
}
///////////////////////////
void list::choice() {
	cout << "\n\n\t\tEnter Your Choice : ->";
}
////////////////////////////
int list::ibl() {
	size++;
	if (size > max)
	{
		size--;
		cout << "Soory|| The Max Size limit of your List has been reached.. Can't add number Before this Location [ " << ci << " ]\n";
		system("pause");
	}
	else {
		if (ci > 1) {
				for (int i = size; i >= ci - 1; i--)
				{
					A[i + 1] = A[i];
				}
				cout << " Enter Number To Insert Before Location #: " << ci << " -> ";
				cin >> A[ci - 1];
				ci--;
				displaylist();
		}
		else {
			size--;
			cout << "\n\t\tAlert!! Before Not Avalable when Current Index = 1";
			cout << "\nDo you want to insert at index 1 ?\n\t|<<<<<<Press 1): Y for YES 2):Any Other Key for Back >>>>|";
			choice();
			char c = 'n';
			cin >> c;
			if (c == 'y' || c == 'Y')
			{
				iatl();
				return 0;
			}
			else {
				return 1;
			}
		}
	}
}
////////////////////////////////
void list::iafl() {
	size++;
	if (size > max)
	{
		size--;
		cout << "Soory|| The Max Size limit of your List has been reached.. Can't add number After this Location [ " << ci << " ]\n";
		system("pause");
		system("CLS");
	}
	else {
		for (int i = size; i >= ci + 1; i--)
		{
			A[i + 1] = A[i];
		}
		cout << " Enter Number To Insert After Location #: " << ci << " -> ";
		cin >> A[ci + 1];
		ci++;
		system("CLS");
		displaylist();
	}
}
///////////////////////////////
void list::iatl() {
	size++;
	if (size > max)
	{
		size--;
		cout << "Soory|| The Max Size limit of your List has been reached.. Can't add number At this Location [ " << ci << " ]\n";
		system("pause");
	}
	else {
		for (int i = size; i >= ci; i--)
		{
			A[i + 1] = A[i];
		}
		cout << " Enter Number To Insert At Location #: " << ci << " -> ";
		cin >> A[ci];
		displaylist();
	}
}
///////////////////////////////
void list::ibv() {
	size++;
	if (size > max)
	{
		size--;
		cout << "Soory|| The Max Size limit of your List has been reached.. Can't add number Before this Value [ " << A[ci] << " ]\n";
		system("pause");
		system("CLS");
	}
	else
	{
		size--;
		if (find() == 1) {
			system("CLS");
			iatl();
		}
	}
}
////////////////////////
void list::iafv() {
	size++;
	if (size > max)
	{
		size--;
		cout << "Soory|| The Max Size limit of your List has been reached.. Can't add number After this Value [ " << A[ci] << " ]\n";
		system("pause");
		system("CLS");
	}
	else
	{
		size--;
		if (find() == 1) {
			system("CLS");
			iafl();
		}
	}
}
//////////////////////////////////////
void list::delmenu() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			cout << "\n\n\n\n <<<<<<<<<<<<<<<<< Deletion Menu >>>>>>>>>>>>>>>>>>>>";
			cout << "\n\n\n | 1): Deletetion By Location";
			cout << "\n | 2): Delete By Value";
			cout << "\n | 3): Delete Even Numbers";
			cout << "\n | 4): Delete Odd Numbers";
			cout << "\n | 5): Delete Prime Numbers";
			cout << "\n | 6): Back";
			cout << "\n(Current_Location : " << ci << ") (Total Locations : " << size << " )\n";
			displaylist();
			choice();
		}
	}
}
/////////////////////////
void list::deletion() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			system("CLS");
			cout << "\nThe Element " << A[ci] << " at Index " << ci << " has been deleted Sucessfully";
			/////////////////////////////
			if (ci != size) {
				for (int i = ci + 1; i <= size; i++) {
					A[i - 1] = A[i];
				}
			}
			 else
			 {     
				ci--;
			 }

			size--;
			/////////////////////////
			if (size > 0)
			{
				displaylist();

			}
			else {
				cout << "\n\n\t|>>>>>>>>>>>>>>Empty List<<<<<<<<<<<<<<<<<|";
			}
		}
	}
}
/* Removed Because mam says Dont ask location from user just delete the Current index:
void list::delbyl() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			displaylist();
			int value;
			do {
				cout << "\nEnter Index # : to Detete that number from the List : ";
				cin >> value;
				if (value > 0 && value <= size) {
					ci = value;
					deletion();
					break;
				}
				else {
					cout << "Invalid Index :\n\n Please type the index within Size :" << size;
				}
			} while (!(value > 0) || !(value <= size));
		}
	}
}
Removed till here*/
void list::delbyv() {
	if (find() == 1) {	
		deletion();
	}
}

void list::update() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			int pos;
			displaylist();
			/*do{
			cout << "Enter Position of the number in List to Update\n";
			cin >> pos;
			if(pos > size || pos < 1){
				cout << " Incorrect Position: Please Select position between {1 - " << size << " }\n \t |||Try Again|||\n";
			
			
		     	}
			else { 
				ci = pos;
			
			     }
			
			} while (pos > size || pos < 1);*/
			if (find() == 1) {
				cout << "\nEnter Element to be Updated with "<< A[ci]<<" in the List at Current Index # " << ci << " : ";
				cin >> A[ci];
				cout << "\n \t\t*********List Successfully Updated*********\n";
				displaylist();
			}
		}
	}
}
/////////////////5///////////
void list::start() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			ci = 1;
			cout << " **Current Index Shifted to Start Sucessfully**\n Current Index = " << ci;
		}

	}
}
/////////////////8///////////
void list::tail() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			ci = size;
			cout << " **Current Index Shifted to Tail Sucessfully**\n Current Index = " << ci;
		}
	}
}
///////////////////////////
void list::next() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			if ((ci!=size)&&(ci<size))
			{ 
				ci++;
				system("CLS");
				cout << " **Current Index Nexed Sucessfully**\n Current Index = "<< ci;

			}
			else {
				ci = size; system("CLS");
			cout << " Alert!!! List Size Limit Reached\n Current Index = "<<ci;
			}
		}
	}
}
//////////////////////////////////////
void list::back() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			if (ci>1)
			{
				ci--; system("CLS");
				cout << "|Current Index Backed Sucessfully|\n Current Index = " << ci;

			}
			else {
				ci = 1;
				system("CLS");
				cout << " Alert!!! List Start Point Reached\n Current Index = " <<ci;
			}
		}
	}
}
/////////////////////
int list::find() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			int flag=0, value;
			cout << "Enter Number to Search from the list : ";
			cin >> value;
			for (int i = 1; i <= size; i++){
				if (A[i] == value)
				{ 
					ci = i;
					flag = 1;
					cout << "Entered Number " << value << " is Found Successfully at index # : " << ci << endl;
                    break;
				}
			}
			if (flag == 0)
			{
				system("CLS");
				cout << "Soory the Entered Number [ " << value << " ] is Not Found." << endl;
			}
			return flag;
		}
	}
}
//////////////////////
void list::sizee() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			displaylist();
			cout << "\n List Size: = " << size;
		}
	}
}
void list::get() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {			
				cout << "\n(Current_Location : " << ci << ") (Total Locations : " << size << " )\n";
					cout<<"\n\t<<<<<Fetched Element from Index # : "<<ci<<" = : "<<A[ci]<<">>>>>>>>";
		}
	}
}
///////////////////////
void list::copy() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			int* list2;
			list2 = new int[size+1];
			for (int i = 1; i <= size; i++)
			{
				list2[i] = A[i];
			}
			cout << "\nCopying ........";
			displaylist();
			cout << "\tSucessfully Copied";
			cout << "\nList-Copy\n\t\t->  ";
			for (int i = 1; i <= size; i++) {
				cout<<" "<<list2[i];
			}
			cout << "  <-";
		}
	}
}
/////////////14//////////
void list::deallocatelist() {
	if(maxcheck()==1)
	{
		delete[] A;
		cout << "A List of size [" << max << "] has been Deallocated";
		size = 0;
		max = 0;
	}
}
////////////////////13//////
void list::displaylist() {

	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			cout << "\nList -> ";
			for (int i = 1; i <= size; i++)
			{
				cout << A[i]<<" ";
			}
			cout << " <-";
	  }
	}
}
//////////////////////////
void list::dbeven() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			int tci = 1;
			int flag = 0;
			while (tci <= size)
			{
				if (A[tci] % 2 == 0)
				{
					deleteci(tci);
					flag = 1;
				}
				else {
					tci++;
				}
			}
			if (size < ci) {
				ci = size;
			}
			if (flag == 1) {
				system("CLS");
				cout << "\n\t|*******Even Numbers Sucessfully Deleted*******|";
			}
			else {
				system("CLS");
				cout << "\n\t|<<<<<<<Alert! [No Even Number Found] >>>>>>>|";
			}
			if (size > 0)
			{
				displaylist();
			}
			else {
				cout << "\n\n\t|>>>>>>>>>>>>>>Empty List<<<<<<<<<<<<<<<<<|";
			}
		}
	}
}
//////////////////////////
void list::dbodd() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			int tci=1;
			int flag=0;
			while (tci <= size)
			{
				if (A[tci] % 2 == 1)
				{
					deleteci(tci);
					flag = 1;
				}
				else {
				tci++;
				}
			}
			if (size < ci) {
				ci = size;
			}
			if(flag==1){
				system("CLS");
			cout << "\n\t|*******Odd Numbers Sucessfully Deleted*******|";
			}
			else {
				system("CLS");
				cout << "\n\t|<<<<<<<Alert! [No Odd Number Found] >>>>>>>|";
			}
			if (size > 0)
			{
				displaylist();

			}
			else {
				cout << "\n\n\t|>>>>>>>>>>>>>>Empty List<<<<<<<<<<<<<<<<<|";

			}
		}
	}
}
/////////////////////
void list::dbprime() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			int tci = 1;
			int primecheck = 0,flag=0;
			while (tci <= size)
			{
				if(A[tci] == 2 ){
					primecheck = 1;
				}
				else {
					
					for (int i = 2; i < A[tci]; i++)
					{
						if (A[tci] % i == 0)
						{
							primecheck = 0;
							break;
						}
						else {
							primecheck = 1;	
						}
					}
				}
				if (primecheck == 1)
				{
						deleteci(tci);
						flag = 1;			
				}
				else {
					tci++;
				}
			}
			if (size < ci) { ci = size; }
			if (flag==1)
			{
				system("CLS");
				cout << "\n\t|*******Prime Numbers Sucessfully Deleted*******|";
				
			}
			else {
				system("CLS");
				cout << "\n\t|<<<<<<<Alert! [No Prime Number Found] >>>>>>>|";
			}
			if (size > 0)
			{
				displaylist();

			}
			else {
				cout << "\n\n\t|>>>>>>>>>>>>>>Empty List<<<<<<<<<<<<<<<<<|";

			}
		}
	}
}
//////////////////////
void list::deleteci(int ci) {
		for (int i = ci + 1; i <= size; i++) {
			A[i - 1] = A[i];
		}
	size--;
}
void list::zero() {
	if (maxcheck() == 1) {
		if (sizecheck() == 1) {
			int tci = 1, count = 0;
			while (tci <= size) {
				if (A[tci] == 0)
				{
					count++;
				}
				tci++;
			}
			if (count > 0)
			{
				system("CLS");
				cout << "\n\t|******* Total [ " << count << " ] Zeros Found *******|";
			}
			else {
			system("CLS");
			cout << "\n\t    |<<<<<<<Alert! [No Zero Number Found] >>>>>>>|";
		}displaylist();
		}
	}
}
///////////////!!!!Best Of Luck!!!!!//////////////////