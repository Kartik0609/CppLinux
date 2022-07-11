#include<iostream>
#include<sys/types.h>
#include<unistd.h>


using namespace std;

int main(int argc,char**argv)
{
	int c,pid;

	c=atoi(argv[1]);

	pid = fork();
	if(pid ==0)
	{
		for(int x=1; x<=c; x++)
		{
			if(x%2 !=0)
			cout<<"Odd: "<<x<<" "<<endl;
		}
	}
	else
	{
		sleep(10);
		for(int x=1; x<=c; x++)
		{
			if(x%2 ==0)
			cout<<"Even: "<<x<<" "<<endl;
		}
	}
	return 0;
}
	
