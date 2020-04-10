#include<iostream>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
void ntour();
void tour();
void threestar();
void fivestar();
void sevenstar();
void hotels();
void touristplace();
int main()
{int a;
cout<<"welcome to this city";
	cout<<"\n\t\t\t\t************************";
	cout<<"\n\t\t\t\t* welcome to city name *";
	cout<<"\n\t\t\t\t************************";
cout<<"\n***This is a information portal we provide information about hotels, their rents and places to visit in our city*** "<<endl;
cout<<"\nwhich kind information you want---\nPRESS-1: Hotels\nPRESS-2: Tourist Places";
cin>>a;
if(a==1)
{
	hotels();
}
else 
if(a==2)
{
	touristplace();
}
}
void hotels()
{
	cout<<"This city have different type of hotels";
	int choice;
	cout<<"\n\t\t\t\t*****************";
	cout<<"\n\t\t\t\t* choose hotels *";
	cout<<"\n\t\t\t\t*****************";
	while(choice!=4)
	{
		cout<<"\n\n\n\t\t\t1. Three Star Hotel";
		cout<<"\n\t\t\t2. Five Star Hotel";
		cout<<"\n\t\t\t3.Seven Star Hotel";
		cout<<"\n\t\t\t4.Go To Main";
		cout<<"\n\n\t\t\tEnter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: threestar();
					break;
			case 2: fivestar();
					break;
			case 3: sevenstar();
					break;
			case 4: system("cls");
					main();
					break;
			default:
					{
						cout<<"\n\n\t\t\tWrong choice!!!";
						cout<<"\n\t\t\tPress any key to continue!!";
						getch();
					}
		}
	}
	
	
}
void threestar()
{	
	string name;
	int price1,price2,price3,price4,netprice;
	int count=0;
	ifstream file("threestar.txt");
	if(file.is_open())
	{
		while(!file.eof())
		{
			file>>name;
			file>>price1;
			file>>price2;
			file>>price3;
			file>>price4;
			file>>netprice;	
			cout<<"name of hotel = "<<name<<endl<<"price of room"<<price1<<endl<<"supply kit charges"<<price2<<endl<<"air conditioning charges"<<price3<<endl<<"Service Tax"<<price4<<endl<<"Total rent of hotel room = "<<netprice<<endl;	
			
		}
		file.close();
	}
	else
	cout<<"error in opening file"<<endl;
}
void fivestar()
{	
	string name;
	int price1,price2,price3,price4,netprice;
	int count=0;
	ifstream file("fivestar.txt");
	if(file.is_open())
	{
		while(!file.eof())
		{
			file>>name;
			file>>price1;
			file>>price2;
			file>>price3;
			file>>price4;
			file>>netprice;	
			cout<<"name of hotel = "<<name<<endl<<"price of room"<<price1<<endl<<"supply kit charges"<<price2<<endl<<"air conditioning charges"<<price3<<endl<<"Service Tax"<<price4<<endl<<"Total rent of hotel room = "<<netprice<<endl;
			count++;	
			
		}
		file.close();
	}
	else
	cout<<"error in opening file"<<endl;
}
void sevenstar()
{	
	string name;
	int price1,price2,price3,price4,netprice;
	int count=0;
	ifstream file("sevenstar.txt");
	if(file.is_open())
	{
		while(!file.eof())
		{
			file>>name;
			file>>price1;
			file>>price2;
			file>>price3;
			file>>price4;
			file>>netprice;	
			cout<<"name of hotel = "<<name<<endl<<"price of room"<<price1<<endl<<"supply kit charges"<<price2<<endl<<"air conditioning charges"<<price3<<endl<<"Service Tax"<<price4<<endl<<"Total rent of hotel room = "<<netprice<<endl;
			count++;	
			
		}
		file.close();
	}
	else
	cout<<"error in opening file"<<endl;
}
void touristplace()
{
	cout<<"This city has always been centre of attraction ";
	int choice;
	cout<<"\n\t\t\t\t***********************";
	cout<<"\n\t\t\t\t* places to visit are *";
	cout<<"\n\t\t\t\t***********************";
		while(choice!=4)
	{
		cout<<"\n\n\n\t\t\t1. TOURIST PLACES IN THIS CITY";
		cout<<"\n\t\t\t2. TOURIST PLACES NEAR THIS CITY/";
		cout<<"\n\t\t\t3.GO TO THE MAIN";
		cout<<"\n\n\t\t\tEnter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: threestar();
					break;
			case 2: fivestar();
					break;
			case 3: system("cls");
					main();
					break;
			default:
					{
						cout<<"\n\n\t\t\tWrong choice!!!";
						cout<<"\n\t\t\tPress any key to continue!!";
						getch();
					}
		}
	}
}
void tour()
{
	string name;
	ifstream file("tourist.txt");
	if(file.is_open())
	{
		while(!file.eof())
		{
			file>>name;
			cout<<name<<endl;
		}
		file.close();
	}
	else
	cout<<"error in opening file"<<endl;
	
}
void ntour()
{
	string name;
	ifstream file("neartourist.txt");
	if(file.is_open())
	{
		while(!file.eof())
		{
			file>>name;
			cout<<name<<endl;
		}
		file.close();
	}
	else
	cout<<"error in opening file"<<endl;
	
}
