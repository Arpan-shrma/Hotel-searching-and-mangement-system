#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
void tour()
{	
	string name;
	string n;
	char y;
	ofstream file("tourist.txt");	
	if(file.fail())
	{
	cout<<"error in opening file";
	}
	while(1)
	{
		cout<<"enter tourist place = ";
		cin>>name;
		getline(cin,n);
		file<<name<<endl;		
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
void tnear()
{	
	string name;
	string n;
	char y;
	ofstream file("neartourist.txt");	
	if(file.fail())
	{
	cout<<"error in opening file";
	}
	while(1)
	{
		cout<<"enter tourist place = ";
		cin>>name;
		getline(cin,n);
		file<<name<<endl;		
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
int main()
{	
	cout<<"press-1: To enter information for tourist place in the city"<<endl
	<<"press-2: To enter information for tourist place near this city"<<endl
	<<"press-3: To exit";
	int choice;
	cin>>choice;
	
	while(choice!=3)
       
		
		switch(choice)
		{
			case 1: tour();
					break;
			case 2: tnear();
			case 3: break;
			default:
					{
						cout<<"\n\n\t\t\tWrong choice!!!";
						cout<<"\n\t\t\tPress any key to continue!!";
						getch();
					}
		}
	}
	
