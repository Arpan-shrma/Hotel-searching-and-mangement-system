#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;

void tstar()
{	
	string name;
	string n;
	int price1;
	int price2;
	int price3;
	int price4;
	int netprice;
	char y;
	ofstream file("threestar.txt");	
	if(file.fail())
	{
	cout<<"error in opening file";
	}
	while(1)
	{
		cout<<"enter name of the hotel";
		cin>>name;
		getline(cin,n);
		cout<<"price of room";
		cin>>price1;
		cout<<"price of supply kit";
		cin>>price2;
		cout<<"air conditioning charges";
		cin>>price3;
		cout<<"service tax ";
		cin>>price4;
		netprice=price1+price2+price3+price4;
		cout<<" total rent for room"<<netprice;
		file<<name<<endl<<price1<<endl<<price2<<endl<<price3<<endl<<price4<<endl<<netprice<<endl;
		cout<<"to enter more data press y";
		cin>>y;
		if(y=='y'||y=='Y')
		{
			continue;
		}
		else
		break;
	}
	file.close();
}
void fstar()
{
	char y;
	string name;
	string n;
	int price1;
	int price2;
	int price3;
	int price4;
	int netprice;	
	ofstream file("fivestar.txt");	
	if(file.fail())
	{
	cout<<"error in opening file";
	}
	while(1)
	{
		cout<<"enter name of the hotel";
		cin>>name;
		getline(cin,n);
		cout<<"price of room";
		cin>>price1;
		cout<<"price of supply kit";
		cin>>price2;
		cout<<"air conditioning charges";
		cin>>price3;
		cout<<"service tax ";
		cin>>price4;
		netprice=price1+price2+price3+price4;
		cout<<" total rent for room"<<netprice;
		file<<name<<endl<<price1<<endl<<price2<<endl<<price3<<endl<<price4<<endl<<netprice<<endl;
		cout<<"to enter more data press y";
		cin>>y;
		if(y=='y'||y=='Y')
		{
			continue;
		}
		else
		break;
	}
	file.close();
}
void sstar()
{	
	char y;
	string name;
	string n;
	int price1;
	int price2;
	int price3;
	int price4;
	int netprice;
	ofstream file("sevenstar.txt",ios::app);	
	if(file.fail())
	{
	cout<<"error in opening file";
	}
	while(1)
	{
		cout<<"enter name of the hotel";
		cin>>name;
		getline(cin,n);
		cout<<"price of room";
		cin>>price1;
		cout<<"price of supply kit";
		cin>>price2;
		cout<<"air conditioning charges";
		cin>>price3;
		cout<<"service tax ";
		cin>>price4;
		netprice=price1+price2+price3+price4;
		cout<<" total rent for room"<<netprice;
		file<<name<<n<<endl<<price1<<endl<<price2<<endl<<price3<<endl<<price4<<endl<<netprice<<endl;
		cout<<"to enter more data press y";
		cin>>y;
		if(y=='y'||y=='Y')
		continue;
		else
		break;
	}
	file.close();
}
int main()
{cout<<"enter information for hotels";
	int choice;
	
	while(choice!=4)
	{
		cout<<"\n\t\t\t1.three star hotel information";
		cout<<"\n\t\t\t2.five star hotel information";
		cout<<"\n\t\t\t3.seven star hotel information";
		cout<<"\n\t\t\t4.Exit";
		cout<<"\n\n\t\t\tEnter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: tstar();
					break;
			case 2: fstar();
					break;
			case 3: sstar();
					break;
			case 4: break;
			default:
					{
						cout<<"\n\n\t\t\tWrong choice!!!";
						cout<<"\n\t\t\tPress any key to continue!!";
						getch();
					}
		}
	}
	
}
