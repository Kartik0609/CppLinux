




#include"emp.h"

using namespace std;

int main()

{
	fstream f1;
	emp L(456354,"Kartik Sharma","Analyst");
	int abc;
	abc == fork();

	if (abc == 0)
	{
		cout<<"First child "<<endl;
		fstream f1;
		f1.open("emp.txt", ios::app);
		f1.write((char*)&L, sizeof(L));
		f1.close();
	}
	else
	{
		wait(0);
		cout<<"First Parent "<<endl;
		fstream f2;
		f2.open("emp.txt",ios::in);
		f2.seekg(0);
		f2.read((char*)&L, sizeof(L));
		cout<<"emp id "<<L.id;
		cout<<"emp name "<<L.name;
		cout<<"designation "<<L.desig;

		f1.close();
	}
	return 0;
}

