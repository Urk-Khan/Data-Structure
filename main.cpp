#include <iostream>
#include "List.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int option;
	list b;
	do {
		cout << "\n\n\t********************Main Menu************************\n\n";
		cout << "\t|\t\t1  : Create List.\t\t    |\n";
		cout << "\t|\t\t2  : Insertion\t\t\t    |\n";
		cout << "\t|\t\t3  : Deletion.\t\t\t    |\n";
		cout << "\t|\t\t4  : Update.\t\t\t    |\n";
		cout << "\t|\t\t5  : Start.\t\t\t    |\n";
		cout << "\t|\t\t6  : Next.\t\t\t    |\n";
		cout << "\t|\t\t7  : Back.\t\t\t    |\n";
		cout << "\t|\t\t8  : Tail.\t\t\t    |\n";
		cout << "\t|\t\t9  : Find.\t\t\t    |\n";
		cout << "\t|\t\t10 : Copy.\t\t\t    |\n";
		cout << "\t|\t\t11 : Get.\t\t\t    |\n";
		cout << "\t|\t\t12 : Size.\t\t\t    |\n";
		cout << "\t|\t\t13 : Display List.\t\t    |\n";
		cout << "\t|\t\t14 : Delocate List.\t\t    |\n";
		cout << "\t|\t\t15 : Count no of Zeros.\t\t    |\n";
		cout << "\t|\t\t16 : Exit.\t\t\t    |\n\n";
		cout << "\t****************Choose an Option*********************\n\n";
		cout << "\t\t\tYOUR CHOICE : ==>> ";
		cin >> option;
		system("CLS");
		switch (option)
		{
		case 1: {
			cout << "******************You Choosed************************\n\t\t";
			cout << "->Create List<-\n\n";
			b.createlist();
			break;
		}
		case 2: {
			cout << "******************You Choosed************************\n\t\t";
			cout << "Insertion\n";
			if (b.isize() == 0)
			{
				b.insertion();
				system("CLS");
				b.displaylist();
			}
			else {
				int back, choice;
				////////////////////////Insertion menu/////////////////////////
				do {
					back = 0;
					b.imenu();
					cin >> choice;
					system("CLS");


					switch (choice)
					{
					case 1: {
						////////////Insertion by location menu///////////////////
						do {
							system("CLS");
							b.ilmenu();
							cin >> choice;
							

							switch (choice)
							{
							case 1: {
								if (b.ibl() == 1) {
									back = 1;
								}
								break;
							}
							case 2: {
								b.iatl();
								break;
							}
							case 3: {
								b.iafl();
								break;
							}
							case 4: {
								b.next();
								break;
							}
							case 5: {
								b.back();
								break;
							}
							case 6: {
								back = 1;
								system("CLS");
								break;
							}
							default: {
								system("cls");
								cout << "\n***********Invalid Choice||Please Select Option Between {1-6}************\n \t\t\t |Try Again|";
								break;
							}
							}
						} while (choice!=6);
						break;
					}
					case 2: {
						//////////////Insertion by Value menu//////////////////
						do {
						b.ivmenu();
						cin >> choice;
						

							switch (choice)
							{
							case 1: {
								
								b.ibv();
								
								break;
							}
							case 2: {
								
								b.iafv();
								break;
							}
							case 3: {
								back = 1;
								system("CLS");
								break;
							}

							default: {
								system("cls");
								cout << "\n***********Invalid Choice||Please Select Option Between {1-3}************\n \t\t\t |Try Again|";
								break;}

							}
							
						} while (choice !=3);


						break;
					}
					case 3: {
						break;
					}
					default: {
						cout << "\n***********Invalid Choice||Please Select Option Between {1-3}************\n \t\t\t |Try Again|";
						break;
					}
					   break;
					}
				} while (back==1||choice!=3);
			}
			break;
		}

		case 3: {
			if(b.maxcheck()==1){
			if (b.sizecheck() == 1) {
			int choice = 0;
			do {
				if (b.isize() == 0)
				{
					break;
				}
				b.delmenu();
				cin >> choice;

				switch (choice)
				{
				case 1: {
					b.deletion();
					
					break;
				}
				case 2:
				{
					b.delbyv();
					break;
				}
				case 3:
				{
					b.dbeven();
					break;
				}
				case 4:
				{
					b.dbodd();
					break;
				}
				case 5:
				{
					b.dbprime();
					break;
				}
				case 6:
				{
					option = 786;///// will true the condition of do while of first menu
					system("CLS");
					break;
				}


				default: {
					cout << "\n***********Invalid Choice||Please Select Option Between {1-6}************\n \t\t\t |Try Again|";
					break;}
				}
			} while (choice!=6);


		}
		}
			break;
	    }
		case 4: {
			cout << "******************You Choosed************************\n";
			cout << "Update\n";
			b.update();
			break;
		}
		case 5: {
			cout << "******************You Choosed************************\n";
			cout << "Start\n";
			b.start();
			break;
		}
		case 6: {
			cout << "******************You Choosed************************\n";
			cout << "Next\n";
			b.next();
			break;
		}
		case 7: {
			cout << "******************You Choosed************************\n";
			cout << "Back\n";
			b.back();
			break;
		}
		case 8: {
			cout << "******************You Choosed************************\n";
			cout << "Tail\n";
			b.tail();
			break;
		}

		case 9: {
			cout << "******************You Choosed************************\n";
			cout << "Find\n";
			b.find();
			break;
		}
		case 10: {
			cout << "******************You Choosed************************\n";
			cout << "Copy\n";
			b.copy();
			break;
		}
		case 11: {
			cout << "******************You Choosed************************\n";
			cout << "Get\n";
			b.get();
			break;
		}
		case 12: {
			cout << "******************You Choosed************************\n";
			cout << "Size\n";
			b.sizee();
			break;
		}

		case 13: {
			cout << "******************You Choosed************************\n";
			cout << "Display List\n";
			b.displaylist();
			break;
		}
		case 14: {
			cout << "******************You Choosed************************\n";
			cout << "Delocate List\n";
			b.deallocatelist();
			break;
		}
		case 15: {
			b.zero();
			break;
		}
		case 16: {
			cout << "******************You Choosed To Exit************************\n";
			cout << "\n\n\n\n***********************Thank You !!!! Bye Bye\n\n";
			
			if((b.getmax()) >0)
			{ 
			b.deallocatelist();
			}
			break;
		}
		default:
			break;
		}
	} while (option != 16|| option ==786);


	system("pause");
	return 0;
}