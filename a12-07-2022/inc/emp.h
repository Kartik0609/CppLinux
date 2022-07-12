#include<iostream>
#include<sys/types.h>
#include<sys/wait.h>
#include<fstream>
#include<cstring>
#include<unistd.h>

using namespace std;

class emp
{
public:
	int id;
	string name;
	string desig;


	emp(){}
	emp(int i,string n, string d)
	{
		id=i;
		name=n;
		desig=d;
	}
	
		void display()
	{
			cout<<"Emp id: "<<id<<endl;
			cout<<"\nName: "<<name<<endl;
			cout<<"\nDesigtnation: "<<desig<<endl;
	}
};


