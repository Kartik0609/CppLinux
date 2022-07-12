#include"emp.h"

using namespace std;



int main()

{
	fstream f1;

	emp E(457437,"Kartik Sharma","Manager");

	int x;
	x = fork();	
	
	if(x == 0)
	{ 
		 cout<<"First child starts"<<endl;
	
             
		 fstream f1;
		  f1.open("emp.txt", ios::app);
		  f1.write((char*)&E,sizeof(E));
		  f1.close();
		 cout<<"First child terminates"<<endl;
	}
	else
	{
	          wait(0);
        	cout<<"First parent starts"<<endl;
	
	
		ifstream f2;
		f2.open("Employee.txt",ios::in);
		f2.seekg(0);
	         f2.read((char*)&E,sizeof(E));
		 cout<<"employee name: "<<E.name<<endl;
		 cout<<"designation: "<<E.desig<<endl;
		 cout<<"emp id: "<<E.id<<endl;
		  f2.close();
		 
		   cout<<"First parent terminates"<<endl;
	}
	return 0;
}

